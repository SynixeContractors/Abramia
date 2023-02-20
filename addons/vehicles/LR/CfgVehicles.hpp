class CUP_LR_Transport_Base;
class CLASS(LR_Transport): CUP_LR_Transport_Base {
    scope = 2;
    curatorScope = 2;
    side = 2;
    hiddenselectionstextures[] = {QPATHTOF(data\abramia_lr_base_co.paa), QPATHTOF(data\abramia_lr_special_co.paa)};
    faction = QCLASS(I_Abramia);
    crew = QCLASS(I_Rifleman_F);
    typicalCargo[] = {QCLASS(I_Rifleman_F)};
    #include "items.hpp"
};

class CUP_LR_MG_Base;
class CLASS(LR_MG): CUP_LR_MG_Base {
    scope = 2;
    curatorScope = 2;
    side = 2;
    hiddenselectionstextures[] = {QPATHTOF(data\abramia_lr_base_co.paa), QPATHTOF(data\abramia_lr_special_co.paa)};
    faction = QCLASS(I_Abramia);
    crew = QCLASS(I_Rifleman_F);
    typicalCargo[] = {QCLASS(I_Rifleman_F)};
    #include "items.hpp"
};

class CUP_LR_Ambulance_Base;
class CLASS(LR_Ambulance): CUP_LR_Ambulance_Base {
    scope = 2;
    curatorScope = 2;
    side = 2;
    hiddenselectionstextures[] = {QPATHTOF(data\abramia_lr_base_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_amb_ext_desert_co.paa", QPATHTOF(data\abramia_lr_special_co.paa)};
    faction = QCLASS(I_Abramia);
    crew = QCLASS(I_Rifleman_F);
    typicalCargo[] = {QCLASS(I_Rifleman_F)};
    #include "items.hpp"
};
