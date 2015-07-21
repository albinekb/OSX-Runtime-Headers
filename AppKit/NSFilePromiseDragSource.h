//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSDraggingSource.h"

@class NSArray, NSString;

@interface NSFilePromiseDragSource : NSObject <NSDraggingSource>
{
    id _dragSource;
    NSArray *_filenames;
    struct __CFURL *_dropDestination;
    BOOL _dragEnded;
    int _typeCount;
}

- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (void)setTypes:(id)arg1 onPasteboard:(id)arg2;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2 itemIdentifier:(long long)arg3;
- (void)getFilenamesAndDropLocation;
- (struct __CFURL *)copyDropDirectory;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)ignoreModifierKeysWhileDragging;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)ignoreModifierKeysForDraggingSession:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)dealloc;
- (id)initWithSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

