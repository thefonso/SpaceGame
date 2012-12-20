//
//  AppDelegate.h
//  SpaceGame
//
//  Created by gideon on 5/19/11.
//  Copyright SkyGraFx 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
