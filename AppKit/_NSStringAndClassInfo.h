//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface _NSStringAndClassInfo : NSObject <NSCopying>
{
    NSString *_registryString;
    Class _objectClass;
    unsigned long long _registryStringHash;
    unsigned long long _objectClassHash;
    unsigned long long _hash;
}

- (void)setObjectClass:(Class)arg1;
- (void)setRegistryString:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRegistryString:(id)arg1 andObjectClass:(Class)arg2;

@end

