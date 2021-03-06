//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailFW/MCMessageDataSource-Protocol.h>

@class MCActivityMonitor, MCInvocationQueue, MFMailAccount, MFMailbox, NSArray, NSCache, NSDate, NSMutableArray, NSMutableSet, NSOperationQueue, NSString, NSTimer;

@interface MFMessageStore : NSObject <MCMessageDataSource>
{
    id _retainCountLock;	// 8 = 0x8
    BOOL _haveOpenLockFile;	// 16 = 0x10
    BOOL _isWritingChangesToDisk;	// 17 = 0x11
    BOOL _isTryingToClose;	// 18 = 0x12
    id _cacheLock;	// 24 = 0x18
    NSCache *_headerCache;	// 32 = 0x20
    NSCache *_bodyCache;	// 40 = 0x28
    _Atomic int _storeState;	// 48 = 0x30
    NSTimer *_timer;	// 56 = 0x38
    MFMailbox *_mailbox;	// 64 = 0x40
    NSMutableArray *_allMessages;	// 72 = 0x48
    MFMailAccount *_account;	// 80 = 0x50
    NSMutableSet *_uniqueStrings;	// 88 = 0x58
    BOOL _isReadOnly;	// 96 = 0x60
    BOOL _compactOnClose;	// 97 = 0x61
    BOOL _hasUnsavedChangesToMessageData;	// 98 = 0x62
    BOOL _forceInvalidation;	// 99 = 0x63
    MCActivityMonitor *_openMonitor;	// 104 = 0x68
    NSOperationQueue *_deleteQueue;	// 112 = 0x70
    MCInvocationQueue *_openAndCloseMailboxQueue;	// 120 = 0x78
}

