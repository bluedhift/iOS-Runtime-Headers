/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKPersistentAttendee, EKPersistentCalendar, EKPersistentCalendarItem, EKPersistentLocation, EKPersistentOrganizer, NSData, NSDate, NSSet, NSString, NSTimeZone, NSURL;

@interface EKPersistentCalendarItem : EKPersistentObject {
}

@property(copy) NSURL * URL;
@property(readonly) NSString * UUID;
@property(copy) NSURL * action;
@property(copy) NSSet * alarms;
@property(getter=isAllDay) BOOL allDay;
@property(copy) NSSet * attachments;
@property(copy) NSSet * attendees;
@property(retain) EKPersistentCalendar * calendar;
@property(copy) NSDate * creationDate;
@property(getter=isDefaultAlarmRemoved) BOOL defaultAlarmRemoved;
@property(getter=isDetached,readonly) BOOL detached;
@property(copy) NSSet * detachedItems;
@property(copy) NSSet * exceptionDates;
@property(copy) NSData * externalData;
@property(copy) NSString * externalID;
@property(readonly) BOOL hasAlarms;
@property(readonly) BOOL hasAttendees;
@property(readonly) BOOL hasNotes;
@property(readonly) BOOL hasRecurrenceRules;
@property(copy) NSDate * lastModifiedDate;
@property(copy) EKPersistentLocation * location;
@property(copy) NSString * notes;
@property(retain) EKPersistentOrganizer * organizer;
@property(retain) EKPersistentCalendarItem * originalItem;
@property(copy) NSDate * participationStatusModifiedDate;
@property int priority;
@property(copy) NSSet * recurrenceRules;
@property(retain) EKPersistentAttendee * selfAttendee;
@property(readonly) int selfParticipantStatus;
@property int sequence;
@property(copy) NSString * sharedItemCreatedByDisplayName;
@property(copy) NSString * sharedItemCreatedByEmailAddress;
@property(copy) NSString * sharedItemCreatedByFirstName;
@property(copy) NSString * sharedItemCreatedByLastName;
@property(copy) NSDate * sharedItemCreatedDate;
@property(copy) NSTimeZone * sharedItemCreatedTimeZone;
@property(copy) NSString * sharedItemModifiedByDisplayName;
@property(copy) NSString * sharedItemModifiedByEmailAddress;
@property(copy) NSString * sharedItemModifiedByFirstName;
@property(copy) NSString * sharedItemModifiedByLastName;
@property(copy) NSDate * sharedItemModifiedDate;
@property(copy) NSTimeZone * sharedItemModifiedTimeZone;
@property(copy) NSDate * startDate;
@property(copy) NSTimeZone * timeZone;
@property(copy) NSString * title;
@property(copy) NSString * uniqueID;

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)URL;
- (id)UUID;
- (id)action;
- (void)addAlarm:(id)arg1;
- (void)addAttachment:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)addDetachedItem:(id)arg1;
- (void)addExceptionDate:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (id)alarms;
- (id)attachments;
- (int)attendeeCount;
- (id)attendees;
- (id)calendar;
- (id)creationDate;
- (void)deleteSelfAndDetached;
- (id)detachedItems;
- (id)exceptionDates;
- (id)externalData;
- (id)externalID;
- (id)externalModificationTag;
- (BOOL)hasAlarms;
- (BOOL)hasAttachments;
- (BOOL)hasAttendees;
- (BOOL)hasNotes;
- (BOOL)hasRecurrenceRules;
- (id)init;
- (BOOL)isAllDay;
- (BOOL)isDefaultAlarmRemoved;
- (BOOL)isDetached;
- (void)itemDidReplicateInNewCalendar:(id)arg1;
- (id)lastModifiedDate;
- (id)location;
- (id)moveToCalendar:(id)arg1 skipItem:(id)arg2;
- (id)moveToCalendar:(id)arg1;
- (id)notes;
- (id)organizer;
- (id)originalItem;
- (id)participationStatusModifiedDate;
- (void)primitiveValueChangedForKey:(id)arg1;
- (int)priority;
- (id)recurrenceRules;
- (void)removeAlarm:(id)arg1;
- (void)removeAttachment:(id)arg1;
- (void)removeAttendee:(id)arg1;
- (void)removeDetachedItem:(id)arg1;
- (void)removeExceptionDate:(id)arg1;
- (void)removeRecurrenceRule:(id)arg1;
- (id)selfAttendee;
- (int)selfParticipantStatus;
- (int)sequence;
- (void)setAction:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setAllDay:(BOOL)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttendees:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDefaultAlarmRemoved:(BOOL)arg1;
- (void)setDetachedItems:(id)arg1;
- (void)setExceptionDates:(id)arg1;
- (void)setExternalData:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)setOriginalItem:(id)arg1;
- (void)setParticipationStatusModifiedDate:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setRecurrenceRules:(id)arg1;
- (void)setSelfAttendee:(id)arg1;
- (void)setSequence:(int)arg1;
- (void)setSharedItemCreatedByDisplayName:(id)arg1;
- (void)setSharedItemCreatedByEmailAddress:(id)arg1;
- (void)setSharedItemCreatedByFirstName:(id)arg1;
- (void)setSharedItemCreatedByLastName:(id)arg1;
- (void)setSharedItemCreatedDate:(id)arg1;
- (void)setSharedItemCreatedTimeZone:(id)arg1;
- (void)setSharedItemModifiedByDisplayName:(id)arg1;
- (void)setSharedItemModifiedByEmailAddress:(id)arg1;
- (void)setSharedItemModifiedByFirstName:(id)arg1;
- (void)setSharedItemModifiedByLastName:(id)arg1;
- (void)setSharedItemModifiedDate:(id)arg1;
- (void)setSharedItemModifiedTimeZone:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)sharedItemCreatedByDisplayName;
- (id)sharedItemCreatedByEmailAddress;
- (id)sharedItemCreatedByFirstName;
- (id)sharedItemCreatedByLastName;
- (id)sharedItemCreatedDate;
- (id)sharedItemCreatedTimeZone;
- (id)sharedItemModifiedByDisplayName;
- (id)sharedItemModifiedByEmailAddress;
- (id)sharedItemModifiedByFirstName;
- (id)sharedItemModifiedByLastName;
- (id)sharedItemModifiedDate;
- (id)sharedItemModifiedTimeZone;
- (id)startDate;
- (id)timeZone;
- (id)title;
- (id)uniqueID;
- (BOOL)validate:(id*)arg1;

@end
