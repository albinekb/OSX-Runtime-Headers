//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSScriptCommand.h>

@class NSScriptObjectSpecifier;

@interface NSCloneCommand : NSScriptCommand
{
    NSScriptObjectSpecifier *_keySpecifier;
}

+ (BOOL)_getArguments:(id)arg1 withParameters:(CDStruct_89ddc8e1)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)performDefaultImplementation;
@property(readonly, retain) NSScriptObjectSpecifier *keySpecifier;
- (void)dealloc;
- (void)setReceiversSpecifier:(id)arg1;

@end

