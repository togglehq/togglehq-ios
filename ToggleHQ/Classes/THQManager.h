//
//  Toggle.h
//  ToggleExample
//
//  Created by Mike Fogg on 10/21/15.
//  Copyright (c) 2015 Toggle. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface THQManager : NSObject

//
// Toggle Properties
//

@property (nonatomic, retain) NSString *clientId;
@property (nonatomic, retain) NSString *clientSecret;
@property (nonatomic, retain) NSString *origin;
@property (nonatomic, retain) NSString *access_token;
@property (nonatomic, retain) NSDate *access_token_expires;
@property (nonatomic, retain) NSString *current_user;

//
//  Initialize the Toggle client
//

- (instancetype)initWithLaunchOptions:(NSDictionary *)launchOptions clientId:(NSString *)clientId clientSecret:(NSString *)clientSecret;

//
// API Calls
//

- (void)getUrl:(NSString *)url parameters:(NSDictionary *)parameters success:(void (^)(id))success failure:(void (^)(id))failure;
- (void)postUrl:(NSString *)url parameters:(NSDictionary *)parameters success:(void (^)(id))success failure:(void (^)(id))failure;
- (void)patchUrl:(NSString *)url parameters:(NSDictionary *)parameters success:(void (^)(id))success failure:(void (^)(id))failure;

//
// Unassign this device from all users
//

- (void)unassignDevice;
- (void)unassignDevice:(void (^)(id))success;
- (void)unassignDevice:(void (^)(id))success failure:(void (^)(id))failure;

//
// Assign this device to a user
//

- (void)assignDeviceToUser:(NSString *)userId;
- (void)assignDeviceToUser:(NSString *)userId success:(void (^)(id))success;
- (void)assignDeviceToUser:(NSString *)userId success:(void (^)(id))success failure:(void (^)(id))failure;

//
// Universally unique device identifier
//

- (NSString *)currentDevice;

//
// Get the current user
//

- (NSString *)currentUser;

//
// Get the current device token
//

- (NSString *)currentDeviceToken;

//
// Set the current device token
//

- (void)setCurrentDeviceToken:(NSString *)token;

@end
