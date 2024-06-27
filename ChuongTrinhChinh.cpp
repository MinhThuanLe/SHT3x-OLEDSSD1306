#include "ChuongTrinhChinh.h"
#include "MySHT31.h"
#include "OLED_SSD1306.h"



SHT3x _SHT31;
SSD1306 _SSD1306;

void KhoiTao() {
#pragma region KhoiTao
  Serial.begin(115200);
  Serial.println();

  // Khởi tạo I2C
  // Wire.setPins(pinSDA, pinSCL);  //Custom pin I2C
  Wire.begin();


  // Khởi tạo SHT31
  _SHT31.KhoiTaoSHT31();

  // Khởi tạo OLED
  _SSD1306.KhoiTaoSSD1306();
  

#pragma endregion KhoiTao
}

void ChayChuongTrinhChinh(void) {
  _SHT31.DocCamBienNhietDoVaDoAmSHT31();
  _SSD1306.display.setCursor(0,0);
  _SSD1306.display.clearDisplay();

  _SSD1306.display.setTextSize(2);
  _SSD1306.display.setCursor(0,0);
  _SSD1306.display.print("Temp: ");
  _SSD1306.display.setTextSize(3);
  _SSD1306.display.setCursor(0,30);
  _SSD1306.display.print(_SHT31.NhietDo);
  _SSD1306.display.print(" ");
  _SSD1306.display.setTextSize(1);
  _SSD1306.display.cp437(true);
  _SSD1306.display.write(167);
  _SSD1306.display.setTextSize(2);
  _SSD1306.display.print("C");

  _SSD1306.display.display();
  delay(2000);
  _SSD1306.display.clearDisplay();
  //display humidity
  _SSD1306.display.setTextSize(2);
  _SSD1306.display.setCursor(0, 0);
  _SSD1306.display.print("Humi: ");
  _SSD1306.display.setTextSize(3);
  _SSD1306.display.setCursor(0, 30);
  _SSD1306.display.print(_SHT31.DoAm);
  _SSD1306.display.print(" %");
  
  _SSD1306.display.display();

  delay(2000);
}