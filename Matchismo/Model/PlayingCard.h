//
//  PlayingCard.h
//  Matchismo
//
//  Created by Timothy Scott on 12/22/13.
//  Copyright (c) 2013 Eternal Enigma. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
