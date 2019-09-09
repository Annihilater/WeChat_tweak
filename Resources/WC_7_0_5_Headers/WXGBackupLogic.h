//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChatMigrationHeartBeatMonitorDelegate.h"
#import "LocalAreaCommunicationClientDelegate.h"
#import "WXGBackupBasicLogicDelegate.h"

@class ChatMigrationHeartBeatMonitor, MMTimer, NSObject<OS_dispatch_queue>, NSString, WXGBackupBasicLogic, WXGChatLogProtoHandler, WXGLocalAreaCommunicationClient;

@interface WXGBackupLogic : NSObject <LocalAreaCommunicationClientDelegate, WXGBackupBasicLogicDelegate, ChatMigrationHeartBeatMonitorDelegate>
{
    WXGLocalAreaCommunicationClient *m_networkHandler;
    WXGChatLogProtoHandler *m_protoHandler;
    WXGBackupBasicLogic *m_processLogic;
    _Bool m_bStartTransfer;
    _Bool m_bGetFirstPacket;
    ChatMigrationHeartBeatMonitor *m_heartBeatMonitor;
    NSObject<OS_dispatch_queue> *m_processLogicQueue;
    MMTimer *m_sendHeartBeatTimer;
    _Bool m_bInDilutedNetwork;
    _Bool m_bDone;
    id <WXGBackupLogicDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)cancelLogic;
- (void)confirmLogic;
@property(nonatomic) __weak id <WXGBackupLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getConnectDebugInfo;
- (id)init;
- (_Bool)isInDilutedNetwork;
- (void)notifyClientReconnect;
- (void)onBasicLogicAlert:(unsigned long long)arg1;
- (void)onBasicLogicNotifyCanReconnect;
- (void)onBasicLogicNotifyEvent:(unsigned long long)arg1;
- (_Bool)onBasicLogicSendData:(id)arg1;
- (void)onBasicProgresssCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onClientConnectFail;
- (void)onClientDisconnect;
- (void)onClientReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)onClientReconnected;
- (void)onClientReconnecting;
- (void)onClientTransferSendSpeed:(float)arg1 receiveSpeed:(float)arg2;
- (void)onHeartBeatAckIDWrong;
- (void)onHeartBeatLate;
- (void)onHeartBeatOK;
- (void)onHeartBeatPacketSendWithAckID:(unsigned long long)arg1;
- (void)p_dataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (void)p_sendHeartBeat;
- (void)processAlertCode:(unsigned long long)arg1;
- (void)processAuthResponseData:(id)arg1;
- (void)processCancelRequestData:(id)arg1;
- (void)processCommandRequestData:(id)arg1;
- (void)processCommandResponseData:(id)arg1;
- (void)processHeartBeatRequestData:(id)arg1;
- (void)processHeartBeatResponseData:(id)arg1;
- (void)processNotifyCode:(unsigned long long)arg1;
- (void)processOnMainThreadAlertCode:(unsigned long long)arg1;
- (void)processOnMainThreadNotifyCode:(unsigned long long)arg1;
- (void)restSendHeartBeatTimer;
- (void)sendCancelRequest;
- (_Bool)sendCommandRequestWithCommand:(int)arg1 withData:(id)arg2;
- (_Bool)sendCommandResponseWithCommand:(int)arg1;
- (_Bool)sendData:(id)arg1;
- (void)sendFirstAuthenticateRequestPakage;
- (void)sendHeartBeatRequestWithAck:(unsigned long long)arg1;
- (void)sendHeartBeatResponseWithAck:(unsigned long long)arg1;
- (void)sendSecondAuthenticateRequestPakage;
- (void)startAuthenticate;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
