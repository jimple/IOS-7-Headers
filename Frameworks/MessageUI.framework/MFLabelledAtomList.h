/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "MFAddressAtomDelegate.h"
#import "MFPassthroughViewProvider.h"

@class NSDictionary, NSMutableArray, NSString, UIColor, UILabel;

@interface MFLabelledAtomList : UIView <MFPassthroughViewProvider, MFAddressAtomDelegate>
{
    UILabel *_label;
    void *_addressBook;
    id <MFLabelledAtomListDelegate> _delegate;
    NSMutableArray *_addressAtoms;
    NSString *_title;
    UILabel *_captionLabel;
    UIColor *_labelTextColor;
    NSDictionary *_recipients;
    float _firstLineWidth;
    BOOL _usePadDisplayStyle;
    BOOL _labelVisible;
    unsigned int _needsReflow:1;
    unsigned int _isChangingFrame:1;
    BOOL _primary;
}

+ (id)defaultLabelTextColor;
@property(nonatomic) BOOL primary; // @synthesize primary=_primary;
@property(retain, nonatomic) NSDictionary *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) BOOL usePadDisplayStyle; // @synthesize usePadDisplayStyle=_usePadDisplayStyle;
@property(retain, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)crossFadeLabelVisibility:(BOOL)arg1 animationDuration:(double)arg2;
- (id)passthroughViews;
- (void)setOpaque:(BOOL)arg1;
- (void)setAtomAlpha:(float)arg1;
- (id)addressAtoms;
- (id)atomDisplayStrings;
- (id)title;
- (void)updateAtomsForVIP;
- (void)setCaptionWithToRecipients:(id)arg1 ccRecipients:(id)arg2 bccRecipients:(id)arg3 withReceivingEmailAddresses:(id)arg4;
@property(nonatomic, getter=isCaptionVisible) BOOL captionVisible;
- (void)_createCaptionLabelIfNecessary;
@property(nonatomic, getter=isLabelVisible) BOOL labelVisible;
- (struct CGRect)labelFrame;
- (id)labelText;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (void)_updateCaptionText;
- (void)_reflow;
- (void)_setNeedsReflow;
- (void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFirstLineWidth:(float)arg1 reflow:(BOOL)arg2;
- (void)setFirstLineWidth:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)addressBookDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 title:(id)arg2 totalWidth:(float)arg3 firstLineWidth:(float)arg4 addresses:(id)arg5 arePhoneNumbers:(id)arg6 style:(int)arg7 addressBook:(void *)arg8 completionBlock:(id)arg9;

@end

