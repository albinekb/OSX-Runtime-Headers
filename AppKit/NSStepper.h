//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import "NSAccessibilityStepper.h"

@class NSString;

@interface NSStepper : NSControl <NSAccessibilityStepper>
{
    unsigned int _reserved1;
    unsigned int _reserved2;
    unsigned int _reserved3;
    unsigned int _reserved4;
}

+ (void)initialize;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformIncrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct NSEdgeInsets)alignmentRectInsets;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
@property BOOL autorepeat;
@property BOOL valueWraps;
@property double increment;
@property double maxValue;
@property double minValue;
- (BOOL)_shouldRerouteCellAPIs;
- (id)ns_widgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

