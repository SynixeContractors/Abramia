#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main", "CUP_Creatures_Military_RACS"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

class CfgFactionClasses {
    class CLASS(I_Abramia) {
        scope = 2;
        curatorScope = 2;
        displayName = "Abramia";
        flag = "\synixe\abramia\addons\main\data\abramia_co.paa";
        icon = "\synixe\abramia\addons\main\data\abramia_co.paa";
        side = 2;
        priority = 2;
    };
};

class CfgVehicles {
    class FlagCarrier_Asym;
    class CLASS(Flag_Abramia): FlagCarrier_Asym {
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (Abramia)";
        author = "Brett Harrison";
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOF(data\abramia_co.paa)));
        };
    };
    class CLASS(Flag_Protectorate): FlagCarrier_Asym {
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (Protectorate of Abramia)";
        author = "Brett Harrison";
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOF(data\protectorate_co.paa)));
        };
    };
};
