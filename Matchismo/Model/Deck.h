//
//  Deck.h
//  Matchismo
//
//  Created by Timothy Scott on 12/22/13.
//  Copyright (c) 2013 Eternal Enigma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
