#ifndef ESP8266IFTTT_H
#define ESP8266IFTTT_H

#if (ARDUINO >= 100)
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class ESP8266IFTTT
{
  public:
    void trigger(String iftttEventName, String iftttKey);
    void trigger(String iftttEventName, String iftttKey, String value1, String value2, String value3);
};

extern ESP8266IFTTT IFTTT;

#endif
