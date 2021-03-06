#ifndef HEADER_GRAPHIC_MESSAGE
#define HEADER_GRAPHIC_MESSAGE
#include "graphic.h"
#include "string_helper.h"
#include "string_pool.h"

typedef String * String_Access;
typedef SDL_Point * Message_Box_Points;
typedef struct {
  int8_t grid_width;
  int8_t grid_heigth;
  Message_Box_Points box;
  String_Pool_Access pool_1;
  String_Pool_Access pool_2;
  uint8_t current_pool;
  String_Access history;
  uint8_t current;
  uint8_t counter;
} Message_Box;
typedef Message_Box * Message_Box_Access;


typedef struct {
  Message_Box_Access (*start)(void);
  void (*stop)(Message_Box_Access);
  void (*set_box)(Message_Box_Access, int64_t, int64_t, int64_t, int64_t);
  void (*add)(Message_Box_Access, String);
} Message_Box_API;
extern Message_Box_API message_box;
#endif
