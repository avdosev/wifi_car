//
// Created by avdosev on 22.01.2020.
//

#include "UDPManager.h"

#include <WiFiUdp.h>

UDPManager::UDPManager(uint16_t port) : udp(new WiFiUDP()) {
    udp->begin(port);
}

UDPManager::~UDPManager() {
    udp->stop();
}

void UDPManager::run() {

}

bool UDPManager::isReady() {
    return false;
}

void UDPManager::startTracking() {

}

void UDPManager::stopTracking() {

}

bool UDPManager::needRemove() {
    return false;
}

bool UDPManager::send(std::vector<uint8_t> data) {
    return false;
}
