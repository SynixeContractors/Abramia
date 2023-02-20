#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(LR_Transport),
            QCLASS(LR_MG),
            QCLASS(LR_Ambulance),
            QCLASS(MTVR),
            QCLASS(MTVR_Repair),
            QCLASS(MTVR_Refuel),
            QCLASS(UH1H)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "abramia_main",
            "CUP_WheeledVehicles_LR",
            "CUP_WheeledVehicles_MTVR",
            "CUP_AirVehicles_UH1H"
        };
        authors[] = {"Brett Harrison"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
