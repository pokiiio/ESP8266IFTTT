# ESP8266IFTTT
an IFTTT Webhook trigger library for ESP8266 dev boards.

## Installation

Clone this repository to a following directory.

```
 /Users/YOUR_USER_NAME/Documents/Arduino/libraries/
 (for those who use Mac. )
```

Please google "Where to install Arduino additional libraries on Windows PC?" if you use Windows PC.

## How to use

### Request to use a header file in your sketch

Insert a following line to top of your sketch.

```
#include <ESP8266Ifttt.h>
```

### Just trigger

Call a function like following...

```
IFTTT.trigger(IFTTT_WEBHOOK_NAME, IFTTT_KEY);
```

where IFTTT_WEBHOOK_NAME is your IFTTT Webhook's name, and IFTTT_KEY is your IFTTT Webhook api key.

### Trigger with values

If you want add values to IFTTT trigers, call a function like following...

```
IFTTT.trigger(IFTTT_WEBHOOK_NAME, IFTTT_KEY, value1, value2, value3);
```

`value1`, `value2`, and `value3` are String values. Values of the other types are not acceptable.
