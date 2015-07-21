//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCGSWindowSurface.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface NSCGSWindowLayerSurface : NSCGSWindowSurface
{
}

@property(readonly, getter=isLocallyRendered) BOOL locallyRendered;

// Remaining properties
@property struct CGColorSpace *colorSpace; // @dynamic colorSpace;
@property unsigned int displayID; // @dynamic displayID;
@property unsigned int displayMask; // @dynamic displayMask;
@property(retain) CALayer *layer; // @dynamic layer;
@property(getter=isOpaque) BOOL opaque; // @dynamic opaque;
@property double scale; // @dynamic scale;

@end
