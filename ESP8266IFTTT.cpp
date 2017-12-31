#include <ESP8266HTTPClient.h>
#include "ESP8266IFTTT.h"

void ESP8266IFTTT::trigger(String iftttEventName, String iftttKey)
{
  trigger(iftttEventName, iftttKey, "", "", "");
}

void ESP8266IFTTT::trigger(String iftttEventName, String iftttKey, String value1, String value2, String value3)
{
  HTTPClient http;
  String json = "{\"value1\":\"" + value1 + "\", \"value2\":\"" + value2 + "\", \"value3\":\"" + value3 + "\"}";
  http.begin("http://maker.ifttt.com/trigger/" + iftttEventName + "/with/key/" + iftttKey);
  http.addHeader("Content-Type", "application/JSON");
  http.addHeader("Content-Length", String(json.length()));
  int httpCode = http.POST(json);
  http.end();
}

ESP8266IFTTT IFTTT;
