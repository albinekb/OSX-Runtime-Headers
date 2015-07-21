//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@class NSMutableArray;

@interface NSSegmentedCell : NSActionCell
{
    NSMutableArray *_segmentItems;
    long long _selectedSegment;
    long long _keySegment;
    struct CGRect _lastBounds;
    struct {
        unsigned int trackingMode:3;
        unsigned int trimmedLabels:1;
        unsigned int drawing:1;
        unsigned int reserved1:2;
        unsigned int recalcToolTips:1;
        unsigned int usesWindowsStyle:1;
        unsigned int dontShowSelectedAndPressedAppearance:1;
        unsigned int menuShouldBeUniquedAgainstMain:1;
        unsigned int style:8;
        unsigned int flatMinX:1;
        unsigned int flatMaxX:1;
        unsigned int segmentedSeparated:1;
        unsigned int reserved:10;
    } _seFlags;
    id _segmentTrackingInfo;
    id _menuUniquer;
    long long _reserved3;
    long long _reserved4;
}

+ (BOOL)prefersTrackingUntilMouseUp;
+ (id)_labelCell;
+ (double)_cuiPixelHeightForStyle:(long long)arg1 size:(unsigned long long)arg2 scale:(double)arg3 currentAppearance:(id)arg4 semanticContext:(int)arg5;
+ (double)_verticalScaleForControlView:(id)arg1;
+ (long long)_applicableStyleForBaseStyle:(long long)arg1 automaticStyle:(BOOL)arg2 usesWindowsStyle:(BOOL)arg3 segmentedSeparatedStyle:(BOOL)arg4 shouldUseTexturedToolbarStyle:(BOOL)arg5;
+ (BOOL)_styleNeedsRolloverTracking:(long long)arg1;
+ (BOOL)_isTexturedStyle:(long long)arg1;
+ (BOOL)_isStyleSeparated:(long long)arg1;
+ (BOOL)_isStyleAutomatic:(long long)arg1;
+ (void)_debugDrawOnePixelFrameRect:(struct CGRect)arg1 color:(id)arg2 draw:(BOOL)arg3;
+ (BOOL)_segmentStyleShowsSelectedInBezelWithTracking:(long long)arg1 tracking:(unsigned long long)arg2;
+ (BOOL)_segmentStyleWantsOnStateWhenPressedWithMomentaryTracking:(long long)arg1;
+ (unsigned long long)_image_state_for_visual_state:(unsigned long long)arg1 style:(long long)arg2 trackingMode:(unsigned long long)arg3;
+ (BOOL)_givenState:(unsigned long long)arg1 hasState:(unsigned long long)arg2;
+ (BOOL)_segmentStyleIsFakedWithButtonArt:(long long)arg1;
+ (struct CGRect)_cuiRectForProposedRect:(struct CGRect)arg1 style:(long long)arg2 controlSize:(unsigned long long)arg3 scale:(double)arg4 currentAppearance:(id)arg5 controlView:(id)arg6;
+ (double)_menuIndicatorAdjustForStyle:(long long)arg1 size:(unsigned long long)arg2;
+ (struct NSEdgeInsets)_bezelToDrawingRectInsetsForStyle:(long long)arg1 controlSize:(unsigned long long)arg2 scale:(double)arg3 semanticContext:(int)arg4;
+ (struct NSEdgeInsets)_alignmentRectInsetsForStyle:(long long)arg1 size:(unsigned long long)arg2 semanticContext:(int)arg3;
+ (double)_textVerticalAdjustForStyle:(long long)arg1 controlSize:(unsigned long long)arg2 font:(id)arg3;
+ (double)_additionalContentOffsetForStyle:(long long)arg1 controlSize:(unsigned long long)arg2;
+ (double)_endCapWidthForStyle:(long long)arg1 controlSize:(unsigned long long)arg2;
+ (double)_preferredHeightForStyle:(long long)arg1 controlSize:(unsigned long long)arg2 controlView:(id)arg3;
+ (struct __CFString *)_coreUISizeForSegmentStyle:(long long)arg1 controlSize:(unsigned long long)arg2;
+ (struct __CFString *)_widgetTypeForSegmentStyleFull:(long long)arg1 semanticContext:(int)arg2;
+ (struct __CFString *)_widgetTypeForSegmentStyle:(long long)arg1 semanticContext:(int)arg2;
+ (struct __CFString *)_widgetTypeStyleCommon:(long long)arg1 semanticContext:(int)arg2;
+ (unsigned long long)_validateControlSize:(unsigned long long)arg1;
- (unsigned long long)_applicableTrackingModeForSegment:(long long)arg1;
- (BOOL)_proRecalcToolTips;
- (void)_proSetRecalcToolTips:(BOOL)arg1;
- (long long)_initialBackgroundStyleCompatibilityGuessIgnoringExternalContext;
- (long long)interiorBackgroundStyleForSegment:(long long)arg1;
- (id)_keyEquivalentUniquerCreatingIfNecessary:(BOOL)arg1;
- (void)_setMenuShouldBeUniquedAgainstMainMenu:(BOOL)arg1;
- (void)_removeAllToolTips;
- (void)_displayDelayedMenu;
- (void)_trackSelectedItemMenu;
- (void)_calculateSelectedSegmentForPoint:(struct CGPoint)arg1;
- (long long)indexOfSegmentContainingPoint:(struct CGPoint)arg1 inCellFrame:(struct CGRect)arg2;
- (void)performClick:(id)arg1;
- (void)_performClick:(id)arg1 ignoreMenus:(BOOL)arg2;
- (void)_performClick:(id)arg1 onSegment:(long long)arg2 ignoreMenus:(BOOL)arg3;
- (BOOL)_sendActionFrom:(id)arg1;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (void)_selectHighlightedSegment;
- (void)_acceleratorTimerFired;
- (void)continueTrackingPeriodicEvent:(id)arg1 inView:(id)arg2;
- (BOOL)continueTrackingGesture:(id)arg1 inView:(id)arg2;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (BOOL)_trackMouse:(id)arg1 forSegment:(long long)arg2 inRects:(const struct CGRect *)arg3 count:(unsigned long long)arg4 inCellFrame:(struct CGRect)arg5 ofView:(id)arg6 untilMouseUp:(BOOL)arg7;
- (double)_menuDelayTimeForSegment:(long long)arg1;
- (double)_segmentedMenuDragSlopRect;
- (double)_segmentedMenuDelayTime;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (void)_drawMenuIndicatorForSegment:(long long)arg1 withRect:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawSegment:(long long)arg1 inFrame:(struct CGRect)arg2 withView:(id)arg3;
- (void)_configureLabelCell:(id)arg1 forItem:(id)arg2 controlView:(id)arg3 imageState:(unsigned long long)arg4 backgroundStyle:(long long)arg5;
- (BOOL)_controlOrCellhasDrawingOverrides:(id)arg1;
- (struct CGRect)_labelRectForSegment:(long long)arg1 inFrame:(struct CGRect)arg2 withView:(id)arg3;
- (BOOL)_shouldUseAlternateImageForSegment:(long long)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (void)_drawBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_coreUIDrawSegmentBackground:(long long)arg1 withCellFrame:(struct CGRect)arg2 inView:(id)arg3 maskOnly:(BOOL)arg4;
- (struct CGRect)_rectAdjustedForR2LForSegment:(long long)arg1 cellFrame:(struct CGRect)arg2 drawFlags:(unsigned long long)arg3;
- (struct CGRect)focusRingMaskBoundsForFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (int)_vibrancyBlendModeForControlView:(id)arg1;
- (id)_vibrancyFilterForControlView:(id)arg1;
- (BOOL)_allowsVibrancyForControlView:(id)arg1;
- (BOOL)canSmoothFontsInFrame:(struct CGRect)arg1 forLayerBackedView:(id)arg2;
- (struct __CFDictionary *)_copyCoreUIBackgroundDrawOptionsForSegment:(long long)arg1 inView:(id)arg2 drawFlags:(unsigned long long *)arg3;
- (long long)_segmentHighlightState:(long long)arg1;
- (unsigned long long)_getVisualStateForSegment:(unsigned long long)arg1 andTrackingMode:(unsigned long long *)arg2 forApplicableStyle:(long long)arg3;
- (long long)_applicableSegmentedCellStyle;
- (BOOL)_wantsMenuIndicatorForSegment:(long long)arg1;
- (struct CGRect)rectForSegment:(long long)arg1 inFrame:(struct CGRect)arg2;
- (struct CGRect)_rectForSegment:(long long)arg1 inFrame:(struct CGRect)arg2;
- (struct CGRect)_drawingRectForSegment:(long long)arg1 inFrame:(struct CGRect)arg2;
- (void)_adjustRectForR2L:(struct CGRect *)arg1 inFrame:(struct CGRect)arg2;
- (struct CGRect)_boundsForCellFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)springLoadingExited:(id)arg1;
- (void)springLoadingHighlightChanged:(id)arg1;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id)arg2;
- (unsigned long long)springLoadingUpdated:(id)arg1;
- (unsigned long long)springLoadingEntered:(id)arg1;
- (void)_springLoadSegment:(BOOL)arg1;
- (void)_setSpringLoadingSegment:(long long)arg1;
- (long long)_springLoadingSegment;
- (void)_setMouseTrackingInRect:(struct CGRect)arg1 ofView:(id)arg2 withConfiguration:(id)arg3;
- (id)_pressureConfigurationIfNeeded;
- (void)updateTrackingAreaWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_updateMouseTracking;
- (void)_clearMouseTracking;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_postRolloverNotification;
- (long long)_segmentShowingRollover;
- (void)setControlView:(id)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setFont:(id)arg1;
- (BOOL)_resizeSegmentsForCellFrame:(struct CGRect)arg1;
- (double)_edgeInset;
- (double)_imageTextGap;
- (BOOL)_isFlatOnEdge:(unsigned long long)arg1;
- (void)_setIsFlat:(BOOL)arg1 onEdge:(unsigned long long)arg2;
- (struct CGRect)_badgeRectForImage:(id)arg1 inSegment:(long long)arg2 inFrame:(struct CGRect)arg3 inView:(id)arg4 isFlipped:(BOOL)arg5 drawFlags:(unsigned long long)arg6;
- (long long)_badgeValueForSegment:(long long)arg1;
- (void)_setBadgeValue:(long long)arg1 forSegment:(long long)arg2 inView:(id)arg3;
- (BOOL)_showsBadgeForSegment:(long long)arg1;
- (BOOL)_anySegmentShowsBadge;
- (void)_setShowsBadge:(BOOL)arg1 forSegment:(long long)arg2 inView:(id)arg3;
- (id)accessibilityLabelForSegment:(long long)arg1;
- (void)setAccessibilityLabel:(id)arg1 forSegment:(long long)arg2;
- (BOOL)isMenuIndicatorShownForSegment:(long long)arg1;
- (void)setMenuIndicatorShown:(BOOL)arg1 forSegment:(long long)arg2;
- (long long)tagForSegment:(long long)arg1;
- (void)setTag:(long long)arg1 forSegment:(long long)arg2;
- (BOOL)_hasItemTooltips;
- (void)_setNeedsToolTipRecalc:(BOOL)arg1;
- (BOOL)_needsToolTipRecalc;
- (id)toolTipForSegment:(long long)arg1;
- (void)setToolTip:(id)arg1 forSegment:(long long)arg2;
- (id)menuForSegment:(long long)arg1;
- (void)setMenu:(id)arg1 forSegment:(long long)arg2;
- (BOOL)isEnabledForSegment:(long long)arg1;
- (void)setEnabled:(BOOL)arg1 forSegment:(long long)arg2;
- (BOOL)isSelectedForSegment:(long long)arg1;
- (void)setSelected:(BOOL)arg1 forSegment:(long long)arg2;
- (id)labelForSegment:(long long)arg1;
- (unsigned long long)imageScalingForSegment:(long long)arg1;
- (void)setImageScaling:(unsigned long long)arg1 forSegment:(long long)arg2;
- (void)setLabel:(id)arg1 forSegment:(long long)arg2;
- (id)alternateImageForSegment:(long long)arg1;
- (void)setAlternateImage:(id)arg1 forSegment:(long long)arg2;
- (void)setImage:(id)arg1 forSegment:(long long)arg2;
- (id)imageForSegment:(long long)arg1;
- (double)widthForSegment:(long long)arg1;
- (void)setWidth:(double)arg1 forSegment:(long long)arg2;
- (void)setContinuous:(BOOL)arg1;
- (long long)_segmentedCellStyle;
- (void)_setSegmentedCellStyle:(long long)arg1;
@property long long segmentStyle;
- (void)setSegmentStyle:(long long)arg1 forceRecalc:(BOOL)arg2;
- (void)_setFlagsForStyle:(long long)arg1;
- (BOOL)_inactiveStateShowsRolloversForSegment:(long long)arg1;
- (void)_setInactiveStateShowsRollovers:(BOOL)arg1 forSegment:(long long)arg2;
- (BOOL)_needsGasPedalConfiguration;
- (BOOL)_needsRolloverTracking;
- (void)setDoubleValue:(double)arg1;
- (double)doubleValue;
- (void)setFloatValue:(float)arg1;
- (float)floatValue;
- (void)setIntegerValue:(long long)arg1;
- (long long)integerValue;
- (void)setIntValue:(int)arg1;
- (int)intValue;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (id)_segmentsDeselectedBySegment:(long long)arg1;
@property unsigned long long trackingMode;
- (BOOL)acceptsFirstResponder;
- (void)makePreviousSegmentKey;
- (void)makeNextSegmentKey;
- (void)_setIndexOfHilightedSegment:(long long)arg1;
- (long long)_indexOfHilightedSegment;
- (void)setHighlighted:(BOOL)arg1;
- (void)_setKeySegment:(long long)arg1;
- (long long)_keySegment;
- (long long)indexOfSelectedItem;
- (BOOL)selectSegmentWithTag:(long long)arg1;
@property long long selectedSegment;
- (long long)_trackingSegment;
- (BOOL)_mouseIsInsideSegmentAtIndex:(long long)arg1;
- (BOOL)_haveSegmentAtIndex:(long long)arg1;
- (id)_segmentItemAtIndex:(long long)arg1;
- (id)_segmentItems;
@property long long segmentCount;
- (id)_auxiliaryStorage;
- (void)_setDontShowSelectedAndPressedAppearance:(BOOL)arg1;
- (BOOL)_dontShowSelectedAndPressedAppearance;
- (void)_setTrackingMode:(unsigned int)arg1;
- (unsigned int)_trackingMode;
- (void)_setSegmentedSeparated:(BOOL)arg1;
- (BOOL)_segmentedSeparatedStyle;
- (void)_setUsesWindowsStyle:(BOOL)arg1;
- (BOOL)_usesWindowsStyle;
- (void)_setBaseStyle:(long long)arg1;
- (long long)_baseStyle;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)_springLoadingHighlightForSegment:(long long)arg1;
- (void)_setSpringLoadingHighlightForSegment:(long long)arg1 toValue:(long long)arg2;
- (void)_makeSegmentItemsPerformSelector:(SEL)arg1;
- (void)_setItemAtIndex:(long long)arg1 isSelected:(BOOL)arg2;
- (void)_deselectAllButFirstSelectedSegment;
- (void)_deselectAllSegments;
- (BOOL)_itemAtIndexIsSelected:(long long)arg1;
- (long long)_indexOfSelectedSegment;
- (void)_subtractSegmentItemCount:(long long)arg1;
- (void)_addSegmentItemCount:(long long)arg1;
- (void)_updateLabelViewForSegmentItem:(id)arg1 segmentContentRect:(struct CGRect)arg2 imageState:(unsigned long long)arg3 controlView:(id)arg4;
- (void)_updateNSSegmentItemViewFramesForCellFrame:(struct CGRect)arg1;
- (void)_removeNSSegmentItemViewsFromControlView:(id)arg1;
- (void)_addNSSegmentItemViewsToControlView:(id)arg1;
- (void)_setSegmentItems:(id)arg1 updateSegmentItemViews:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)_performKeyEquivalent:(id)arg1 conditionally:(BOOL)arg2;
- (void)getPeriodicDelay:(float *)arg1 interval:(float *)arg2;
- (double)doubleValueForSelectedSegment;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (struct CGRect)accessibilityFocusRingBounds;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (void)accessibilitySetFocus:(id)arg1 forChild:(id)arg2;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityFocusedAttribute;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (struct CGRect)_accessibilityScreenRectForSegment:(long long)arg1;
- (id)_accessibilitySegmentAtIndex:(long long)arg1;

@end

