//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCGSContext.h>

@interface NSWindowGraphicsContext : NSCGSContext
{
    unsigned int _cgsWindowID;
}

- (void)setFocusStack:(id)arg1;
- (id)focusStack;
- (BOOL)isDrawingToScreen;
- (unsigned int)windowID;
- (id)attributes;
- (id)initWithWindow:(id)arg1;
- (id)_initWithWindowNumber:(long long)arg1;
- (id)_initWithWindowNumber:(long long)arg1 useCoreAnimation:(BOOL)arg2;

@end

