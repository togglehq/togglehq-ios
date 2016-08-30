//
//  ToggleBaseUIViewController.h
//  ToggleExample
//
//  Created by Mike Fogg on 6/10/16.
//  Copyright © 2016 Toggle. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ToggleBaseViewController : UIViewController

@property (nonatomic) BOOL firstLoad;

@property (weak, nonatomic) IBOutlet UIButton *openSettings;
- (IBAction)didTouchUp:(id)sender;

@end
