//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMTimer;

@interface ChatMigrationHeartBeatMonitor : NSObject
{
    unsigned long long nextAckID;
    MMTimer *m_heartBeatTimer;
    _Bool m_bMonitorEnable;
    _Bool m_bHeartBeatTransfer;
    id <ChatMigrationHeartBeatMonitorDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)checkHeartBeat;
- (void)checkHeartBeatResponse;
@property(nonatomic) __weak id <ChatMigrationHeartBeatMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disableHeartBeatMonitor;
- (void)enableHeartBeatMonitor;
- (void)getHeartBeatPacketWithAckID:(unsigned long long)arg1;
- (id)init;
- (void)p_sendHeartBeatToRemote;
- (void)sendHeartBeatRequest;

@end
