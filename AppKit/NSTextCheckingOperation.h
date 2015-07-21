//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSDictionary, NSOrthography, NSString;

@interface NSTextCheckingOperation : NSOperation
{
    NSString *_string;
    struct _NSRange _range;
    unsigned long long _offset;
    unsigned long long _checkingTypes;
    NSDictionary *_options;
    long long _tag;
    long long _sequenceNumber;
    id _completionHandler;
    NSArray *_results;
    NSOrthography *_orthography;
    long long _wordCount;
}

- (void)main;
- (void)performCompletionHandler;
@property(readonly) long long wordCount;
@property(readonly) NSOrthography *orthography;
@property(readonly) NSArray *results;
@property(readonly) long long sequenceNumber;
- (void)dealloc;
- (id)initWithString:(id)arg1 range:(struct _NSRange)arg2 offset:(unsigned long long)arg3 types:(unsigned long long)arg4 options:(id)arg5 tag:(long long)arg6 sequenceNumber:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;

@end

