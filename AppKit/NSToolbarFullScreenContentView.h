//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, NSToolbarFullScreenWindowManager;

__attribute__((visibility("hidden")))
@interface NSToolbarFullScreenContentView : NSView
{
    double _revealProgress;
    double _auxMinHeight;
    double _toolbarViewHeight;
    double shadowWeight;
    double auxSnapshotAlpha;
    NSToolbarFullScreenWindowManager *manager;
    CALayer *shadowLayer;
    CALayer *textureGradientLayer;
    CALayer *northeastCorner;
    CALayer *northwestCorner;
    double _cornerRoundness;
}

@property(nonatomic) double shadowWeight; // @synthesize shadowWeight;
@property(nonatomic) double toolbarViewHeight; // @synthesize toolbarViewHeight=_toolbarViewHeight;
@property(nonatomic) double revealProgress; // @synthesize revealProgress=_revealProgress;
@property(readonly) NSToolbarFullScreenWindowManager *manager; // @synthesize manager;
- (void)mouseDown:(id)arg1;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)dealloc;
- (void)refreshLayerFrames;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)displayLayer:(id)arg1;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)createLayers;
- (void)_createCornerLayers;
- (void)refreshLayerContents;
- (void)destroyToolbarLayers;
- (id)getShadowImage;
- (struct NSToolbarFullScreenContentViewLayout_t)getToolbarLayout;
@property(nonatomic) double cornerRoundness;
- (void)clearManager;
- (id)initWithFrame:(struct CGRect)arg1 manager:(id)arg2;

@end

