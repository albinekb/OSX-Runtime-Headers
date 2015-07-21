//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAccessibilityElement.h"

@class NSMenuToolbar;

@interface NSMenuToolbarAccessibilityElement : NSAccessibilityElement
{
    NSMenuToolbar *_toolbar;
}

@property(readonly, nonatomic) __weak NSMenuToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void).cxx_destruct;
- (int)accessibilityWindowNumber;
- (BOOL)accessibilityPerformCancel;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)setAccessibilitySelectedChildren:(id)arg1;
- (id)accessibilitySelectedChildren;
- (id)accessibilityChildren;
- (id)accessibilitySubrole;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (id)accessibilityParent;
- (id)accessibilityVisibleChildren;
- (struct CGRect)accessibilityFrame;
- (BOOL)isAccessibilityFocused;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilityElement;
- (id)initWithMenuToolbar:(id)arg1;

@end

