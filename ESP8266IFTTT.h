#ifndef ESP8266IFTTT_H
#define ESP8266IFTTT_H

#if (ARDUINO >= 100)
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class ESP8266IFTTT {
    public:
        void trigger(String iftttEventName, String iftttKey);
};

extern ESP8266IFTTT IFTTT;

#endif
