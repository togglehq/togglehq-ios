//
//  Toggle.h
//  ToggleExample
//
//  Created by Mike Fogg on 10/21/15.
//  Copyright (c) 2015 Toggle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ToggleHQ/ToggleManager.h>

@interface Toggle : NSObject

//
//  Initialize the Toggle client
//

+ (void)initWithClientId:(NSString *)clientId secret:(NSString *)secret;

//
// Request permission
//

+ (void)requestPushPermission;

//
// Custom settings popup (pre permission)
//

+ (void)requestCustomSettings;
+ (void)requestCustomSettingsWithCallback:(void (^)(int))callback;
+ (void)requestCustomSettingsWithCallback:(void (^)(int))callback color:(UIColor *)color;
+ (void)requestCustomSettingsWithCallback:(void (^)(int))callback color:(UIColor *)color icon:(UIImage *)icon;
+ (void)requestCustomSettingsWithCallback:(void (^)(int))callback color:(UIColor *)color icon:(UIImage *)icon title:(NSString *)title;
+ (void)requestCustomSettingsWithCallback:(void (^)(int))callback color:(UIColor *)color icon:(UIImage *)icon title:(NSString *)title subTitle:(NSString *)subTitle;

//
// Clear the existing user
//

+ (void)clearUser;
+ (void)clearUser:(void (^)(id))success;

//
// Set/get the existing user
//

+ (void)setUser:(NSString *)userId;
+ (void)setUser:(NSString *)userId success:(void (^)(id))success;
+ (void)setUser:(NSString *)userId success:(void (^)(id))success failure:(void (^)(id))failure;
+ (NSString *)getUser;

//
// Manage the current users devices
//

+ (void)addDevice:(id)token;
+ (void)addDevice:(id)token success:(void (^)(id))success;
+ (void)addDevice:(id)token success:(void (^)(id))success failure:(void (^)(id))failure;

//
// Manage the current users settings
//

+ (void)getSettings:(void (^)(id))success;
+ (void)getSettings:(void (^)(id))success failure:(void (^)(id))failure;
+ (void)enableSetting:(NSString *)setting;
+ (void)disableSetting:(NSString *)setting;

@end