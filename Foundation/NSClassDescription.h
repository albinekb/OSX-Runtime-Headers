//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface NSClassDescription : NSObject
{
}

+ (id)classDescriptionForClass:(Class)arg1;
+ (void)invalidateClassDescriptionCache;
+ (void)registerClassDescription:(id)arg1 forClass:(Class)arg2;
+ (void)setClassDelegate:(id)arg1;
+ (id)classDelegate;
- (id)inverseForRelationshipKey:(id)arg1;
@property(readonly, copy) NSArray *toManyRelationshipKeys;
@property(readonly, copy) NSArray *toOneRelationshipKeys;
@property(readonly, copy) NSArray *attributeKeys;
- (id)validateValue:(id *)arg1 forKey:(id)arg2;
- (BOOL)ownsDestinationObjectsForRelationshipKey:(id)arg1;
- (id)entityName;
- (id)displayNameForKey:(id)arg1;
- (id)classPropertyKeys;
- (id)classDescriptionForKeyPath:(id)arg1;
- (id)classDescriptionForDestinationKey:(id)arg1;
- (id)allToOneRelationshipKeys;
- (id)allToManyRelationshipKeys;
- (id)allAttributeKeys;

@end

