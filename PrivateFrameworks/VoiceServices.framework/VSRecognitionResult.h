/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionResult : NSObject {
}

+ (void)initialize;
+ (id)recognitionResultWithModelIdentifier:(id)arg1 classIdentifiers:(id)arg2 values:(id)arg3;

- (id)createHandler;
- (id)description;
- (int)elementCount;
- (BOOL)getElementClassIdentifier:(id*)arg1 value:(id*)arg2 atIndex:(int)arg3;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)modelIdentifier;
- (id)recognitionAction;
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)arg1 withValue:(id)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setRecognitionAction:(id)arg1;
- (id)valueOfFirstElementWithClassIdentifier:(id)arg1;

@end
