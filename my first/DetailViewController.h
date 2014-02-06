//
//  DetailViewController.h
//  my first
//
//  Created by Marta Serrano on 06/02/14.
//  Copyright (c) 2014 Marta Serrano. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
