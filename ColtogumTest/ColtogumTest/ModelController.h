//
//  ModelController.h
//  ColtogumTest
//
//  Created by Nino Scherrer on 17.12.11.
//  Copyright (c) 2011 SFS services AG. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>
- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;
@end
