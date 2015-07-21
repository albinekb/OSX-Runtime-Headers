//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@class NSMutableArray, NSString, NSTextStorage;

@interface NSTextStorageElementArray : NSArray
{
    NSTextStorage *_container;
    NSString *_key;
    unsigned long long _count;
    NSMutableArray *_elements;
}

- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)tokenizeToCount:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 key:(id)arg2;

@end
