//
//  DemoTableViewCell.m
//  LivingSocialChallenge
//
//  Created by Chris Bata on 1/10/13.
//  Copyright (c) 2013 Chris Bata. All rights reserved.
//

#import "DemoTableViewCell.h"

@implementation DemoTableViewCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
