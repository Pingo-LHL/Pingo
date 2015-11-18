//
//  MatchesController.h
//  Pingo
//
//  Created by Samer Rohani on 2015-11-16.
//  Copyright © 2015 Samer Rohani. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MatchesViewCell.h"

@class DetailedMatchController;

@interface MatchesController : UITableViewController

@property (strong, nonatomic) DetailedMatchController *detailMatchController;

@end
