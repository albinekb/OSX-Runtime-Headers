//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSArrayDetailBinder.h>

@interface NSTreeDetailBinder : NSArrayDetailBinder
{
    struct __treeDetailBinderFlags {
        unsigned int _reservedTreeDetailBinder:32;
    } _treeDetailBinderFlags;
}

+ (id)binderClassesSuperseded;
+ (BOOL)isUsableWithObject:(id)arg1;
- (void)_selectAllContent:(id)arg1 inDetailController:(id)arg2;
- (BOOL)_handlesSelectAll;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

