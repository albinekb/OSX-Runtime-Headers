//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@class NSFont, NSImage, NSString, _NSButtonCellAux;

@interface NSButtonCell : NSActionCell
{
    NSString *_altContents;
    id _sound;
    NSString *_keyEquivalent;
    struct __BCFlags2 {
        unsigned int bezelStyle:3;
        unsigned int showsBorderOnlyWhileMouseInside:1;
        unsigned int mouseInside:1;
        unsigned int bezelStyle2:1;
        unsigned int imageScaling:2;
        unsigned int keyEquivalentModifierMask:24;
    } _bcFlags2;
    unsigned short _periodicDelay;
    unsigned short _periodicInterval;
    struct __BCFlags {
        unsigned int __reserved:6;
        unsigned int allowTitleTightening:1;
        unsigned int isDrawingFocus:1;
        unsigned int useButtonImageSource:1;
        unsigned int hasTitleTextField:1;
        unsigned int isDrawingDisclosure:1;
        unsigned int suppressAXValueChangeNote:1;
        unsigned int doesNotDimImage:1;
        unsigned int inset:2;
        unsigned int transparent:1;
        unsigned int inIntermediateDisclosure:1;
        unsigned int hasKeyEquivalentInsteadOfImage:1;
        unsigned int imageSizeDiff:1;
        unsigned int imageAndText:1;
        unsigned int bottomOrLeft:1;
        unsigned int horizontal:1;
        unsigned int imageOverlaps:1;
        unsigned int bordered:1;
        unsigned int drawing:1;
        unsigned int lightByGray:1;
        unsigned int lightByBackground:1;
        unsigned int lightByContents:1;
        unsigned int changeGray:1;
        unsigned int changeBackground:1;
        unsigned int changeContents:1;
        unsigned int pushIn:1;
    } _bcFlags;
    NSImage *_normalImage;
    id _alternateImageOrKeyEquivalentFont;
    _NSButtonCellAux *_buttonCellAuxStorage;
}

