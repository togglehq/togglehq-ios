//
//  THQNotifyPreferencesViewController.h
//  ToggleExample
//
//  Created by Mike Fogg on 1/27/15.
//  Copyright (c) 2015 Toggle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

#define _ Underscore

@interface THQNotifyPreferencesViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

// The table view
@property (nonatomic, strong) IBOutlet UITableView *tableView;

// The done button
@property (nonatomic, strong) IBOutlet UIBarButtonItem *doneButton;

// Activity
@property (nonatomic, strong) UIActivityIndicatorView *activityIndicatorView;

// The table data
@property (strong, nonatomic) NSMutableArray *tableData;

- (instancetype)initInPopup;

@end

//
// Create a small custom class for the switches
//

@interface THQNotifySwitch : UISwitch
    @property (nonatomic, strong) NSString *category;
    @property (nonatomic, strong) NSString *preference;
@end
