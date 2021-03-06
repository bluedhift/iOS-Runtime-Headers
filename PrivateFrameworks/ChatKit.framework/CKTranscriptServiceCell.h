/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKGradientView, IMService, UIImageView, UIView<CKGradientReferenceView>;

@interface CKTranscriptServiceCell : CKTranscriptCell {
    CKGradientView *_gradientView;
    UIImageView *_mask;
    IMService *_service;
}

@property(retain) UIView<CKGradientReferenceView> * gradientReferenceView;
@property(retain) CKGradientView * gradientView;
@property(retain) UIImageView * mask;
@property(retain) IMService * service;

- (void)configureForRowObject:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)gradientReferenceView;
- (id)gradientView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mask;
- (id)maskImage;
- (id)service;
- (void)setGradientReferenceView:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setMask:(id)arg1;
- (void)setService:(id)arg1;

@end
