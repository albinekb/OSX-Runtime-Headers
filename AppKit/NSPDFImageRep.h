//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@class NSData;

@interface NSPDFImageRep : NSImageRep
{
    NSData *_pdfData;
    int _reserved1;
    int _reserved2;
    id _private;
}

+ (id)imageUnfilteredPasteboardTypes;
+ (id)imageUnfilteredFileTypes;
+ (id)imageUnfilteredTypes;
+ (id)imageRepWithData:(id)arg1;
+ (BOOL)canInitWithData:(id)arg1;
+ (void)initialize;
- (long long)_uncachedSize;
@property(readonly) long long pageCount;
@property long long currentPage;
@property(readonly) struct CGRect bounds;
@property(readonly) NSData *PDFRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_isValid;
- (void *)_createPatternForRect:(struct CGRect)arg1 context:(id)arg2;
- (BOOL)_drawOnlyUsesOneDrawingOperation;
- (BOOL)draw;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)_pixelsHighOrResolutionIndependent;
- (long long)_pixelsWideOrResolutionIndependent;
- (id)initWithData:(id)arg1;
- (id)init;

@end

