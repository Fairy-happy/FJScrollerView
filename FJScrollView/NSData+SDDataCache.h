//
//  NSData+SDDataCache.h
//  FJScrollView
//
//  Created by JohnGump on 15-3-30.
//  Copyright (c) 2015年 FJ. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSData (SDDataCache)

- (void)saveDataCacheWithIdentifier:(NSString *)identifier;

+ (NSData *)getDataCacheWithIdentifier:(NSString *)identifier;

+ (void)clearCache;

@end
