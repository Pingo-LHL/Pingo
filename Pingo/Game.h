//
//  Game.h
//  Pingo
//
//  Created by Kelo Akalamudo on 11/17/15.
//  Copyright © 2015 Samer Rohani. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Game : NSObject

@property (nonatomic) NSString *team1;
@property (nonatomic) NSString *team2;



@property (nonatomic) NSString *team1score;
@property (nonatomic) NSString *team2score;


@property (nonatomic) int *period;
@property (nonatomic) int *timeMin;
@property (nonatomic) int *timSec;

@property (nonatomic) NSArray *playNumber;




@end
