#include "MySHT31.h"

//MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//================ Begin: ĐỌC CẢM BIẾN NHIỆT ĐỘ & ĐỘ ẨM ===================//
//MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM

void SHT3x::KhoiTaoSHT31(void) {
  sht31.begin();
}

void SHT3x::DocCamBienNhietDoVaDoAmSHT31() {
  sht31.read();
  NhietDo = sht31.getTemperature();
  NhietDo = float(round(NhietDo * 100) / 100);  //Lấy 2 chữ số sau dấu .
  DoAm = sht31.getHumidity();
  DoAm = float(round(DoAm * 100) / 100);  //Lấy 2 chữ số sau dấu .

  // Trường hợp không kết nối được với cảm biến.
  if (NhietDo >= 130 || NhietDo <= -45) {
    NhietDo = -1;
    DoAm = -1;
  }

#ifdef debug
  Serial.print("Nhiệt độ: ");
  Serial.println(NhietDo);
  Serial.print("Độ Ẩm: ");
  Serial.println(DoAm);
#endif
}

//MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//================ End: ĐỌC CẢM BIẾN NHIỆT ĐỘ & ĐỘ ẨM =====================//
//MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM