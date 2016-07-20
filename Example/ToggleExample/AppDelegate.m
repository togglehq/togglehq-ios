//
//  AppDelegate.m
//  ToggleExample
//
//  Created by Mike Fogg on 12/2/14.
//  Copyright (c) 2014 Toggle. All rights reserved.
//

#import "AppDelegate.h"
@import ToggleHQ;

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Initialize Toggle
    [THQ initWithLaunchOptions:launchOptions clientId:@"624df6f766c36b64141ef9021612836f9336346243108ce78abd59f2889a7a7c" clientSecret:@"5d67ebdec036460f11bd40b30d83cd893cb71c00028897e22d20d8c747da31f4"];
    
    return YES;
}

- (void)application:(UIApplication *)app didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken
{
    [THQNotify enableDevice:deviceToken];
}
@end
