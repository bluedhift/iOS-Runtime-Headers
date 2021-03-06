/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLMesh;

@interface VGLQuadMesh : NSObject {
    VGLMesh *_mesh;
    int _quadCount;
}

@property(readonly) int quadCount;

- (void)appendQuads:(void*)arg1 count:(int)arg2;
- (void)dealloc;
- (void)drawQuadsWithContext:(id)arg1;
- (void)drawWireframeQuadsWithContext:(id)arg1;
- (void)extendIndexBuffer:(int)arg1;
- (id)initWithStride:(int)arg1 attributes:(const struct { int x1; int x2; int x3; }*)arg2 attributeCount:(unsigned char)arg3 quadCapacity:(int)arg4;
- (int)quadCount;
- (void*)reserveQuads:(int)arg1;
- (void)reset;
- (void)resetVertices;

@end
