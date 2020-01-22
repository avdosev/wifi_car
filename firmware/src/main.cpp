#include <Arduino.h>
#include <event_loop.h>

EventLoop eventLoop;

void setup() {

}

void loop() {
    eventLoop.runNext();
}

