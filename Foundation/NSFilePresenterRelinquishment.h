//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface NSFilePresenterRelinquishment : NSObject
{
    NSCountedSet *_blockingAccessClaimIDs;
    CDUnknownBlockType _reacquirer;
}

- (void)removeAllBlockingAccessClaimIDs;
- (void)removeBlockingAccessClaimID:(id)arg1;
- (void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (void)setReacquirer:(CDUnknownBlockType)arg1;
- (BOOL)addBlockingAccessClaimID:(id)arg1;
- (void)dealloc;

@end

