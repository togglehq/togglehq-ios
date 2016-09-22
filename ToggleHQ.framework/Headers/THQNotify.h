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
// Popup the custom preferences request
//

+ (void)requestCustomPreferences;
+ (void)requestCustomPreferencesWithColor:(UIColor *)color;
+ (void)requestCustomPreferencesWithColor:(UIColor *)color icon:(UIImage *)icon;
+ (void)requestCustomPreferencesWithColor:(UIColor *)color icon:(UIImage *)icon header:(NSString *)header;
+ (void)requestCustomPreferencesWithColor:(UIColor *)color icon:(UIImage *)icon header:(NSString *)header subHeader:(NSString *)subHeader;

//
// Enable the device
//

+ (void)enableDevice:(NSData *)data;
+ (void)enableDevice:(NSData *)data success:(void (^)(id))success;
+ (void)enableDevice:(NSData *)data success:(void (^)(id))success failure:(void (^)(id))failure;

//
// Enable a preference for the current_user
//

+ (void)enablePreferenceWithGroup:(NSString *)category preference:(NSString *)preference;
+ (void)enablePreferenceWithGroup:(NSString *)category preference:(NSString *)preference success:(void (^)(id))success;
+ (void)enablePreferenceWithGroup:(NSString *)category preference:(NSString *)preference success:(void (^)(id))success failure:(void (^)(id))failure;

//
// Disable a preference for the current_user
//

+ (void)disablePreferenceWithGroup:(NSString *)category preference:(NSString *)preference;
+ (void)disablePreferenceWithGroup:(NSString *)category preference:(NSString *)preference success:(void (^)(id))success;
+ (void)disablePreferenceWithGroup:(NSString *)category preference:(NSString *)preference success:(void (^)(id))success failure:(void (^)(id))failure;

// Verify a device has push enabled

+ (void)verifyPushEnabled;
+ (void)verifyPushEnabled:(void (^)(id))success;
+ (void)verifyPushEnabled:(void (^)(id))success failure:(void (^)(id))failure;

//
//  Get the current preferences for a device
//

+ (void)getPreferences:(void (^)(id))success;
+ (void)getPreferences:(void (^)(id))success failure:(void (^)(id))failure;

//
// Open the preferences window
//

+ (void)openPreferencesWithNavigationController:(UINavigationController *)navigationController;

//
// Global Default UI Elements
//

+ (UIColor *)defaultNotificationColor;
+ (UIImage *)defaultNotificationIcon;
+ (NSString *)defaultNotificationHeader;
+ (NSString *)defaultNotificationSubHeader;

@end
