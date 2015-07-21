//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface CALayer (NSTileLayerAdditions)
- (BOOL)NS_shouldMinimizeDrawingInvocations;
- (void)NS_setPreparedContentRect:(struct CGRect)arg1;
- (void)NS_setPresentationRect:(struct CGRect)arg1;
- (void)NS_setIsScrolling:(BOOL)arg1;
- (BOOL)NS_hasPartialPrefetchedContentsForRect:(struct CGRect)arg1;
- (BOOL)NS_hasPrefetchedContentsForRect:(struct CGRect)arg1;
- (struct CGRect)NS_activeVisibleRect;
- (void)NS_invalidatePreparedContentRect;
- (void)NS_dropPrefetchedContentsIfNecessary;
- (void)NS_showPrefetchedContentsIfNecessaryInRect:(struct CGRect)arg1;
- (BOOL)NS_wantsToPrefetchTiles;
- (struct CGRect)NS_renderedRectInRect:(struct CGRect)arg1 scrollVelocity:(struct CGPoint)arg2;
- (BOOL)NS_prefetchContentsInRect:(struct CGRect)arg1 scrollVelocity:(struct CGPoint)arg2;
- (void)NS_prefetchTilesWithScrollVelocity:(struct CGPoint)arg1 hasMorePrefetch:(char *)arg2;
- (BOOL)NS_hasPrefetchedContents;
- (void)NS_prefetchContentsIfNecessary;
- (unsigned long long)NS_prefetchedMemoryLength;
- (void)NS_setPurged:(BOOL)arg1;
- (BOOL)NS_isPurged;
- (void)NS_setVisibleTile:(BOOL)arg1;
- (BOOL)NS_isVisibleTile;
@end

