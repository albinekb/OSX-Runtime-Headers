//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface NSOpenGLPixelFormat : NSObject <NSCoding>
{
    struct _CGLPixelFormatObject *_CGLPixelFormat;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
}

+ (void)initialize;
+ (id)openGLPixelFormatWithCGLPixelFormatObj:(struct _CGLPixelFormatObject *)arg1;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (id)initWithData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) int numberOfVirtualScreens;
- (void)getValues:(int *)arg1 forAttribute:(unsigned int)arg2 forVirtualScreen:(int)arg3;
- (void)finalize;
- (void)dealloc;
@property(readonly) struct _CGLPixelFormatObject *CGLPixelFormatObj;
- (id)initWithCGLPixelFormatObj:(struct _CGLPixelFormatObject *)arg1;
- (id)initWithAttributes:(const unsigned int *)arg1;
- (id)init;
- (BOOL)isSharableWithPixelFormat:(id)arg1;
- (id)_initWithCGLPixelFormatObj:(void *)arg1;
- (void *)_pixelFormatAuxiliary;

@end

