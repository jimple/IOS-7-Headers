/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString, NSURL, SKUIArtworkList;

@interface SKUICategory : NSObject
{
    SKUIArtworkList *_artworkList;
    NSArray *_children;
    NSString *_name;
    NSString *_parentLabel;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) NSString *parentLabel; // @synthesize parentLabel=_parentLabel;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) SKUIArtworkList *artworkList; // @synthesize artworkList=_artworkList;
- (void).cxx_destruct;
- (id)subcategoryContainingURL:(id)arg1;
- (BOOL)containsURL:(id)arg1;
- (id)initWithCategoryDictionary:(id)arg1;

@end

