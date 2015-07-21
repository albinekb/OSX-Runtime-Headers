//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface NSDistributedLock : NSObject
{
    void *_priv;
}

+ (id)lockWithPath:(id)arg1;
- (id)description;
@property(readonly, copy) NSDate *lockDate;
- (void)breakLock;
- (void)unlock;
- (BOOL)tryLock;
- (void)finalize;
- (void)dealloc;
- (void)invalidate;
- (id)initWithPath:(id)arg1;
- (id)init;

@end
