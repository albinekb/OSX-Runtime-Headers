//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@interface NSLevelIndicatorCell : NSActionCell
{
    double _value;
    double _minValue;
    double _maxValue;
    double _warningValue;
    double _criticalValue;
    int _numberOfTickMarks;
    int _numberOfMajorTickMarks;
    struct {
        unsigned int indicatorStyle:4;
        unsigned int tickMarkPosition:1;
        unsigned int selectable:1;
        unsigned int ratingPlaceholder:1;
        unsigned int reserved:25;
    } _liFlags;
    struct CGRect _cellFrame;
    int _reserved1;
    int _reserved2;
    int _reserved3;
    int _reserved4;
}

+ (BOOL)prefersTrackingUntilMouseUp;
+ (void)initialize;
- (void)setImage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)keyDown:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)setSelectable:(BOOL)arg1;
- (BOOL)isSelectable;
- (BOOL)acceptsFirstResponder;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)setDoubleValue:(double)arg1;
- (double)doubleValue;
- (void)setFloatValue:(float)arg1;
- (float)floatValue;
- (void)setIntegerValue:(long long)arg1;
- (long long)integerValue;
- (void)setIntValue:(int)arg1;
- (int)intValue;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (double)tickMarkValueAtIndex:(long long)arg1;
- (struct CGRect)rectOfTickMarkAtIndex:(long long)arg1;
@property long long numberOfMajorTickMarks;
@property long long numberOfTickMarks;
@property unsigned long long tickMarkPosition;
@property double criticalValue;
@property double warningValue;
@property double maxValue;
@property double minValue;
@property unsigned long long levelIndicatorStyle;
- (id)initWithLevelIndicatorStyle:(unsigned long long)arg1;
- (id)initTextCell:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)init;
- (struct CGRect)_rectOfDiscreteBrickAtIndex:(long long)arg1 withDrawingRect:(struct CGRect)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)_updateTrackingValueForPoint:(struct CGPoint)arg1;
- (struct CGSize)_rankIndicatorSize;
- (void)_drawTickMarksWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawRatingWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_efectiveDrawRatingPlaceholder;
- (void)setAlwaysDrawRatingPlaceholder:(BOOL)arg1;
- (BOOL)alwaysDrawRatingPlaceholder;
- (double)_dotFadeAlpha;
- (id)_starColorOnDark:(BOOL)arg1;
- (void)_drawDiscreteCapacityWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawContinuousCapacityWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawRelevancyWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAllowedValuesAttributeSettable;
- (id)accessibilityAllowedValuesAttribute;
- (BOOL)accessibilityIsChildrenValueAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsCriticalValueAttributeSettable;
- (id)accessibilityCriticalValueAttribute;
- (BOOL)accessibilityIsWarningValueAttributeSettable;
- (id)accessibilityWarningValueAttribute;
- (BOOL)accessibilityIsMaxValueAttributeSettable;
- (id)accessibilityMaxValueAttribute;
- (BOOL)accessibilityIsMinValueAttributeSettable;
- (id)accessibilityMinValueAttribute;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (id)accessibilityOrientationAttribute;
- (void)accessibilitySetValueAttribute:(id)arg1;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityAttributeNames;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityRoleAttribute;

@end

