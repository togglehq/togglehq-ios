//
//  ToggleBaseUIViewController.h
//  ToggleExample
//

#import <UIKit/UIKit.h>

@interface ToggleBaseViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *openSettings;

- (IBAction)didTouchUp:(id)sender;

@end
