/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface _UITransitionState : NSObject
{
    int _transitionDirection;
    id _completion;
    NSDate *_beginDate;
}

@property(readonly, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(readonly, nonatomic) int transitionDirection; // @synthesize transitionDirection=_transitionDirection;
- (id)description;
- (BOOL)isCompatibleWithTransitionInDirection:(int)arg1;
@property(readonly, nonatomic) int effectiveTransitionDirection;
- (void)cleanupWithFinishedState:(BOOL)arg1 completedState:(BOOL)arg2;
- (void)markBeginDate;
@property(readonly, nonatomic, getter=isActive) BOOL active;
- (void)dealloc;
- (id)initWithTransitionDirection:(int)arg1 completion:(id)arg2;

@end

