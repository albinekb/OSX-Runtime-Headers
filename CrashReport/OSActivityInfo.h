//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CrashedThreadActivity, NSMutableArray, NSMutableDictionary, NSString;

@interface OSActivityInfo : NSObject
{
    NSMutableArray *_breadcrumbMessages;
    NSMutableArray *_activityTraceMessages;
    CrashedThreadActivity *_crashedThreadActivity;
    NSString *_crashedActivityBreadcrumbName;
    NSMutableDictionary *_binaryInfo;
    NSMutableArray *_externalBinaryImages;
    unsigned long long _externalBinaryStartAddress;
}

- (double)_machAbsoluteToFractionalSecsElapsed:(unsigned long long)arg1;
- (unsigned long long)_machAbsoluteToSecsElapsed:(unsigned long long)arg1;
- (BOOL)_testCollisionForStartAddress:(unsigned long long)arg1 binaryImages:(id)arg2;
- (unsigned long long)_createExternalBinaryWithUUID:(id)arg1 imagePath:(id)arg2 binaryImages:(id)arg3;
- (void)_initBinaryInfo:(id)arg1;
- (id)_individualTraceMessageDescription:(id)arg1 binaryImages:(id)arg2;
- (id)globalTraceBufferDescriptionWithBinaryImages:(id)arg1;
- (id)crashedThreadActivityDescriptionWithBinaryImages:(id)arg1;
- (id)breadcrumbDescription;
- (void)dealloc;
- (void)_extractActivityTraceMessagesWithActivityEntry:(struct os_activity_entry_s *)arg1 processInfo:(struct os_activity_process_s *)arg2 threadId:(unsigned long long)arg3;
- (void)_extractActivityTraceMessagesWithProcessInfo:(struct os_activity_process_s *)arg1 thread:(unsigned int)arg2 target:(unsigned int)arg3;
- (void)_extractBreadcrumbInfoWithProcessInfo:(struct os_activity_process_s *)arg1;
- (void)addActivityTraceMessageWithTimeStamp:(unsigned long long)arg1 UUIDBytes:(const char *)arg2 imagePath:(const char *)arg3 offset:(unsigned int)arg4 message:(char *)arg5;
- (void)addBreadcrumbWithTimeStamp:(unsigned long long)arg1 name:(const char *)arg2 activityID:(unsigned long long)arg3;
- (id)externalBinaryImages;
- (BOOL)hasCrashedThreadActivity;
- (BOOL)hasGlobalTraceBuffer;
- (BOOL)hasBreadcrumbs;
- (id)initWithPid:(int)arg1 thread:(unsigned int)arg2 target:(unsigned int)arg3;
- (id)initWithPid:(int)arg1 uniqueID:(unsigned long long)arg2 thread:(unsigned int)arg3 target:(unsigned int)arg4;

@end

