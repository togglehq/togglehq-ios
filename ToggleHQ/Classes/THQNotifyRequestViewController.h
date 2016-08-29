//
//  THQNotifyRequestViewController.h
//  ToggleHQ
//
//  Created by Mike Fogg on 8/15/16.
//  Copyright © 2016 Mike Fogg. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface THQNotifyRequestViewController : UIViewController
    // Load
    - (instancetype)initWithColor:(UIColor *)color icon:(UIImage *)icon header:(NSString *)header subHeader:(NSString *)subHeader;

    // Interface UI
    @property (strong, retain) UIColor *popupColor;
    @property (strong, retain) UIImage *popupIcon;
    @property (strong, retain) NSString *popupHeader;
    @property (strong, retain) NSString *popupSubHeader;

    @property (strong, nonatomic) IBOutlet UIImageView *alertIcon;
    @property (strong, nonatomic) IBOutlet UILabel *headerLabel;
    @property (strong, nonatomic) IBOutlet UILabel *subheaderLabel;
    @property (strong, nonatomic) IBOutlet UIButton *keepMeUpdatedButton;
    @property (strong, nonatomic) IBOutlet UIButton *customizeButton;
    @property (strong, nonatomic) IBOutlet UIButton *noThanksButton;

    - (IBAction)keepMeUpdatedButtonTapped:(id)sender;
    - (IBAction)customizeButtonTapped:(id)sender;
    - (IBAction)noThanksButtonTapped:(id)sender;
@end
