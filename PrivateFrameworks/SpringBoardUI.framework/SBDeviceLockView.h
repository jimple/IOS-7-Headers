/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, SBDeviceLockEntryField, SBDeviceLockTitle;

@interface SBDeviceLockView : UIView
{
    int _style;
    int _interfaceOrientation;
    SBDeviceLockTitle *_statusView;
    SBDeviceLockEntryField *_entryView;
    id _delegate;
}

+ (id)newWithStyle:(int)arg1 interfaceOrientation:(int)arg2 showsEmergencyCall:(BOOL)arg3;
+ (int)defaultStyle;
+ (int)defaultStyleForSiri;
+ (int)defaultStyleForSiri:(BOOL)arg1;
+ (double)deviceLockAnimationDuration;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void)didAnimateToInterfaceOrientation:(int)arg1;
- (void)animateToInterfaceInterfaceOrientation:(int)arg1;
- (void)willAnimateToInterfaceOrientation:(int)arg1;
- (void)notifyDelegateThatEmergencyCallButtonWasPressed;
- (void)notifyDelegateThatCancelButtonWasPressed;
- (void)notifyDelegateThatPasscodeWasEntered;
- (void)notifyDelegateThatPasscodeDidChange;
- (void)deviceLockEntryFieldTextDidChange:(id)arg1;
- (BOOL)deviceLockEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)deviceLockEntryFieldDidCancelEntry:(id)arg1;
- (void)deviceLockEntryFieldDidAcceptEntry:(id)arg1;
@property(readonly, nonatomic, getter=isKeypadMinimized) BOOL keypadMinimized;
@property(nonatomic) BOOL showsEmergencyCallButton;
@property(nonatomic) BOOL playsKeyboardClicks;
@property(nonatomic, getter=isShowingEntryStatusWarning) BOOL showingEntryStatusWarning;
@property(retain, nonatomic) NSString *passcode;
- (void)blinkStatusView;
@property(nonatomic, getter=isShowingStatusWarning) BOOL showingStatusWarning;
@property(retain, nonatomic) NSString *statusSubtitle;
@property(retain, nonatomic) NSString *statusTitle;
@property(readonly, nonatomic) UIView *keypadView;
@property(readonly, nonatomic) UIView *entryView;
@property(readonly, nonatomic) UIView *statusView;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)dealloc;
- (BOOL)resignFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2 showsEmergencyCall:(BOOL)arg3;

@end

