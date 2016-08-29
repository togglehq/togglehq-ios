//
//  Widget.h
//  Toggle
//
//  Created by Mike Fogg on 11/20/14.
//  Copyright (c) 2014 Mike Fogg. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <sys/utsname.h>

@import AFNetworking;
@import STPopup;

@interface THQNotify : NSObject

//
// Requesting push permission
//

+ (void)requestPushPermissions;

//
// Popup the custom settings request
//

+ (void)requestCustomSettings;
+ (void)requestCustomSettingsWithColor:(UIColor *)color;
+ (void)requestCustomSettingsWithColor:(UIColor *)color icon:(UIImage *)icon;
+ (void)requestCustomSettingsWithColor:(UIColor *)color icon:(UIImage *)icon header:(NSString *)header;
+ (void)requestCustomSettingsWithColor:(UIColor *)color icon:(UIImage *)icon header:(NSString *)header subHeader:(NSString *)subHeader;

//
// Enable the device
//

+ (void)enableDevice:(NSData *)data;
+ (void)enableDevice:(NSData *)data success:(void (^)(id))success;
+ (void)enableDevice:(NSData *)data success:(void (^)(id))success failure:(void (^)(id))failure;

//
// Enable a setting for the current_user
//

+ (void)enableSettingWithGroup:(NSString *)group setting:(NSString *)setting;
+ (void)enableSettingWithGroup:(NSString *)group setting:(NSString *)setting success:(void (^)(id))success;
+ (void)enableSettingWithGroup:(NSString *)group setting:(NSString *)setting success:(void (^)(id))success failure:(void (^)(id))failure;

//
// Disable a setting for the current_user
//

+ (void)disableSettingWithGroup:(NSString *)group setting:(NSString *)setting;
+ (void)disableSettingWithGroup:(NSString *)group setting:(NSString *)setting success:(void (^)(id))success;
+ (void)disableSettingWithGroup:(NSString *)group setting:(NSString *)setting success:(void (^)(id))success failure:(void (^)(id))failure;;

//
// Enable ONLY a setting for the current_user (disables all but this one)
//

+ (void)enableOnlySettingWithGroup:(NSString *)group setting:(NSString *)setting;
+ (void)enableOnlySettingWithGroup:(NSString *)group setting:(NSString *)setting success:(void (^)(id))success;
+ (void)enableOnlySettingWithGroup:(NSString *)group setting:(NSString *)setting success:(void (^)(id))success failure:(void (^)(id))failure;

// Verify a device has push enabled

+ (void)verifyPushEnabled;
+ (void)verifyPushEnabled:(void (^)(id))success;
+ (void)verifyPushEnabled:(void (^)(id))success failure:(void (^)(id))failure;

//
//  Get the current settings for a device
//

+ (void)getSettings:(void (^)(id))success;
+ (void)getSettings:(void (^)(id))success failure:(void (^)(id))failure;

//
// Open the settings window
//

+ (void)openSettingsWithNavigationController:(UINavigationController *)navigationController;

//
// Global Default UI Elements
//

+ (UIColor *)defaultNotificationColor;
+ (UIImage *)defaultNotificationIcon;
+ (NSString *)defaultNotificationHeader;
+ (NSString *)defaultNotificationSubHeader;

@end
