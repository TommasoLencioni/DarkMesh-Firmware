#include "SOSBuzzModule.h"

#ifdef SOS_BUZZ_PIN

SOSBuzzModule *sosBuzzModule;

int32_t SOSBuzzModule::runOnce() {

    if (!active) {
        digitalWrite(SOS_BUZZ_PIN, LOW);
        return 1000;
    }

    if (millis() < nextChange) {
        return 10;
    }

    const MorseStep &step = sosPattern[index];

    digitalWrite(SOS_BUZZ_PIN, step.on);

    nextChange = millis() + step.duration;

    index++;
    if (index >= sizeof(sosPattern)/sizeof(MorseStep)) {
        index = 0;
    }

    return 10;
}

void SOSBuzzModule::start() {
    active = true;
    index = 0;
    nextChange = millis();
}

void SOSBuzzModule::stop() {
    active = false;
    digitalWrite(SOS_BUZZ_PIN, LOW);
}

#endif