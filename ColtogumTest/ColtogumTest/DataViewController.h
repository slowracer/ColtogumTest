//
//  DataViewController.h
//  ColtogumTest
//
//  Created by Nino Scherrer on 17.12.11.
//  Copyright (c) 2011 SFS services AG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;
@end
