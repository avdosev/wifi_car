#include <Arduino.h>
#include <event_loop.h>
#include <ESP8266WiFi.h>

#include "UDPManager.h"

EventLoop eventLoop;

void setup() {
    auto udpManager = makeEvent<UDPManager>(3123);
    eventLoop.addEvent(udpManager);
}

void loop() {
    eventLoop.runNext();
}

