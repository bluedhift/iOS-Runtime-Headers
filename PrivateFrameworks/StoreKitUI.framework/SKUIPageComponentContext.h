/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSDictionary;

@interface SKUIPageComponentContext : NSObject <NSCopying> {
    NSDictionary *_componentDictionary;
    NSDictionary *_items;
    int _layoutStyle;
    double _pageGenerationTime;
    NSDictionary *_unavailableItems;
}

@property(copy) NSDictionary * componentDictionary;
@property(copy) NSDictionary * items;
@property int layoutStyle;
@property(readonly) double pageGenerationTime;
@property(copy) NSDictionary * unavailableItems;

- (void).cxx_destruct;
- (id)componentDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (BOOL)isUnavailableItemIdentifier:(id)arg1;
- (id)itemForItemIdentifier:(id)arg1;
- (id)items;
- (int)layoutStyle;
- (double)pageGenerationTime;
- (void)setComponentDictionary:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setUnavailableItems:(id)arg1;
- (id)unavailableItems;

@end
