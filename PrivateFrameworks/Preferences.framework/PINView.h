/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "PINEntryView.h"

@class FailureBarView, UILabel;

@interface PINView : UIView <PINEntryView>
{
    UILabel *_titleLabel;
    UILabel *_errorTitleLabel;
    FailureBarView *_failureView;
    UILabel *_pinPolicyLabel;
    BOOL _error;
    id _delegate;
}

- (void)setBlocked:(BOOL)arg1;
- (void)dealloc;
- (void)hideFailedAttempts;
- (void)showFailedAttempts:(int)arg1;
- (void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)appendString:(id)arg1;
- (void)deleteLastCharacter;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)setTitle:(id)arg1 font:(id)arg2;
- (void)hidePasscodeField:(BOOL)arg1;
- (void)hideError;
- (void)showError:(id)arg1 animate:(BOOL)arg2;

@end

