//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSUserScriptTask.h>

@class NSDictionary;

@interface NSUserAutomatorTask : NSUserScriptTask
{
    NSDictionary *_variables;
}

+ (BOOL)isValidScriptFile:(id)arg1 error:(id *)arg2;
@property(copy) NSDictionary *variables; // @synthesize variables=_variables;
- (void)executeWithInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

