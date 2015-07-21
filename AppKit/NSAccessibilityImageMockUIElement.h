//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSAccessibilityIndexedMockUIElement.h>

@class NSString;

@interface NSAccessibilityImageMockUIElement : NSAccessibilityIndexedMockUIElement
{
    struct CGRect _bounds;
    NSString *_description;
    NSString *_help;
}

- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityHelpAttribute;
- (id)accessibilitySizeAttribute;
- (id)accessibilityPositionAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityAttributeNames;
- (struct CGRect)bounds;
- (void)dealloc;
- (id)initWithParent:(id)arg1 index:(long long)arg2 bounds:(struct CGRect)arg3 description:(id)arg4 help:(id)arg5;

@end
