//
//  Player.h
//  StockMarket
//
//  Created by Brandon Fink on 10/18/14.
//  Copyright (c) 2014 Brandon Fink. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property NSString *name;
@property double money;
@property NSMutableDictionary *portfolio;


@end
