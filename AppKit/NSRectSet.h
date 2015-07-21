//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSRectSet : NSObject
{
    struct CGRect _bounds;
    struct CGRect *_rects;
    unsigned long long _count;
}

+ (id)emptyRectSet;
+ (void)initialize;
- (void)strokeExactInterior;
- (void)fillExactInterior;
- (void)stroke;
- (void)fill;
- (void)setClip;
- (void)addClip;
- (void)convertFromAncestor:(id)arg1 toView:(id)arg2 clipTo:(struct CGRect)arg3;
- (void)intersectWithRect:(struct CGRect)arg1;
- (void)subtractRect:(struct CGRect)arg1;
- (void)setEmpty;
- (unsigned long long)count;
- (const struct CGRect *)rects;
- (struct CGRect)bounds;
- (BOOL)isEmpty;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCopyOfRects:(const struct CGRect *)arg1 count:(unsigned long long)arg2 bounds:(struct CGRect)arg3;
- (id)initWithRegion:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1;
- (id)init;

@end

