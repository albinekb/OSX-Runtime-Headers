//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSKeySetBinding.h>

__attribute__((visibility("hidden")))
@interface _NSSelectorSetBinding : NSKeySetBinding
{
    SEL setSel;
    CDUnknownFunctionPointerType setMethod;
    CDUnknownFunctionPointerType set;
}

- (BOOL)isScalarProperty;
- (void)setValue:(id)arg1 inObject:(id)arg2;
- (id)initWithSetFunc:(CDUnknownFunctionPointerType)arg1 forImp:(CDUnknownFunctionPointerType)arg2 selector:(SEL)arg3;

@end

