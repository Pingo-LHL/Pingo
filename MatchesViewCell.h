//
//  MatchesViewCell.h
//  Pingo
//
//  Created by Samer Rohani on 2015-11-16.
//  Copyright © 2015 Samer Rohani. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MatchesViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *team1;
@property (weak, nonatomic) IBOutlet UILabel *score;
@property (weak, nonatomic) IBOutlet UILabel *team2;

@end
