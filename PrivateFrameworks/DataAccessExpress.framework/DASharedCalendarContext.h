/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface DASharedCalendarContext : NSObject {
    NSString *_accountID;
    NSString *_calendarID;
    id _completionBlock;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _shouldSyncCalendar;
}

@property BOOL shouldSyncCalendar;

- (void)dealloc;
- (void)finishedWithError:(id)arg1;
- (id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(id)arg4;
- (void)setShouldSyncCalendar:(BOOL)arg1;
- (BOOL)shouldSyncCalendar;

@end