+ (void)initialize;
+ (struct CGSize)_keyEquivalentSizeWithFont:(id)arg1;
+ (void)_finishHitTracking:(id)arg1;
+ (void)_startHitTracking:(id)arg1;
+ (BOOL)_requireMainThreadDefaultBezelCaching;
+ (void)_resetDefaultButtonCycleValue;
+ (double)_defaultButtonCycleValue;
+ (double)_defaultButtonCycleTime;
+ (void)_setDefaultButtonCycleTime:(float)arg1;
- (void)setAlternateTitleWithMnemonic:(id)arg1;
- (id)alternateMnemonic;
- (unsigned long long)alternateMnemonicLocation;
- (void)setAlternateMnemonicLocation:(unsigned long long)arg1;
- (void)setTitleWithMnemonic:(id)arg1;
- (id)mnemonic;
- (void)setGradientType:(unsigned long long)arg1;
- (unsigned long long)gradientType;
- (id)_attributedStringForDrawing;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)_useHitTestInTrackMouse;
- (void)performClick:(id)arg1;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTrackingGesture:(id)arg1 inView:(id)arg2;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)_endAcceleratorPeriodicActions;
- (void)_beginAcceleratorPeriodicActionsUsingLegacyHW:(BOOL)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)_acceleratorTimerFired;
- (BOOL)_suppressMouseUpAction;
- (BOOL)_usesDefaultContinuousBehavior;
- (struct CGRect)_trackingBoundsWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_clearMouseTracking;
- (void)_setMouseTrackingInRect:(struct CGRect)arg1 ofView:(id)arg2;
- (id)_pressureConfigurationIfNeeded;
- (id)_startSound;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateMouseInside:(BOOL)arg1;
- (void)_doUserDisclosureExpandOrCollapseInRect:(struct CGRect)arg1;
- (void)_setDestinationDisclosureState:(long long)arg1;
- (long long)_destinationDisclosureState;
- (void)_setIsDrawingDisclosure:(BOOL)arg1;
- (void)_setNextDisclosureState:(long long)arg1;
- (void)_drawCustomFocusMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawPopoverBezelStyleWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_appendBezierPath:(id)arg1 withBottomRoundRect:(struct CGRect)arg2 cornerRadius:(double)arg3;
- (BOOL)_shouldTweakRoundingBehaviorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (BOOL)_funkyOptOutLogicThatShouldGoAwayForView:(id)arg1 semanticContext:(int)arg2;
- (BOOL)_shouldUseStyledTextInView:(id)arg1;
- (BOOL)_shouldUseStyledTextInView:(id)arg1 forAttributedTitle:(id)arg2;
- (BOOL)_hasCustomForegroundColor;
- (BOOL)_titleTextIsScrollable;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (id)_overrideImageRecolorColor;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_configureAndDrawTitleWithRect:(struct CGRect)arg1 cellFrame:(struct CGRect)arg2 controlView:(id)arg3;
- (id)_currentTitle;
- (void)_configureAndDrawImageWithRect:(struct CGRect)arg1 cellFrame:(struct CGRect)arg2 controlView:(id)arg3;
- (double)_imageVerticalAdjustmentForBezel;
- (double)_roundCoordinate:(double)arg1 upToDevicePixelForView:(id)arg2;
- (void)layoutLayerWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_wantsSeparatedContentSubviewsInView:(id)arg1;
- (void)_updateImageViewWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_updateSubviewsWhenLayerBackedInView:(id)arg1 includeTitleTextField:(BOOL)arg2;
- (void)_updateImageViewImageInView:(id)arg1;
- (void)_logImageState:(unsigned long long)arg1 andBGStyle:(int)arg2 forLabel:(id)arg3;
- (struct CGRect)_imageViewFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_commonBaseRectWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_removeImageView;
- (void)_setImageView:(id)arg1;
- (id)_imageView;
- (void)_updateTitleTextFieldValue;
- (BOOL)_preferInactiveBezelArtInView:(id)arg1;
- (void)_updateCoreUIOptions:(id)arg1 withContentAppearanceInView:(id)arg2;
- (BOOL)_updateStyledTextOptions:(id)arg1 withContentAppearanceInView:(id)arg2;
- (void)_updateTitleTextFieldWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setAlignment:(unsigned long long)arg1;
- (void)_setLayerNeedsLayout;
- (id)_currentTitleTextFieldAttributedString;
- (void)_removeTitleTextField;
- (void)_setTitleTextField:(id)arg1;
- (id)_titleTextField;
- (void)updateLayerWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_backgroundIsSetOnLayer;
- (void)_updateBackgroundViewWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_bezelStyleOnlyCenteredVertically;
- (id)_currentBezelContentsWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_bezelContentsFromCoreUIWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_bezelContentsByDrawingWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_needsToDoBezelDrawingForLayerInView:(id)arg1;
- (BOOL)_hasCenteredBezelBackground;
- (void)_removeBackgroundView;
- (void)_setBackgroundView:(id)arg1;
- (id)_backgroundView;
- (id)_layerKeysForCachingWithFrame:(struct CGRect)arg1 inView:(id)arg2 drawingRect:(struct CGRect *)arg3;
- (id)_semanticContextKeyForView:(id)arg1;
- (BOOL)wantsUpdateLayerInView:(id)arg1;
- (BOOL)_subclassOverridesAnyDrawMethods;
- (Class)_classForOverrideCheck;
- (BOOL)_subclassOverridesDrawImage;
- (BOOL)_bezelStyleWantsUpdateLayerInView:(id)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_legacyDrawFocusRingInCellFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)focusRingMaskBoundsForFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_canUseFocusRingMaskForText;
- (void)setControlView:(id)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGSize)_autolayout_cellSize;
- (struct CGSize)_minCellSize;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (id)_backgroundColorForFontSmoothing;
- (unsigned long long)_interiorContentValueStateInView:(id)arg1;
- (unsigned long long)_interiorContentAppearanceInView:(id)arg1;
- (int)_effectiveBackgroundStyleInView:(id)arg1;
- (void)_preeffectBaseImage:(id *)arg1 state:(unsigned long long *)arg2 backgroundStyle:(int *)arg3 inView:(id)arg4;
- (BOOL)_disabledForDrawing;
- (BOOL)_isInlineBezelStyle;
- (id)_vibrancyFilterForControlView:(id)arg1;
- (int)_vibrancyBlendModeForControlView:(id)arg1;
- (BOOL)_allowsVibrancyForControlView:(id)arg1;
- (BOOL)_allowsVibrancyForTitleInView:(id)arg1;
- (BOOL)_allowsVibrancyForImageInView:(id)arg1;
- (struct __CFDictionary *)_coreUIBezelDrawOptionsWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct __CFString *)_coreUIWidgetName;
- (BOOL)_wantsToUseFocusRingMask;
- (BOOL)_inToolbar;
- (BOOL)_templateImageShouldPunchHoleInBezel;
- (BOOL)_preferSlightlyDarkerImageForOnBezel;
- (BOOL)_preferOnArtForBezel;
- (unsigned long long)_preferredFocusLocationMask;
- (BOOL)_hasCustomFocusMask;
- (BOOL)_shouldShowFocus;
- (BOOL)_preferInactiveContentInView:(id)arg1;
- (BOOL)_preferAlternateContentForImage;
- (BOOL)_preferAlternateContent;
- (long long)_stateForDrawing;
- (long long)interiorBackgroundStyle;
- (long long)_initialBackgroundStyleCompatibilityGuessIgnoringExternalContext;
- (void)setCellAttribute:(unsigned long long)arg1 to:(long long)arg2;
- (long long)cellAttribute:(unsigned long long)arg1;
- (void)setBezelStyle:(unsigned long long)arg1;
- (unsigned long long)bezelStyle;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setShowsBorderOnlyWhileMouseInside:(BOOL)arg1;
- (BOOL)showsBorderOnlyWhileMouseInside;
- (void)_windowChangedKeyStateInView:(id)arg1;
- (void)updateTrackingAreaWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_updateMouseTracking;
@property(getter=isTransparent) BOOL transparent;
- (void)setBordered:(BOOL)arg1;
- (BOOL)isBordered;
@property unsigned long long showsStateBy;
- (BOOL)_highlightsWithHighlightRect;
@property unsigned long long highlightsBy;
- (void)setButtonType:(unsigned long long)arg1;
- (BOOL)_isMultiLevelAcceleratorButton;
- (BOOL)_isAnyAcceleratorButton;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (BOOL)_shouldSetHighlightToFlag:(BOOL)arg1;
@property SEL alternateAction;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (void)setDoubleValue:(double)arg1;
- (double)doubleValue;
- (void)setFloatValue:(float)arg1;
- (float)floatValue;
- (void)setIntegerValue:(long long)arg1;
- (long long)integerValue;
- (void)setIntValue:(int)arg1;
- (int)intValue;
- (id)attributedStringValue;
- (void)setAttributedStringValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)setSpringLoadingEmphasized:(BOOL)arg1;
- (BOOL)isSpringLoadingEmphasized;
- (void)setSpringLoaded:(BOOL)arg1;
- (BOOL)isSpringLoaded;
@property long long maxState;
@property long long maxAcceleratorLevel;
- (void)setState:(long long)arg1;
- (long long)nextState;
- (void)_setNeedsStateUpdate:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)_controlViewDidMoveToWindow:(id)arg1;
- (void)_stateAnimationDone;
- (BOOL)_maybeBeginStateChangeAnimationWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_obtainButtonAnimator;
- (void)_setAnimationsAllowed:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)_updateAllOtherButtonsInGroupToNotBeChecked;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (BOOL)_hasRolloverContentArt;
@property(readonly, getter=isOpaque) BOOL opaque;
- (BOOL)_acceptsFirstMouseForEvent:(id)arg1 inView:(id)arg2;
- (BOOL)acceptsFirstResponder;
- (BOOL)_needsOutline;
- (void)setPeriodicDelay:(float)arg1 interval:(float)arg2;
- (void)getPeriodicDelay:(float *)arg1 interval:(float *)arg2;
- (void)setKeyEquivalentFont:(id)arg1 size:(double)arg2;
@property(retain) NSFont *keyEquivalentFont;
@property unsigned long long keyEquivalentModifierMask;
@property(copy) NSString *keyEquivalent;
- (void)_setSound:(id)arg1;
- (id)_sound;
- (void)setSound:(id)arg1;
- (id)sound;
@property unsigned long long imageScaling;
- (void)setImageDimsWhenDisabled:(BOOL)arg1;
- (BOOL)imageDimsWhenDisabled;
@property unsigned long long imagePosition;
@property(retain) NSImage *alternateImage;
- (id)_alternateImageSynthesizedForCheckOrRadio:(char *)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (id)_imageSynthesizedForCheckOrRadio:(char *)arg1;
- (long long)compare:(id)arg1;
- (void)setAttributedAlternateTitle:(id)arg1;
- (id)attributedAlternateTitle;
@property(copy) NSString *alternateTitle;
- (void)setFont:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (BOOL)_wantsBoldFont;
- (id)_embossedEnabledForgroundColor;
- (id)attributedTitle;
@property(copy) NSString *title;
- (void)_convertToText:(id)arg1;
- (void)_setAltContents:(id)arg1;
- (id)_altContents;
- (id)_buttonCellAuxAllocatingIfNeeded:(BOOL)arg1;
- (id)_buttonCellAux;
- (BOOL)_hasButtonCellAux;
- (void)_disposeAnimator;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;
- (void)_commonInit;
- (void)_renderCurrentAnimationFrameInContext:(struct CGContext *)arg1 atLocation:(struct CGPoint)arg2;
- (void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setState:(long long)arg1 animated:(BOOL)arg2;
- (BOOL)_stateAnimationRunning;
- (BOOL)canSmoothFontsInFrame:(struct CGRect)arg1 forLayerBackedView:(id)arg2;
- (void)_fillBackground:(struct CGRect)arg1 withAlternateColor:(BOOL)arg2;
- (struct CGRect)_centerTitle:(id)arg1 inRect:(struct CGRect)arg2;
- (struct CGRect)_alignedTitleRectWithRect:(struct CGRect)arg1;
- (struct CGRect)_imageRectWithRect:(struct CGRect *)arg1;
- (struct CGSize)_titleSizeWithSize:(struct CGSize)arg1;
- (struct CGSize)_unconstrainedImageSize;
- (struct CGRect)_insetRect:(struct CGRect)arg1;
- (BOOL)_shouldDrawDragged;
- (BOOL)_canBecomeDefaultButtonCell;
- (double)_leading;
- (BOOL)_shouldDrawTextWithDisabledAppearance;
- (BOOL)_shouldDrawBezel;
- (BOOL)_alwaysShowBezelForCurrentBezelStyleAndState;
- (BOOL)_hasTitle;
- (BOOL)_hasImage;
- (id)_textDimColor;
- (id)_textHighlightColor;
- (void)_setButtonType:(unsigned long long)arg1 adjustingImage:(BOOL)arg2;
- (unsigned long long)_buttonType;
- (id)_backgroundColor;
- (void)_setBackgroundColor:(id)arg1;
- (BOOL)_isDrawingDisclosure;
- (long long)_nextDisclosureState;
- (id)_buttonImageSource;
- (void)_setButtonImageSource:(id)arg1;
- (id)_stringDrawingContextForStyledTextOptions:(id)arg1 replacementColor:(id *)arg2;
- (struct CGRect)_focusRingBoundsWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_setDefaultButtonIndicatorNeedsDisplay;
- (void)heartBeat:(CDStruct_d41e72e8 *)arg1;
- (BOOL)_isAnimatingDefaultCell;
- (BOOL)_wantsHeartBeat;
- (BOOL)_appRequiresOldHeartbeatBehavior;
- (BOOL)_isDefaultButton;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)_shouldUpdateLayersInControlView:(id)arg1;
- (BOOL)_hasDefaultButtonIndicator;
- (struct CGRect)accessibilityFocusRingBoundsForBounds:(struct CGRect)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityDescriptionAttribute;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (id)accessibilityTitleAttribute;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (BOOL)_accessibilityIncludeDescriptionAttribute;
- (id)_buttonCellAccessibilityRoleAttribute;
- (BOOL)_shouldHighlightCellWhenSelected;

@end

