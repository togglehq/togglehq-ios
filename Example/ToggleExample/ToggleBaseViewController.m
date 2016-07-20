//
//  ToggleBaseUIViewController.m
//  ToggleExample
//
//  Created by Mike Fogg on 6/10/16.
//  Copyright © 2016 Toggle. All rights reserved.
//

#import "ToggleBaseViewController.h"
@import ToggleHQ;

@implementation ToggleBaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.firstLoad = YES;
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    // Set the title
    self.title = @"Welcome";
    self.navigationController.navigationBar.tintColor = [UIColor whiteColor];
    self.navigationController.navigationBar.barTintColor = [UIColor blackColor];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    // Perform this action only the first time the window is opened
    if(self.firstLoad){
        // Show the ToggleHQ Popup
        [THQNotify requestCustomPreferences];
        self.firstLoad = false;
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

- (IBAction)didTouchUp:(id)sender {
    [THQNotify openPreferencesWithNavigationController:self.navigationController];
}

@end
