//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMutableArray, NSPopoverToolbar, NSStackView;

__attribute__((visibility("hidden")))
@interface _NSPopoverToolbarView : NSView
{
    NSPopoverToolbar *_toolbar;
    NSMutableArray *_tabButtons;
    NSStackView *_stackView;
    NSView *_separatorView;
}

+ (BOOL)requiresConstraintBasedLayout;
@property NSPopoverToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void)dealloc;
- (void)updateConstraints;
- (void)_tabButtonPressed:(id)arg1;
- (void)_reloadViews;
- (void)updateSelectedIndex;
- (id)initWithFrame:(struct CGRect)arg1;

@end

