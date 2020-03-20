#include "raylib.h"
#define VoidPtr void*
#define RAudioBuffer rAudioBuffer

Vector2 Vector2_copy(Vector2 *v) {
    return *v;
}

bool Vector2__EQ_(Vector2 v1, Vector2 v2) {
    return ((v1.x == v2.x) && (v1.y == v2.y));
}

Vector3 Vector3_copy(Vector3 *v) {
    return *v;
}

bool Vector3__EQ_(Vector3 v1, Vector3 v2) {
    return ((v1.x == v2.x) && (v1.y == v2.y) && (v1.z == v2.z));
}

Vector4 Vector4_copy(Vector4 *v) {
    return *v;
}

bool Vector4__EQ_(Vector4 v1, Vector4 v2) {
    return ((v1.x == v2.x) && (v1.y == v2.y) && (v1.z == v2.z) && (v1.w == v2.w));
}

Quaternion Quaternion_copy(Quaternion *q) {
    return *q;
}

bool Quaternion__EQ_(Quaternion q1, Quaternion q2) {
    return ((q1.x == q2.x) && (q1.y == q2.y) && (q1.z == q2.z) && (q1.w == q2.w));
}

Color Color_copy(Color *c) {
    return *c;
}

bool Color__EQ_(Color c1, Color c2) {
    return ((c1.r == c2.r) && (c1.g == c2.g) && (c1.b == c2.b) && (c1.a == c2.a));
}

Rectangle Rectangle_copy(Rectangle *r) {
    return *r;
}

bool Rectangle__EQ_(Rectangle r1, Rectangle r2) {
    return ((r1.x == r2.x) && (r1.y == r2.y) && (r1.width == r2.width) && (r1.height == r2.height));
}

Image Image_copy(Image *i) {
    return *i;
}

Texture2D Texture2D_copy(Texture2D *t) {
    return *t;
}

Texture Texture_copy(Texture *t) {
    return *t;
}

TextureCubemap TextureCubemap_copy(TextureCubemap *t) {
    return *t;
}

RenderTexture2D RenderTexture2D_copy(RenderTexture2D *r) {
    return *r;
}

RenderTexture RenderTexture_copy(RenderTexture *r) {
    return *r;
}

NPatchInfo NPatchInfo_copy(NPatchInfo *n) {
    return *n;
}

CharInfo CharInfo_copy(CharInfo *c) {
    return *c;
}

Font Font_copy(Font *f) {
    return *f;
}

SpriteFont SpriteFont_copy(SpriteFont *s) {
    return *s;
}

Camera3D Camera3D_copy(Camera3D *c) {
    return *c;
}

Camera Camera_copy(Camera *c) {
    return *c;
}

Camera2D Camera2D_copy(Camera2D *c) {
    return *c;
}

Mesh Mesh_copy(Mesh *m) {
    return *m;
}

Shader Shader_copy(Shader *s) {
    return *s;
}

MaterialMap MaterialMap_copy(MaterialMap *m) {
    return *m;
}

Material Material_copy(Material *m) {
    return *m;
}

Transform Transform_copy(Transform *t) {
    return *t;
}

BoneInfo BoneInfo_copy(BoneInfo *b) {
    return *b;
}

Model Model_copy(Model *m) {
    return *m;
}

ModelAnimation ModelAnimation_copy(ModelAnimation *m) {
    return *m;
}

Ray Ray_copy(Ray *r) {
    return *r;
}

RayHitInfo RayHitInfo_copy(RayHitInfo *r) {
    return *r;
}

BoundingBox BoundingBox_copy(BoundingBox *m) {
    return *m;
}

Wave Wave_copy(Wave *w) {
    return *w;
}

AudioStream AudioStream_copy(AudioStream *a) {
    return *a;
}

Sound Sound_copy(Sound *s) {
    return *s;
}

Music Music_copy(Music *m) {
    return *m;
}

VrDeviceInfo VrDeviceInfo_copy(VrDeviceInfo *v) {
    return *v;
}