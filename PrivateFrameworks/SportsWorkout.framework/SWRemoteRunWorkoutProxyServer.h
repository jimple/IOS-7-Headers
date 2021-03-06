/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CPDistributedMessagingCenter, CPDistributedNotificationCenter, NSTimer, SWLocalRunWorkoutProxy;

@interface SWRemoteRunWorkoutProxyServer : NSObject
{
    SWLocalRunWorkoutProxy *_workoutProxy;
    CPDistributedMessagingCenter *_messagingCenter;
    CPDistributedNotificationCenter *_notificationCenter;
    NSTimer *_propertyUpdateTimer;
}

- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)selectNextSong;
- (void)selectPreviousSong;
- (void)playMusic;
- (void)pauseMusic;
- (void)goToNowPlaying;
- (void)playPowerSong;
- (void)playOnDemandPrompt;
- (void)_nowPlayingChanged:(id)arg1;
- (void)endWorkout;
- (void)pauseWorkout;
- (void)activateWorkout;
- (void)prepareToActivateWorkout;
- (void)_clientDidCheckin;
- (void)_workoutStateChanged:(id)arg1;
- (void)_sensorSearchStateChanged:(id)arg1;
- (void)_postPropertyUpdateNotification;
- (void)_handlePropertyUpdateTimer:(id)arg1;
- (void)getGoing;
- (void)dealloc;
- (id)init;

@end