+ (void)_autosaveMessageStore:(id)arg1;	// IMP=0x00000000001a6a31
+ (id)succesfulMessagesFromMessages:(id)arg1 missedMessages:(id)arg2;	// IMP=0x00000000001a3e22
+ (BOOL)createEmptyStoreIfNeededForPath:(id)arg1 notIndexable:(BOOL)arg2;	// IMP=0x00000000001a1137
+ (void)removeStoreFromCache:(id)arg1;	// IMP=0x00000000001a0c53
+ (id)currentlyAvailableStoresForAccount:(id)arg1;	// IMP=0x00000000001a09a0
+ (id)currentlyAvailableStoreForMailbox:(id)arg1;	// IMP=0x00000000001a0984
+ (id)_copyRawAvailableStoreForMailbox:(id)arg1 creationBlock:(id)arg2;	// IMP=0x00000000001a0646
+ (id)descriptionOfOpenStores;	// IMP=0x00000000001a05cb
+ (unsigned long long)numberOfCurrentlyOpenStores;	// IMP=0x00000000001a055c
+ (void)initialize;	// IMP=0x00000000001a03d2
@property BOOL forceInvalidation; // @synthesize forceInvalidation=_forceInvalidation;
@property BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(readonly, nonatomic) MCInvocationQueue *openAndCloseMailboxQueue; // @synthesize openAndCloseMailboxQueue=_openAndCloseMailboxQueue;
@property(readonly, nonatomic) NSOperationQueue *deleteQueue; // @synthesize deleteQueue=_deleteQueue;
@property(retain) MCActivityMonitor *openMonitor; // @synthesize openMonitor=_openMonitor;
@property BOOL hasUnsavedChangesToMessageData; // @synthesize hasUnsavedChangesToMessageData=_hasUnsavedChangesToMessageData;
// - (void).cxx_destruct;	// IMP=0x00000000001a9dd0
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;	// IMP=0x00000000001a9c8c
- (id)attachmentsDirectoryForMessage:(id)arg1 partNumber:(id)arg2;	// IMP=0x00000000001a9c84
- (id)attachmentsDirectoryForMessage:(id)arg1;	// IMP=0x00000000001a9c7c
- (void)muteConversationForMessages:(id)arg1;	// IMP=0x00000000001a9c76
- (void)unmuteConversationForMessages:(id)arg1;	// IMP=0x00000000001a9c70
- (BOOL)_updateFlagColor:(BOOL)arg1 forMessage:(id)arg2;	// IMP=0x00000000001a9add
- (BOOL)_updateConversationFlags:(unsigned long long)arg1 forMessage:(id)arg2;	// IMP=0x00000000001a9ac2
- (BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3;	// IMP=0x00000000001a9572
- (void)messagesWereAdded:(id)arg1 secondaryMessages:(id)arg2 duringOpen:(BOOL)arg3;	// IMP=0x00000000001a93ab
- (void)_setFlagsAndColorForMessages:(id)arg1;	// IMP=0x00000000001a90da
- (void)_setBackgroundColorForMessages:(id)arg1 textColorForMessages:(id)arg2;	// IMP=0x00000000001a8d17
- (void)updateMessages:(id)arg1 updateColor:(BOOL)arg2 updateNumberOfAttachments:(BOOL)arg3;	// IMP=0x00000000001a8641
- (void)updateMessageColorsSynchronouslyForMessages:(id)arg1 postingNotification:(BOOL)arg2;	// IMP=0x00000000001a803d
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;	// IMP=0x00000000001a7fdf
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;	// IMP=0x00000000001a7f81
- (id)_setOrGetValue:(id)arg1 forKey:(id)arg2 inCache:(id *)arg3;	// IMP=0x00000000001a7db8
- (void)_invalidateObjectCachesForKey:(id)arg1;	// IMP=0x00000000001a7d58
- (void)_flushAllMessageData;	// IMP=0x00000000001a7caa
- (void)flushAllCaches;	// IMP=0x00000000001a7b36
- (void)_removeLockFile;	// IMP=0x00000000001a7a78
- (BOOL)_acquireLockFile;	// IMP=0x00000000001a6f2a
@property(readonly, copy, nonatomic) NSString *lockFilePath;
- (void)_invalidateInBackground;	// IMP=0x00000000001a6e86
- (void)_invalidate;	// IMP=0x00000000001a6e03
@property(readonly) int storeState;
- (BOOL)setStoreState:(int)arg1 fromState:(int)arg2;	// IMP=0x00000000001a6de6
- (BOOL)_isReadyToBeInvalidated;	// IMP=0x00000000001a6cf5
@property(readonly, nonatomic) BOOL shouldCallCompactWhenClosing;
- (void)_setNeedsAutosave;	// IMP=0x00000000001a6b91
- (void)_cancelAutosave;	// IMP=0x00000000001a6b25
- (BOOL)shouldSendUserNotificationForMessage:(id)arg1;	// IMP=0x00000000001a6a15
- (void)invalidateMessages:(id)arg1;	// IMP=0x00000000001a6882
- (void)invalidateMessage:(id)arg1;	// IMP=0x00000000001a6806
@property(readonly) BOOL isSortedAscending;
@property(readonly, copy, nonatomic) NSString *sortOrder;
- (void)suggestSortOrder:(id)arg1 ascending:(BOOL)arg2;	// IMP=0x00000000001a67f0
- (void)invalidateSyncEngine;	// IMP=0x00000000001a6704
- (void)fetchSynchronouslyForKnownChanges;	// IMP=0x00000000001a66f2
@property(readonly, copy, nonatomic) NSString *status;
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2 completionHandler:(id)arg3;	// IMP=0x00000000001a6622
- (id)setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;	// IMP=0x00000000001a5f16
- (void)setColor:(id)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(id)arg3;	// IMP=0x00000000001a5c5e
- (void)setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;	// IMP=0x00000000001a5b5c
- (void)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;	// IMP=0x00000000001a5a68
- (id)async_setLocalFlagsForMessages:(id)arg1;	// IMP=0x00000000001a570b
- (id)setPrimitiveConversationFlags:(unsigned long long)arg1 forMessages:(id)arg2;	// IMP=0x00000000001a55e3
- (id)setPersistenceConversationFlags:(unsigned long long)arg1 forMessages:(id)arg2;	// IMP=0x00000000001a55d1
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x00000000001a5579
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x00000000001a5529
- (id)setPrimitiveFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x00000000001a500f
- (void)saveSnippetsForMessages:(id)arg1;	// IMP=0x00000000001a4e81
- (id)colorForMessage:(id)arg1;	// IMP=0x00000000001a4da2
- (void)addUniquedStrings:(id)arg1;	// IMP=0x00000000001a4d25
- (void)setUniquedStrings:(id)arg1;	// IMP=0x00000000001a4ca8
- (id)uniquedString:(id)arg1;	// IMP=0x00000000001a4c19
- (void)updateBodyFlagsForMessage:(id)arg1 topLevelMimePart:(id)arg2;	// IMP=0x00000000001a486d
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;	// IMP=0x00000000001a485b
- (id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;	// IMP=0x00000000001a4841
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;	// IMP=0x00000000001a482f
- (void)getTopLevelMimePart:(id *)arg1 headers:(id *)arg2 body:(id *)arg3 forMessage:(id)arg4 fetchIfNotAvailable:(BOOL)arg5 updateFlags:(BOOL)arg6 allowPartial:(BOOL)arg7 skipSignatureVerification:(BOOL)arg8;	// IMP=0x00000000001a44e4
- (unsigned long long)_numberOfMessagesToCache;	// IMP=0x00000000001a44d9
- (id)messageForMessageID:(id)arg1;	// IMP=0x00000000001a44d1
- (id)messagesForDocumentID:(id)arg1;	// IMP=0x00000000001a435c
- (id)recentMessageWithValue:(id)arg1 forHeader:(id)arg2;	// IMP=0x00000000001a3ee0
- (long long)updateMessages:(id)arg1 withLibraryIDs:(id)arg2 newMessages:(id)arg3;	// IMP=0x00000000001a3ed8
- (id)moveMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(BOOL)arg3;	// IMP=0x00000000001a3ebd
@property(readonly, nonatomic) BOOL allowsDeleteInPlace;
@property(readonly, nonatomic) BOOL allowsOverwrite;
@property(readonly, nonatomic) BOOL allowsAppend;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;	// IMP=0x00000000001a3d3f
- (void)async_deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;	// IMP=0x00000000001a3c37
- (void)deleteMessagesOlderThanNumberOfDays:(long long)arg1 compact:(BOOL)arg2;	// IMP=0x00000000001a38b2
- (void)doCompact;	// IMP=0x00000000001a38ac
@property(readonly, nonatomic) BOOL canCompact;
- (void)rebuildTableOfContentsAsynchronously;	// IMP=0x00000000001a374a
@property(readonly) BOOL canRebuild;
- (id)routeMessages:(id)arg1 isUserAction:(BOOL)arg2 fetchingBodies:(BOOL)arg3 messagesNeedingBodies:(id)arg4;	// IMP=0x00000000001a35e8
- (id)finishRoutingMessages:(id)arg1 routed:(id)arg2;	// IMP=0x00000000001a32be
- (id)routeMessages:(id)arg1 fetchingBodies:(BOOL)arg2 messagesNeedingBodies:(id)arg3;	// IMP=0x00000000001a3163
- (id)_defaultRouterDestination;	// IMP=0x00000000001a3155
- (void)removeMessageFromAllMessages:(id)arg1;	// IMP=0x00000000001a30d7
- (void)removeAllMessagesAtIndexes:(id)arg1;	// IMP=0x00000000001a3059
- (void)addMessagesToAllMessages:(id)arg1;	// IMP=0x00000000001a2e25
- (unsigned long long)indexOfMessageInAllMessages:(id)arg1;	// IMP=0x00000000001a2da3
- (void)setAllMessages:(id)arg1;	// IMP=0x00000000001a2d14
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;	// IMP=0x00000000001a2d02
- (id)mutableCopyOfAllMessages;	// IMP=0x00000000001a2c83
- (id)copyOfAllMessages;	// IMP=0x00000000001a2c04
@property(readonly) unsigned long long totalCount;
- (void)messagesWereUpdated:(id)arg1;	// IMP=0x00000000001a2b6a
- (void)messagesWereCompacted:(id)arg1;	// IMP=0x00000000001a2a33
- (void)messagesWereAdded:(id)arg1;	// IMP=0x00000000001a2a1c
- (void)structureDidChange;	// IMP=0x00000000001a297a
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;	// IMP=0x00000000001a2737
@property(readonly) NSDate *lastSyncDate;
@property BOOL isFirstTimeSync;
@property(readonly, nonatomic) BOOL isTrash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) const char *displayNameForLogging;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) BOOL isOpened;
@property(readonly, copy, nonatomic) NSArray *allMailboxRepresentations;
- (void)createDummyMailboxIfNecessary;	// IMP=0x00000000001a20e4
@property(readonly, nonatomic) MFMailbox *mailbox;
@property(readonly, nonatomic) MFMailAccount *account;
- (void)invalidateSavingChanges:(BOOL)arg1;	// IMP=0x00000000001a2022
- (void)saveChanges;	// IMP=0x00000000001a1f5d
- (void)didOpenWithMessages:(id)arg1;	// IMP=0x00000000001a1d90
- (void)willOpen;	// IMP=0x00000000001a1c6d
- (void)updateMetadataAsynchronously;	// IMP=0x00000000001a1b88
- (void)openSynchronously;	// IMP=0x00000000001a1a93
- (void)openAsynchronouslyWithOptions:(unsigned int)arg1;	// IMP=0x00000000001a19a3
- (void)openAsynchronously;	// IMP=0x00000000001a17eb
- (void)resetAllMessages;	// IMP=0x00000000001a17ba
- (void)reset;	// IMP=0x00000000001a1635
- (void)dealloc;	// IMP=0x00000000001a1569
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a155e
- (void)_messageStoreCommonInit;	// IMP=0x00000000001a14d1
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2;	// IMP=0x00000000001a14b9
- (id)initWithAccount:(id)arg1;	// IMP=0x00000000001a143e
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2 createEmptyStore:(BOOL)arg3;	// IMP=0x00000000001a1266
- (id)init;	// IMP=0x00000000001a121f
- (id)willDeallocPerformingInStoreCacheLock:(char *)arg1;	// IMP=0x00000000001a105f
- (void)queueSaveChangesInvocation;	// IMP=0x00000000001a0f69
- (oneway void)release;	// IMP=0x00000000001a9f42
- (unsigned long long)retainCount;	// IMP=0x00000000001a9ed4
- (id)retain;	// IMP=0x00000000001a9e66
- (id)objectSpecifierForMessage:(id)arg1;	// IMP=0x00000000001aa101
- (id)objectSpecifier;	// IMP=0x00000000001aa0a2

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

