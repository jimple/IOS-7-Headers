/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <EventKit/EKObject.h>

#import "EKIdentityProtocol.h"

@class EKCalendar, EKCalendarItem, NSDate, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EKResourceChange : EKObject <EKIdentityProtocol>
{
}

- (void)clearAlertedStatus;
@property(readonly, nonatomic) unsigned int publicStatus;
@property(readonly, nonatomic) BOOL alerted;
@property(readonly, nonatomic) NSString *deletedTitle;
@property(readonly, nonatomic) NSNumber *deleteCount;
@property(readonly, nonatomic) NSNumber *updateCount;
@property(readonly, nonatomic) NSNumber *createCount;
@property(readonly, nonatomic) BOOL locationChanged;
@property(readonly, nonatomic) BOOL titleChanged;
@property(readonly, nonatomic) BOOL timeChanged;
@property(readonly, nonatomic) BOOL dateChanged;
@property(readonly, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) unsigned int changeType;
@property(readonly, nonatomic) EKCalendarItem *calendarItem;
@property(readonly, nonatomic) EKCalendar *calendar;
- (id)emailAddress;
- (id)name;
@property(readonly, nonatomic) NSString *changedByLastName;
@property(readonly, nonatomic) NSString *changedByFirstName;
@property(readonly, nonatomic) NSURL *changedByAddress;
@property(readonly, nonatomic) NSString *changedByDisplayName;
- (id)_calendarItemRelation;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)_persistentResourceChange;

@end
