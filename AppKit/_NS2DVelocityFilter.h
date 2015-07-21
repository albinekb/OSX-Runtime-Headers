//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _NS1DVelocityFilter;

@interface _NS2DVelocityFilter : NSObject
{
    _NS1DVelocityFilter *xFilter;
    _NS1DVelocityFilter *yFilter;
}

- (BOOL)resetIfOutOfDate:(double)arg1;
- (void)reset;
- (void)addDelta:(struct CGPoint)arg1 withTimestamp:(double)arg2;
@property(readonly) struct CGPoint filteredVelocity;
@property double maxAllowedVelocity;
@property(readonly) double lastTimestamp;
- (void)dealloc;
- (id)init;

@end

