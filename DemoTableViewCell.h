//
//  DemoTableViewCell.h
//  LivingSocialChallenge
//
//  Created by Chris Bata on 1/10/13.
//  Copyright (c) 2013 Chris Bata. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DemoTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *mainImage;
@property (weak, nonatomic) IBOutlet UILabel *itemName;
@property (weak, nonatomic) IBOutlet UILabel *itemUrl;
@property (weak, nonatomic) IBOutlet UILabel *itemPerson;
@property (weak, nonatomic) IBOutlet UIImageView *personImage;
@property (weak, nonatomic) IBOutlet UITextView *itemUrlText;
@end
