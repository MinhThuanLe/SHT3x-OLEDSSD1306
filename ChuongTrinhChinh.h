#ifndef _ChuongTrinhChinh_h
#define _ChuongTrinhChinh_h

//---------------------------------------------------------
#include "Debug.h"
#include <Arduino.h>        
#include <Arduino_JSON.h>   //Thư viện xử lý kiể JSON
#include <Wire.h>           //Thư viện để kết nối I2C

//---------------------------------------------------------
// Mặc định chân SCL 22; SDA 21
#define pinSCL 18   // Chân SCL của I2C
#define pinSDA 19   // Chân SDA của I2C

void KhoiTao(void);
void ChayChuongTrinhChinh(void);

#endif