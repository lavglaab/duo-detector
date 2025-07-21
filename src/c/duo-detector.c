#include <pebble.h>
#include "strings.h"

static Window *s_window;
static TextLayer *s_text_layer_model, *s_text_layer_color, *s_text_layer_platform;

// static char s_buf_model[32];

static void prv_window_load(Window *window) {
  Layer *window_layer = window_get_root_layer(window);
  GRect bounds = layer_get_bounds(window_layer);

  //  here i want to have a list of three textlayers, and iterate through that
  // list to initialize all three textlayers
  int s_y_position = bounds.size.h / 4;
  TextLayer* s_list_text_layers[] = {s_text_layer_model, s_text_layer_color, s_text_layer_platform};

  for (int i = 0; i <= 2; i++) {
    s_list_text_layers[i] = text_layer_create(GRect(0, s_y_position, bounds.size.w, 35));
    // text_layer_set_text(s_list_text_layers[i], models[watch_info_get_model()]);
    text_layer_set_text_alignment(s_list_text_layers[i], GTextAlignmentCenter);
    layer_add_child(window_layer, text_layer_get_layer(s_list_text_layers[i]));
    #if defined(PBL_ROUND)
      text_layer_enable_screen_text_flow_and_paging(s_list_text_layers[i], 10);
    #endif
    s_y_position +=37;
  }
  // strncpy(s_buf_model, models[watch_info_get_model()], strlen(models[watch_info_get_model()]));
  text_layer_set_text(s_list_text_layers[0], models[watch_info_get_model()]);
  text_layer_set_text(s_list_text_layers[1], colors[watch_info_get_color()]);
  text_layer_set_text(s_list_text_layers[2], platforms[PBL_PLATFORM_TYPE_CURRENT]);
}

static void prv_window_unload(Window *window) {
  text_layer_destroy(s_text_layer_model);
  text_layer_destroy(s_text_layer_platform);
  text_layer_destroy(s_text_layer_color);
}

static void prv_init(void) {
  s_window = window_create();
  window_set_window_handlers(s_window, (WindowHandlers) {
    .load = prv_window_load,
    .unload = prv_window_unload,
  });
  const bool animated = true;
  window_stack_push(s_window, animated);

  APP_LOG(APP_LOG_LEVEL_INFO, "Model: %i, Color: %i, Platform: %i", (int) watch_info_get_model(), (int) watch_info_get_color(), (int) PBL_PLATFORM_TYPE_CURRENT);
}

static void prv_deinit(void) {
  window_destroy(s_window);
}

int main(void) {
  prv_init();

  APP_LOG(APP_LOG_LEVEL_DEBUG, "Done initializing, pushed window: %p", s_window);

  app_event_loop();
  prv_deinit();
}
