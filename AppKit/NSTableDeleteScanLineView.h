//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBackgroundColorView, NSColor;

__attribute__((visibility("hidden")))
@interface NSTableDeleteScanLineView : NSView
{
    NSBackgroundColorView *_topLineView;
    NSBackgroundColorView *_bottomLineView;
}

@property(copy) NSColor *deleteLineColor; // @dynamic deleteLineColor;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end

