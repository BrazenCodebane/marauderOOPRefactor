#ifndef configs_h
#define configs_h

#include "marauder-M5StickC.h"




 //// BOARD TARGETS
  #define CYD
  //#define MARAUDER_M5STICKC
  //#define MARAUDER_MINI
  //#define MARAUDER_V4
  //#define MARAUDER_V6
  //#define MARAUDER_V6_1
  //#define MARAUDER_KIT
  //#define GENERIC_ESP32
  //#define MARAUDER_FLIPPER
  //#define ESP32_LDDB
  //#define MARAUDER_DEV_BOARD_PRO
  //#define XIAO_ESP32_S3
  //// END BOARD TARGETS




#ifdef MARAUDER_M5STICKC
#include "M5StickC.h"
#elif defined(CYD)
    #include "ESP32-2432S028R.h"
#elif defined(MARAUDER_MINI)
#include "MarauderMini.h"
#elif defined(MARAUDER_V4)
#include "MarauderV4.h"
#elif defined(MARAUDER_V6)
#include "MarauderV6.h"
#elif defined(MARAUDER_V6_1)
#include "MarauderV6_1.h"
#elif defined(MARAUDER_KIT)
#include "MarauderKit.h"
#elif defined(GENERIC_ESP32)
#include "GenericESP32.h"
#elif defined(MARAUDER_FLIPPER)
#include "MarauderFlipper.h"
#elif defined(ESP32_LDDB)
#include "ESP32LDB.h"
#elif defined(MARAUDER_DEV_BOARD_PRO)
#include "MarauderDevBoardPro.h"
#elif defined(XIAO_ESP32_S3)
#include "XiaoESP32S3.h"
#endif

#endif // configs_h