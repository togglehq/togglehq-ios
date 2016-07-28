//
//  ToggleListViewController.h
//  ToggleExample
//
//  Created by Mike Fogg on 1/27/15.
//  Copyright (c) 2015 Toggle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
@import Underscore_m;
#import "Underscore.h"
#import <ToggleHQ/Toggle.h>
#import <ToggleHQ/ToggleListViewSingleCell.h>

#define _ Underscore

@interface ToggleListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

// The table view
@property (nonatomic, weak) IBOutlet UITableView *listTable;

// Activity
@property (nonatomic, strong) UIActivityIndicatorView *activityIndicatorView;

// The table data
@property (strong, nonatomic) NSMutableArray *tableData;

@end
