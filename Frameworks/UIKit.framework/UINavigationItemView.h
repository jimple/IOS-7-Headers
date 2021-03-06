/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UINavigationItem, _UINavigationBarAnimatingLabel;

__attribute__((visibility("hidden")))
@interface UINavigationItemView : UIView
{
    UINavigationItem *_item;
    struct CGSize _titleSize;
    UIView *_topCrossView;
    UIView *_bottomCrossView;
    BOOL _isCrossFading;
    BOOL _customFontSet;
    _UINavigationBarAnimatingLabel *_label;
}

- (void)_cleanUpCrossView;
- (void)_crossFadeHiddingButton:(BOOL)arg1;
- (void)_prepareCrossViewsForNewSize:(struct CGSize)arg1;
- (id)_scriptingInfo;
- (void)_setLineBreakMode:(int)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void)_setFont:(id)arg1;
- (BOOL)titleAutoresizesToFit;
- (void)setTitleAutoresizesToFit:(BOOL)arg1;
- (id)title;
- (struct CGSize)_titleSize;
- (void)_resetTitleSize;
- (void)layoutSubviews;
- (void)_updateLabel;
- (struct CGRect)_labelFrame;
- (void)_updateLabelContents;
- (void)_updateLabelColor;
- (void)_animateLabelChangeWithBlock:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(int)arg1;
- (id)_currentTextShadowColorForBarStyle:(int)arg1;
- (id)_currentTextColorForBarStyle:(int)arg1;
- (BOOL)_useSilverLookForBarStyle:(int)arg1;
- (id)_defaultFont;
- (id)navigationItem;
- (void)dealloc;
- (id)initWithNavigationItem:(id)arg1;

@end

