#ifndef _OLED_SSD1306_h
#define _OLED_SSD1306_h

#include "Debug.h"  //Define debug để bật/tắt các debug ra Serial
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>  //Thư viện cho màn hình Oled

//-------------------------------------------------------------------
// Define cho kích thước màn hình OLED SSD1306
#define SCREEN_ADDRESS 0x3C
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1

//-------------------------------------------------------------------
class SSD1306 {

public:
  void KhoiTaoSSD1306(void);
  Adafruit_SSD1306 display = Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
};

#endif