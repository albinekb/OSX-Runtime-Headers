//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSNumber;

__attribute__((visibility("hidden")))
@interface NSSplitDividerView : NSView
{
    long long _style;
    long long _orientation;
    NSColor *_backgroundColor;
    NSNumber *_thickness;
    id _backgroundLayer;
}

- (struct __CFString *)_coreUIState;
- (struct __CFString *)_coreUIOrientation;
- (struct __CFString *)_coreUIDimpleVariant;
- (BOOL)_isInTexturedWindow;
- (id)_coreUIOptions;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawDimpleInRect:(struct CGRect)arg1;
- (void)updateLayer;
- (BOOL)allowsVibrancy;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
@property(copy) NSColor *backgroundColor;
@property(copy) NSNumber *thickness;
- (double)effectiveThickness;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
@property long long orientation;
@property long long style;
- (BOOL)shouldBeArchived;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 orientation:(long long)arg2;

@end

