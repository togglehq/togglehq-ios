//
//  ToggleBaseUIViewController.m
//  ToggleExample
//

#import "ToggleBaseViewController.h"
#import <ToggleHQ/ToggleHQ.h>

@interface ToggleBaseViewController ()

@end

BOOL firstLoad;

@implementation ToggleBaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.

    // First time showing it :)
    firstLoad = YES;

    // Set the user
    [Toggle setUser:@"testuser"];
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];

    // Set the title
    self.title = @"Welcome";
    self.navigationController.navigationBar.tintColor = [UIColor whiteColor];
    self.navigationController.navigationBar.barTintColor = [UIColor colorWithRed:0.60 green:0.85 blue:0.38 alpha:1.0];
}

- (void)viewDidAppear:(BOOL)animated {
    // Request the custom settings
    if(firstLoad){
        [Toggle requestCustomSettingsWithCallback:^(int index){
            if(index == 1){
                 ToggleListViewController *toggleListViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"ToggleListViewController"];
                [self.navigationController pushViewController:toggleListViewController animated:YES];
            }
        } color:[UIColor colorWithRed:0.60 green:0.85 blue:0.38 alpha:1.0]];

        // No longer the first load :)
        firstLoad = NO;
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)didTouchUp:(id)sender {
    NSLog(@"Button Pressed!");
}

@end
