/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSXPCConnection, VSSpeechConnectionDelegateWrapper, VSSpeechRequest;

@interface VSSpeechConnection : NSObject
{
    NSXPCConnection *_connection;
    VSSpeechConnectionDelegateWrapper *_delegateWrapper;
    VSSpeechRequest *_request;
}

@property(readonly, nonatomic) VSSpeechRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)getAutoDownloadedVoiceAssets:(id)arg1;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)downloadVoiceAsset:(id)arg1 progress:(id)arg2 completion:(void)arg3;
- (void)getLocalVoiceAssets:(id)arg1;
- (void)getAllVoiceAssets:(id)arg1;
- (void)continueCurrentSpeechRequest;
- (void)pauseCurrentSpeechRequestAtMark:(int)arg1 waitUntilPaused:(BOOL)arg2;
- (void)stopCurrentSpeechRequestAtMark:(int)arg1 waitUntilStopped:(BOOL)arg2;
- (void)startSpeechRequest:(id)arg1;
- (BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
- (BOOL)isSystemSpeaking;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableVoicesForLanguageCode:(id)arg1;
@property(nonatomic) __weak id <VSSpeechConnectionDelegate> delegate;
- (void)_setRequest:(id)arg1;
- (void)_connectionInvalidated;
- (id)_remoteObjectWithErrorHandler:(id)arg1;
- (id)_remoteObject;
- (id)_connection;
- (void)dealloc;

@end
