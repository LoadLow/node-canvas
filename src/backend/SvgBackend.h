#ifndef __SVG_BACKEND_H__
#define __SVG_BACKEND_H__

#include <v8.h>

#include "Backend.h"

using namespace std;

class SvgBackend : public Backend
{
  private:
    cairo_surface_t* createSurface();
    cairo_surface_t* recreateSurface();

  public:
    SvgBackend(int width, int height);
    ~SvgBackend();

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Handle<v8::Object> target);
    static NAN_METHOD(New);
};

#endif
