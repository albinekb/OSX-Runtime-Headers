//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewBuffer.h>

@class NSImage, NSWindow;

@interface NSViewWindowBackingStoreBuffer : NSViewBuffer
{
    NSWindow *_window;
    struct CGRect _windowRect;
    struct CGRect _savedRect;
    NSImage *_savedImage;
}

- (BOOL)restore;
- (BOOL)cacheRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

