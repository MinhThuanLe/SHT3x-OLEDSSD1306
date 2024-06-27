#ifndef _SHT31_h
#define _SHT31_h

#include "Debug.h"  //Define debug để bật/tắt các debug ra Serial
#include "SHT31.h"  //Thư viện cho cảm biến nhiệt độ và độ ẩm SHT3x

//-------------------------------------------------------------------
#define SHT31_ADDRESS 0x44
#define dataPin 19   //Chân SDA
#define clockPin 18  //Chân SCL

//-------------------------------------------------------------------
class SHT3x {
private:
  SHT31 sht31;

public:
  float NhietDo;
  float DoAm;

public:
  void KhoiTaoSHT31(void);
  void DocCamBienNhietDoVaDoAmSHT31(void);
};

#endif