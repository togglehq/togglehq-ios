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
#import <AFNetworking/AFNetworking.h>
#import <AFNetworking/AFHTTPRequestOperation.h>
#import <AFNetworking/AFHTTPRequestOperationManager.h>
@import SCLAlertView_Objective_C;
#import <SCLAlertView_Objective_C/SCLAlertView.h>
#import <SCLAlertView_Objective_C/SCLAlertViewStyleKit.h>
#import <ToggleHQ/ToggleListViewController.h>

@interface ToggleManager : NSObject

//
// Toggle Properties
//

@property (nonatomic, retain) NSString *clientId;
@property (nonatomic, retain) NSString *clientSecret;
@property (nonatomic, retain) NSString *origin;
@property (nonatomic, retain) NSString *api_version;
@property (nonatomic, retain) NSString *nsp;
@property (nonatomic, retain) NSString *access_token;
@property (nonatomic, retain) NSString *current_user;

//
//  Initialize the Toggle client
//

-(instancetype)initWithClientId:(NSString *)clientId clientSecret:(NSString *)clientSecret;

//
// Requesting push permission
//

-(void)requestPushPermission;

//
// Popup the custom settings request
//

-(void)requestCustomSettings;
-(void)requestCustomSettingsWithCallback:(void (^)(int))callback;
-(void)requestCustomSettingsWithCallback:(void (^)(int))callback color:(UIColor *)color;
-(void)requestCustomSettingsWithCallback:(void (^)(int))callback color:(UIColor *)color icon:(UIImage *)icon;
-(void)requestCustomSettingsWithCallback:(void (^)(int))callback color:(UIColor *)color icon:(UIImage *)icon title:(NSString *)title;
-(void)requestCustomSettingsWithCallback:(void (^)(int))callback color:(UIColor *)color icon:(UIImage *)icon title:(NSString *)title subTitle:(NSString *)subTitle;

//
// Manage a device for this user
//

-(void)addDevice:(id)token;
-(void)addDevice:(id)token success:(void (^)(id))success;
-(void)addDevice:(id)token success:(void (^)(id))success failure:(void (^)(id))failure;

//
// Manage a setting for this user
//

-(void)enableSetting:(NSString *)setting;
-(void)disableSetting:(NSString *)setting;

//
// Clear the user identifier
//
-(void)clearUser;
-(void)clearUser:(void (^)(id))success;

//
// Set the current user identifier
//

-(void)setUser:(NSString *)userId;
-(void)setUser:(NSString *)userId success:(void (^)(id))success;
-(void)setUser:(NSString *)userId success:(void (^)(id))success failure:(void (^)(id))failure;
-(NSString *)getUser;

//
//  Get a users settings
//

-(void)getSettings:(void (^)(id))success;
-(void)getSettings:(void (^)(id))success failure:(void (^)(id))failure;

@end
