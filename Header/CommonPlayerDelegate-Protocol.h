//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol CommonPlayerDelegate <NSObject>
- (void)onCommonPlayerPlayAtTime:(double)arg1 withPath:(NSString *)arg2;
- (void)onCommonPlayerError:(NSDictionary *)arg1 withPath:(NSString *)arg2;
- (void)onCommonPlayerPauseWithPath:(NSString *)arg1;
- (void)onCommonPlayerEndWithPath:(NSString *)arg1;
- (void)onCommonPlayerStopWithPath:(NSString *)arg1;
- (void)onCommonPlayerPlayWithPath:(NSString *)arg1;
@end
