/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class MKStarRatingView, NSString, UILabel;

@interface MKStarRatingAndLabelView : UIView
{
    MKStarRatingView *_starRatingView;
    UILabel *_reviewsLabel;
    NSString *_sourceName;
    int _numberOfReviews;
    BOOL _displaysSourceOfReviews;
}

@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) int numberOfReviews; // @synthesize numberOfReviews=_numberOfReviews;
@property(readonly, nonatomic) UILabel *reviewsLabel; // @synthesize reviewsLabel=_reviewsLabel;
@property(readonly, nonatomic) MKStarRatingView *starRatingView; // @synthesize starRatingView=_starRatingView;
- (void)_setStarStyle:(int)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setDisplaysSourceOfReviews:(BOOL)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;

@end
