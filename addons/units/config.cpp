#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(I_Rifleman_F),
            QCLASS(I_Autorifleman_F),
            QCLASS(I_Medic_F),
            QCLASS(I_Engineer_F),
            QCLASS(I_Pilot_F)
        };
        weapons[] = {
            QCLASS(wdl)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "abramia_main"
        };
        authors[] = {"Brett Harrison"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
