//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BreadcrumbMessage : NSObject
{
    unsigned long long _timeStamp;
    NSString *_name;
    unsigned long long _activityID;
}

@property(readonly) unsigned long long activityID; // @synthesize activityID=_activityID;
@property(readonly, retain) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
- (void)dealloc;
- (id)initWithTimeStamp:(unsigned long long)arg1 name:(const char *)arg2 activityID:(unsigned long long)arg3;

@end

