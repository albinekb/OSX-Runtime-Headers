//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTextAttachmentCell.h>

@class NSColor, NSFindPattern, NSTextField<NSFindPatternField>, NSView;

__attribute__((visibility("hidden")))
@interface NSFindPatternAttachmentCell : NSTextAttachmentCell
{
    struct {
        unsigned int _selected:1;
        unsigned int _reserved:31;
    } _tacFlags;
    NSFindPattern *_findPattern;
    NSTextField<NSFindPatternField> *_field;
    NSColor *_NSFindPatternColor;
    NSColor *_NSFindPatternSelectedColor;
    NSColor *_NSFindPatternRolloverColor;
    NSView *_view;
    int cachedGroupID;
}

@property NSTextField<NSFindPatternField> *field; // @synthesize field=_field;
@property(retain) NSFindPattern *findPattern; // @synthesize findPattern=_findPattern;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawTokenWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawTokenInRect:(struct CGRect)arg1 withOptions:(id)arg2;
- (struct CGRect)pullDownRectForBounds:(struct CGRect)arg1;
- (struct CGPoint)cellBaselineOffset;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSize;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (id)pullDownImage;
- (id)menu;
- (BOOL)_hasMenu;
- (id)textColor;
- (id)tokenColor;
- (long long)interiorBackgroundStyle;
- (BOOL)_isActiveInView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_attributedString;
- (void)_setGroupID:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initTextCell:(id)arg1;

@end

