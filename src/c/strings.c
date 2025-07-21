#include <pebble.h>
#include "strings.h"

const char* models[] = {
  [WATCH_INFO_MODEL_UNKNOWN] = "Unknown model (maybe emulator?)",
  [WATCH_INFO_MODEL_PEBBLE_ORIGINAL] = "Original Pebble",
  [WATCH_INFO_MODEL_PEBBLE_STEEL] = "Pebble Steel",
  [WATCH_INFO_MODEL_PEBBLE_TIME] = "Pebble Time",
  [WATCH_INFO_MODEL_PEBBLE_TIME_STEEL] = "Pebble Time Steel",
  [WATCH_INFO_MODEL_PEBBLE_TIME_ROUND_14] = "Pebble Time Round (14mm)",
  [WATCH_INFO_MODEL_PEBBLE_TIME_ROUND_20] = "Pebble Time Round (20mm)",
  [WATCH_INFO_MODEL_PEBBLE_2_HR] = "Pebble 2+HR",
  [WATCH_INFO_MODEL_PEBBLE_2_SE] = "Pebble 2 (SE)",
  [WATCH_INFO_MODEL_PEBBLE_TIME_2] = "Pebble Time 2 (Unreleased)",
  // core 2 duo, eventually
  // core time 2, eventually
  [WATCH_INFO_MODEL__MAX] = "Maximum model"
};

const char* colors[] = {
  [WATCH_INFO_COLOR_UNKNOWN] = "Unknown color (maybe emulator?)",
  [WATCH_INFO_COLOR_BLACK] = "Black",
  [WATCH_INFO_COLOR_WHITE] = "White",
  [WATCH_INFO_COLOR_RED] = "Red",
  [WATCH_INFO_COLOR_ORANGE] = "Orange",
  [WATCH_INFO_COLOR_GRAY] = "Grey",
  [WATCH_INFO_COLOR_STAINLESS_STEEL] = "Stainless steel",
  [WATCH_INFO_COLOR_MATTE_BLACK] = "Matte black",
  [WATCH_INFO_COLOR_BLUE] = "Blue",
  [WATCH_INFO_COLOR_GREEN] = "Green",
  [WATCH_INFO_COLOR_PINK] = "Pink",
  [WATCH_INFO_COLOR_TIME_WHITE] = "Time, white",
  [WATCH_INFO_COLOR_TIME_BLACK] = "Time, black",
  [WATCH_INFO_COLOR_TIME_RED] = "Time, red",
  [WATCH_INFO_COLOR_TIME_STEEL_SILVER] = "Time steel, silver",
  [WATCH_INFO_COLOR_TIME_STEEL_BLACK] = "Time steel, black",
  [WATCH_INFO_COLOR_TIME_STEEL_GOLD] = "Time steel, gold",
  [WATCH_INFO_COLOR_TIME_ROUND_SILVER_14] = "Time Round 14mm, Silver",
  [WATCH_INFO_COLOR_TIME_ROUND_BLACK_14] = "Time Round 14mm, Black",
  [WATCH_INFO_COLOR_TIME_ROUND_SILVER_20] = "Time Round 20mm, Silver",
  [WATCH_INFO_COLOR_TIME_ROUND_BLACK_20] = "Time Round 20mm, Black",
  [WATCH_INFO_COLOR_TIME_ROUND_ROSE_GOLD_14] = "Time Round 14mm, Rose Gold",
  [WATCH_INFO_COLOR_PEBBLE_2_HR_BLACK] = "Pebble 2 HR lack/Charcoal",
  [WATCH_INFO_COLOR_PEBBLE_2_HR_LIME] = "Pebble 2 HR, Charcoal / Sorbet Green",
  [WATCH_INFO_COLOR_PEBBLE_2_HR_FLAME] = "Pebble 2 HR, Charcoal / Red",
  [WATCH_INFO_COLOR_PEBBLE_2_HR_WHITE] = "Pebble 2 HR, White / Gray",
  [WATCH_INFO_COLOR_PEBBLE_2_HR_AQUA] = "Pebble 2 HR, White / Turquoise",
  [WATCH_INFO_COLOR_PEBBLE_2_SE_BLACK] = "Pebble 2 SE, Black / Charcoal",
  [WATCH_INFO_COLOR_PEBBLE_2_SE_WHITE] = "Pebble 2 SE, White / Gray",
  [WATCH_INFO_COLOR_PEBBLE_TIME_2_BLACK] = "Time 2, Black",
  [WATCH_INFO_COLOR_PEBBLE_TIME_2_SILVER] = "Time 2, Silver",
  [WATCH_INFO_COLOR_PEBBLE_TIME_2_GOLD] = "Time 2, Gold",
  // core 2 duo black, eventually
  // core 2 duo white, eventually
  // core time 2, colors TBA
  [WATCH_INFO_COLOR__MAX] = "Maximum color"
};

const char* platforms[] = {
  [PlatformTypeAplite] = "Aplite",
  [PlatformTypeBasalt] = "Basalt",
  [PlatformTypeChalk] = "Chalk",
  [PlatformTypeDiorite] = "Diorite",
  [PlatformTypeEmery] = "Emery",
  // platform F, eventually
  // platform G, maybe
};