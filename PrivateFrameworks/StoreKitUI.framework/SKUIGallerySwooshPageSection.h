/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIArtworkRequestDelegate.h"
#import "SKUIGallerySwooshViewControllerDelegate.h"

@class NSMapTable, SKUIGallerySwooshViewController, SKUISwooshPageComponent;

@interface SKUIGallerySwooshPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGallerySwooshViewControllerDelegate>
{
    NSMapTable *_componentArtworkRequests;
    SKUIGallerySwooshViewController *_swooshViewController;
}

- (void).cxx_destruct;
- (id)_swooshViewController;
- (id)_newArtworkRequestWithArtwork:(id)arg1;
- (id)_metricsLocationIdentifierForIndex:(int)arg1;
- (void)_addImpressionForIndex:(int)arg1 toSession:(id)arg2;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(int)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(int)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(int)arg2;
- (void)swoosh:(id)arg1 didChangePlaybackState:(int)arg2 forItemAtIndex:(int)arg3;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)prefetchResourcesWithReason:(int)arg1;
- (int)numberOfCells;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUISwooshPageComponent *pageComponent; // @dynamic pageComponent;

@end

