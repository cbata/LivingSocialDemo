//
//  DetailViewController.h
//  LivingSocialChallenge
//
//  Created by Chris Bata on 1/10/13.
//  Copyright (c) 2013 Chris Bata. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
