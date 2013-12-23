//
//  Card.h
//  Matchismo
//
//  Created by Timothy Scott on 12/21/13.
//  Copyright (c) 2013 Eternal Enigma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
