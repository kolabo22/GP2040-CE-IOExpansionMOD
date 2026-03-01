#ifndef PCF8575ADDON_H
#define PCF8575ADDON_H

#include "pcf8575.h"
#include "gpaddon.h"
#include "GamepadEnums.h"
#include "peripheralmanager.h"
#include <map>

#ifndef I2C_PCF8575_ENABLED
#define I2C_PCF8575_ENABLED 0
#endif

#ifndef I2C_PCF8575_BLOCK
#define I2C_PCF8575_BLOCK i2c0
#endif

#define PCF8575_PIN_COUNT 16
#define PCF8575AddonName "PCF8575"

class PCF8575Addon : public GPAddon {
public:
    virtual bool available();
    virtual void setup();
    virtual void preprocess(); // 判定前に実行
    virtual void process();    // 中身は空
    virtual void postprocess(bool sent) {}
    virtual void reinit() {}
    virtual std::string name() { return PCF8575AddonName; }

    std::map<uint8_t, GpioMappingInfo> pinRef;

private:
    PCF8575* pcf;
    int bootSkipCount = 0; 

    // ボタン状態保持用フラグ
    bool inputButtonUp, inputButtonDown, inputButtonLeft, inputButtonRight;
    bool inputButtonB1, inputButtonB2, inputButtonB3, inputButtonB4;
    bool inputButtonL1, inputButtonR1, inputButtonL2, inputButtonR2;
    bool inputButtonS1, inputButtonS2, inputButtonL3, inputButtonR3;
    bool inputButtonA1, inputButtonA2, inputButtonA3, inputButtonA4, inputButtonFN;
    bool inputButtonEXT1, inputButtonEXT2, inputButtonEXT3, inputButtonEXT4;
    bool inputButtonEXT5, inputButtonEXT6, inputButtonEXT7, inputButtonEXT8;
    bool inputButtonEXT9, inputButtonEXT10, inputButtonEXT11, inputButtonEXT12;
    bool inputButtonMacro, inputButtonMacro1, inputButtonMacro2, inputButtonMacro3;
    bool inputButtonMacro4, inputButtonMacro5, inputButtonMacro6;
};

#endif
