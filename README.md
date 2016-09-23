# ToggleHQ iOS SDK

[![Version](https://img.shields.io/cocoapods/v/ToggleHQ.svg?style=flat)](http://cocoapods.org/pods/ToggleHQ)
[![License](https://img.shields.io/cocoapods/l/ToggleHQ.svg?style=flat)](http://cocoapods.org/pods/ToggleHQ)
[![Platform](https://img.shields.io/cocoapods/p/ToggleHQ.svg?style=flat)](http://cocoapods.org/pods/ToggleHQ)

## Requirements

The ToggleHQ SDK requires iOS 8.0+

## Installation

ToggleHQ is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "ToggleHQ"
```

Create your application by visiting [ToggleHQ.com](https://togglehq.com) and either registering or logging into an existing account. Once you're in head to **App Settings** > **API Access** and grab your **Mobile OAuth Credentials**. You'll use those to install ToggleHQ to your app delegate.

```objective-c
// AppDelegate.m

#import "AppDelegate.h"
@import ToggleHQ;

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Initialize Toggle
    [THQ initWithLaunchOptions:launchOptions clientId:@"your-mobile-oauth-client-id" clientSecret:@"your-mobile-oauth-secret"];

    return YES;
}

- (void)application:(UIApplication *)app didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken
{
    [THQNotify enableDevice:deviceToken];
}
@end
```

## Basic Usage

Using these implementation methods are the quickest and fastest way to get ToggleHQ installed and running in your app.

**Reminder:** On any page that uses our SDK must include:

```
@import ToggleHQ;
```

#### On Login/Signup Assign This Device to a User

```objective-c
[THQ assignDeviceToUser:@"user-1234"];
```

#### Display Preferences Popup

```objective-c
// Simple
[THQNotify requestCustomPreferences];

// Advanced
[THQNotify requestCustomPreferencesWithColor:[UIColor colorWithRed:0.23 green:0.36 blue:0.59 alpha:1.0]
                                        icon:[UIImage imageNamed:@"thq-alert-icon-default.png"];
                                        header:@"Stay Up To Date"
                                        subHeader:@"Turn on notifications to make sure you don't miss anything you care about!"];
```

#### Open Preferences Page

```objective-c
[THQNotify openPreferencesWithNavigationController:self.navigationController];
```

#### On Logout Unassign This Device to a User

```objective-c
[THQ unassignDeviceToUser];
```


## Additional Usage

While above displays the simplest methods for using ToggleHQ, you are also able to use more advanced methods to create a more customized solution.

#### Enable a preference for the current user or device

```objective-c
[THQNotify enablePreferenceWithCategory:@"category_key" preference:@"preference_key"];
```

#### Disable a preference for the current user or device

```objective-c
[THQNotify disablePreferenceWithCategory:@"category_key" preference:@"preference_key"];
```

#### Get all preferences for the current user or device

```objective-c
[THQNotify getPreferences:^(NSArray *response) {
  // Success
  // response: An array of categories and preferences
}
failure:^(id error) {
  // Failure
}];
```


## License

The ToggleHQ SDK is available under the MIT license. See the LICENSE file for more info.
