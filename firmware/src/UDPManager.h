#pragma once

#include <memory>

#include <event.h>
#include <delegat.h>

class UDP;
class UDPManager final : public Event  {
private:
    std::unique_ptr<UDP> udp;

public:
    UDPManager(uint16_t port);
    ~UDPManager();
    delegate<> messenge;
    bool send(std::vector<uint8_t> data);
    virtual void run() override;
    virtual bool isReady() override;

    virtual void startTracking() override;
    virtual void stopTracking() override;
    virtual bool needRemove() override;
};
