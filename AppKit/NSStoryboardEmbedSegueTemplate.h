//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSStoryboardSegueTemplate.h>

#import "NSCoding.h"

@class NSView;

@interface NSStoryboardEmbedSegueTemplate : NSStoryboardSegueTemplate <NSCoding>
{
    NSView *_containerView;
}

@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

