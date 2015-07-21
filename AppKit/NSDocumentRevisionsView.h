//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, NSArray, NSButton, NSDocumentRevisionsController, NSMapTable, NSMutableArray, NSTextField, NSWindow;

__attribute__((visibility("hidden")))
@interface NSDocumentRevisionsView : NSView
{
    NSDocumentRevisionsController *_controller;
    NSMutableArray *_stackItems;
    unsigned long long _currentStackItemIndex;
    unsigned long long _requestedStackItemIndex;
    long long _animating;
    struct CGRect *_visibleStackItemBounds;
    NSMutableArray *_revisionUpdates;
    struct CGRect _originalFrame;
    struct CGRect _baseRevisionFrame;
    BOOL _fullTwoUpLayout;
    struct CGRect _focusedRevisionFrame;
    struct CGRect _focusedOriginalFrame;
    double _windowScaleFactor;
    BOOL _topLayerHidden;
    NSView *_stackView;
    CALayer *_screenShotLayer;
    NSMapTable *_transitionAnimations;
    BOOL _transitoryLayersVisible;
    BOOL _isStartTransition;
    NSArray *_layerStackAnimations;
    NSArray *_backdropLayerStackAnimations;
    NSTextField *_originalDocumentLabel;
    NSTextField *_revisionDocumentLabel;
    NSView *_buttonAndLabelContainer;
    NSView *_sideButtonAndLabelContainer;
    NSButton *_doneButton;
    NSButton *_replaceButton;
    NSButton *_previousButton;
    NSButton *_nextButton;
    id _flagsChangedObserver;
    NSWindow *_timelineWindow;
    BOOL _timelineHidden;
    CDUnknownBlockType _goToAnimationContinuer;
}

+ (Class)_remoteViewClass;
@property(retain) NSView *stackView; // @synthesize stackView=_stackView;
@property(readonly) struct CGRect focusedRevisionFrame; // @synthesize focusedRevisionFrame=_focusedRevisionFrame;
@property(readonly) struct CGRect focusedOriginalFrame; // @synthesize focusedOriginalFrame=_focusedOriginalFrame;
@property(readonly) BOOL fullTwoUpLayout; // @synthesize fullTwoUpLayout=_fullTwoUpLayout;
@property(readonly) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(readonly) struct CGRect revisionFrame; // @synthesize revisionFrame=_baseRevisionFrame;
@property unsigned long long currentStackItemIndex; // @synthesize currentStackItemIndex=_currentStackItemIndex;
- (id)accessibilityChildrenAttribute;
- (void)updateControls;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)shouldUnfocusWindowWithMouseDownAtWindowPoint:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_controlsEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_handleInsertionOfStackItems:(id)arg1 atIndexes:(id)arg2;
- (void)_handleRemovalOfStackItemsAtIndexes:(id)arg1;
- (void)_animationToIndexCompleted:(unsigned long long)arg1;
- (void)_goToRevisionWithIdentifier:(id)arg1;
- (void)goToStackItemAtIndex:(unsigned long long)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (void)_goToStackItemAtIndex:(unsigned long long)arg1 continuingPreviousAnimation:(BOOL)arg2 thenContinue:(CDUnknownBlockType)arg3;
- (double)_perStepAnimationDurationForDistance:(unsigned long long)arg1;
- (void)transitionAnimationCompleted;
- (void)performTransitionAnimation;
- (void)cancelRevertAnimation;
- (void)_resetTransitoryState;
- (void)prepareForFinishAnimationWithOutcome:(long long)arg1;
- (void)prepareForStartAnimation;
- (void)_prepareRevisionLayers;
- (void)setFullScreenShot:(id)arg1;
- (void)_setupFullScreenShot;
- (void)_commitTransitoryAnimations;
- (void)hideTransitoryLayers;
- (void)showTransitoryLayers;
- (void)_whenRevisionUpdatesAreAllowedDo:(CDUnknownBlockType)arg1;
- (void)_animationDidEnd;
- (void)_animationWillStart;
- (struct CGRect)_unfocusedFrameForOriginalDocumentWindow:(BOOL)arg1 state:(int)arg2;
- (void)layoutWithOriginalDocumentWindow:(id)arg1 originalVisibleFrame:(struct CGRect)arg2;
- (void)_animateControlsForWindowFocusState:(int)arg1;
- (void)_layoutUI;
- (void)_updateLabelsForStackItem:(id)arg1;
- (void)_createUI;
- (void)_updateReplaceButtonWithAlternate:(BOOL)arg1;
- (id)_makeVibrantButton;
- (id)_makeLabelField;
- (void)_takeDownTimelineWindow;
- (BOOL)_isTimelineHidden;
- (void)_scheduleTimelineTransitionAnimationForEntering:(BOOL)arg1;
- (void)_setTimelineHidden:(BOOL)arg1;
- (void)_setTimelineSelectedItemWithVersionID:(id)arg1;
- (void)_updateTimeline;
- (void)_createTimelineWindow;
- (void)refreshSnapshotForStackItem:(id)arg1;
- (void)_displayWindowForCurrentStackItem;
- (void)_switchPlaceholderToSnapshotForItem:(id)arg1;
- (void)_replaceLiveWindowWithLayer;
- (void)_replaceTopLayerWithLiveWindow;
- (void)ensureSnapshotForStackItem:(id)arg1 forceNew:(BOOL)arg2 wait:(BOOL)arg3;
- (id)_validSnapshotClosestToIndex:(unsigned long long)arg1;
- (void)spreadSnapshotOfStackItem:(id)arg1;
- (void)_animateLayerAtIndex:(unsigned long long)arg1 fromPosition:(long long)arg2 toPosition:(long long)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_commitAnimation:(id)arg1 toLayer:(id)arg2;
- (void)_computeRevisionLayerFrames;
- (void)_calculateLayerBoundsWithBaseBounds:(struct CGRect)arg1;
- (struct CGRect)_calculateLayerBoundsAtZ:(unsigned long long)arg1 withBaseBounds:(struct CGRect)arg2;
- (double)_stackOffsetAtZ:(unsigned long long)arg1;
- (id)_animationParametersFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)_animationParametersAtIndex:(long long)arg1;
- (id)_shadingFilterColorForLayerAtIndex:(long long)arg1;
- (double)_backgroundOpacityForLayerAtIndex:(long long)arg1;
- (double)_alphaValueAtIndex:(long long)arg1;
- (struct CGRect)_layerBoundsAtPosition:(long long)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (unsigned int)_CAViewFlags;

@end

