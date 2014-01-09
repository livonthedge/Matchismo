//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Timothy Scott on 12/23/13.
//  Copyright (c) 2013 Eternal Enigma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

@interface CardMatchingGame : NSObject

// designated initializer
- (instancetype)initWithCardCount:(NSUInteger)count usingDeck:(Deck *)deck;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;
- (void)setMatchMode:(NSString *)matchMode;

@property (nonatomic, readonly) NSInteger score;

@end
