//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDocument, NSDocumentControllerPersistentRestoration, NSDocumentControllerSubMenuDelegate, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface NSDocumentControllerMoreIVars : NSObject
{
    BOOL shouldCreateUI;
    double autosavingDelay;
    int cachedUTIUsage;
    struct OpaqueLSSharedFileListRef *perAppRecentDocumentFileList;
    NSDocumentControllerSubMenuDelegate *subMenuDelegate;
    NSMutableDictionary *cachedRecentDocumentInfoPerKey;
    NSMutableDictionary *orderedPendingRecentDocumentURLsPerKey;
    struct dispatch_queue_s *pendingRecentsQueue;
    NSOperationQueue *recentDocumentAccessQueue;
    struct __CFSet *javaVariantMethodsBeingInvoked;
    NSError *javaLastError;
    unsigned long long isAutoreopening;
    NSMutableArray *autoreopenRecordsForMissingDocuments;
    BOOL hasAutoreopened;
    BOOL isClosingBeforeSavingDuringTermination;
    BOOL isClosingAfterSavingDuringTermination;
    NSMutableArray *autoreopenRecordsBeingCollectedDuringTermination;
    BOOL autoreopenRecordsNeedRewritingDuringTermination;
    BOOL isAsyncOpeningOrPrinting;
    CDUnknownBlockType asyncOpeningOrPrintingWaiter;
    NSArray *batchedOpenings;
    BOOL batchedOpeningTriedToReopen;
    NSMutableDictionary *documentOpeningWaitersByURL;
    NSMutableArray *autoreopenRecordsAlreadyReopenedByTAL;
    NSString *untitledTypeToCreate;
    NSWindow *windowThatBecameKeyDuringOpening;
    BOOL appIsBecomingActiveDuringOpening;
    id appWillBecomeActiveObserver;
    id windowDidBecomeKeyObserver;
    id appDidBecomeActiveObserver;
    BOOL appIsResigningActiveDuringOpening;
    id appWillResignActiveObserver;
    id windowDidResignKeyObserver;
    id appDidResignActiveObserver;
    struct dispatch_queue_s *mainThreadUnblockingQueue;
    NSMutableArray *mainThreadUnblockerStack;
    NSMutableArray *mainThreadBlockingInterrupters;
    NSDocumentControllerPersistentRestoration *restorationInfo;
    BOOL dontDisplayDuringReopening;
    NSMutableSet *reservedAutosavingContentsPaths;
    NSDocument *documentBeingDuplicated;
    NSOperationQueue *documentCoordinatingQueue;
    NSOperationQueue *documentOpeningQueue;
    NSMutableArray *documentsStillPreservingVersions;
    NSMutableSet *openRecentDocumentIDs;
    NSOperationQueue *openRecentDocumentUpdatingQueue;
}

@end

