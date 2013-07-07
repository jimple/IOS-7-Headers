/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSMutableArray, NSString, NSURL, SLFacebookAlbum, SLFacebookPlace, SLFacebookPostPrivacySetting;

@interface SLFacebookPost : NSObject <NSSecureCoding>
{
    NSMutableArray *_imageData;
    NSMutableArray *_imageAssetURLs;
    NSMutableArray *_videoData;
    NSMutableArray *_videoAssetURLs;
    NSString *_maskedApplicationID;
    NSString *_text;
    NSURL *_link;
    SLFacebookPlace *_place;
    SLFacebookAlbum *_album;
    SLFacebookPostPrivacySetting *_privacySetting;
    NSArray *_taggedUserIDs;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSArray *taggedUserIDs; // @synthesize taggedUserIDs=_taggedUserIDs;
@property(retain) SLFacebookPostPrivacySetting *privacySetting; // @synthesize privacySetting=_privacySetting;
@property(retain) SLFacebookAlbum *album; // @synthesize album=_album;
@property(retain) SLFacebookPlace *place; // @synthesize place=_place;
@property(retain) NSURL *link; // @synthesize link=_link;
@property(retain) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)copy;
@property(retain) NSString *maskedApplicationID; // @synthesize maskedApplicationID=_maskedApplicationID;
- (void)addVideoData:(id)arg1;
- (void)addVideoAssetURL:(id)arg1;
@property(retain) NSArray *videoAssetURLs; // @dynamic videoAssetURLs;
@property(retain) NSArray *videoData; // @dynamic videoData;
@property(retain) NSArray *imageAssetURLs; // @dynamic imageAssetURLs;
@property(retain) NSArray *imageData; // @dynamic imageData;
- (void)addImageData:(id)arg1;
- (void)addImageAssetURL:(id)arg1;
- (id)_encodableObjectProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
