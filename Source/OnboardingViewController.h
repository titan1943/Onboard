//
//  OnboardingViewController.h
//  Onboard
//
//  Created by Mike on 8/17/14.
//  Copyright (c) 2014 Mike Amaral. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OnboardingContentViewController.h"
@import AVKit;

typedef NS_ENUM(NSInteger, skipButtonStyle) {
    top,
    bottom
};


@interface OnboardingViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate, OnboardingContentViewControllerDelegate>

/**
 * @brief The onboarding content view controllers.
 */
@property (nonatomic, strong) NSArray *viewControllers;


/**
 * @brief The background image that will be visible through the content view controllers.
 */
@property (nonatomic, strong) UIImage *backgroundImage;


/**
 * @brief Determines whether or not the background will be masked. The default value of this property is YES.
 */
@property (nonatomic) BOOL shouldMaskBackground;


/**
 * @brief Determines whether or not the background will be blurred. The default value of this property is NO;
 */
@property (nonatomic) BOOL shouldBlurBackground;


/**
 * @brief Determines whether or not the contents on screen will fade as the user swipes between pages. The default value of this property is NO.
 */
@property (nonatomic) BOOL shouldFadeTransitions;


/**
 * @brief Determines whether or not the background will be masked. The default value of this property is NO.
 */
@property (nonatomic) BOOL fadePageControlOnLastPage;


/**
 * @brief Determines whether or not the skip button will fade away on the last page. The default value of this property is NO.
 */
@property (nonatomic) BOOL fadeSkipButtonOnLastPage;


/**
 * @brief Determines whether or not the ship button will be shown. The default value of this property is NO.
 */
@property (nonatomic) BOOL allowSkipping;


/**
 * @brief A block that will be executed when the skip button is pressed.
 */
@property (nonatomic, strong) dispatch_block_t skipHandler;


/**
 * @brief Determines whether or not swiping is enabled between pages. The default value of this property is YES.
 */
@property (nonatomic) BOOL swipingEnabled;


/**
 * @brief Determines whether or not the page cotrol will be visible.
 */
@property (nonatomic, strong) UIPageControl *pageControl;


/**
 * @brief The skip button that allows users to skip onboarding anytime.
 */
@property (nonatomic, strong) UIButton *skipButton;


/**
 * @brief Determine the skip button style in the view controller, be it in top or bottom. The default value of this property is bottom style
 */
@property (nonatomic) skipButtonStyle preferredSkipButtonStyle;


/**
 * @brief Determines whether or not the movie player stops playing when the view disappears.
 */
@property (nonatomic) BOOL stopMoviePlayerWhenDisappear;


/**
 * @brief The movie player controller used to play background movies.
 */
@property (nonatomic, strong) AVPlayerViewController *moviePlayerController;


/**
 * @brief The padding between the bottom of the screen and the bottom of the page control.
 */
@property (nonatomic) CGFloat underPageControlPadding;


/**
 * @brief Determines whether or not the login button will be shown. The default value of this property is NO.
 */
@property (nonatomic) BOOL allowLogin;


/**
 * @brief A block that will be executed when the login button is pressed.
 */
@property (nonatomic, strong) dispatch_block_t loginHandler;


/**
 * @brief The login button that allows users to login to the apps.
 */
@property (nonatomic, strong) UIButton *loginButton;


/**
 * @brief Determines whether or not the login button will be shown. The default value of this property is NO.
 */
@property (nonatomic) BOOL allowSignUp;


/**
 * @brief A block that will be executed when the sign up button is pressed.
 */
@property (nonatomic, strong) dispatch_block_t signUpHandler;


/**
 * @brief The sign up button that allows users to sign up an account on the apps.
 */
@property (nonatomic, strong) UIButton *signUpButton;


/**
 * @brief The view that layout between both login and sign up button.
 */
@property (nonatomic, strong) UIView *separatorView;


/**
 * @brief Convenience class initializer for onboarding with a backround image.
 * @return An instance of OnboardingViewController with the provided background image and content view controllers.
 */
+ (instancetype)onboardWithBackgroundImage:(UIImage *)backgroundImage contents:(NSArray *)contents;


/**
 * @brief Initializer for onboarding with a backround video.
 * @return An instance of OnboardingViewController with the provided background video and content view controllers.
 */
- (instancetype)initWithBackgroundImage:(UIImage *)backgroundImage contents:(NSArray *)contents;


/**
 * @brief Convenience class initializer for onboarding with a backround video.
 * @return An instance of OnboardingViewController with the provided background video and content view controllers.
 */
+ (instancetype)onboardWithBackgroundVideoURL:(NSURL *)backgroundVideoURL contents:(NSArray *)contents;


/**
 * @brief Initializer for onboarding with a backround video.
 * @return An instance of OnboardingViewController with the provided background video and content view controllers.
 */
- (instancetype)initWithBackgroundVideoURL:(NSURL *)backgroundVideoURL contents:(NSArray *)contents;


/**
 * @brief Method to tell the onboarding view controller to automatically move to the next page.
 */
- (void)moveNextPage;

@end
