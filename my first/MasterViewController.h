//
//  MasterViewController.h
//  my first
//
//  Created by Marta Serrano on 06/02/14.
//  Copyright (c) 2014 Marta Serrano. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
