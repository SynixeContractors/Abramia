class CUP_MTVR_Base;
class CLASS(MTVR): CUP_MTVR_Base {
    scope = 2;
    curatorScope = 2;
    side = 2;
    faction = QCLASS(I_Abramia);
    crew = QCLASS(I_Rifleman_F);
    typicalCargo[] = {QCLASS(I_Rifleman_F)};
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\mtvr_body_abramia_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\textures\mtvr_body2_racs_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\textures\mtvr_interier_racs_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\textures\mtvr_tarp_racs_co.paa"};
    #include "items.hpp"
    maximumLoad = 5000;
    editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\preview\CUP_I_MTVR_RACS.jpg";
};

class CUP_MTVR_Refuel_Base;
class CLASS(MTVR_Refuel): CUP_MTVR_Refuel_Base {
    scope = 2;
    curatorScope = 2;
    side = 2;
    faction = QCLASS(I_Abramia);
    crew = QCLASS(I_Rifleman_F);
    typicalCargo[] = {QCLASS(I_Rifleman_F)};
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\mtvr_body_abramia_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\Textures\mtvr_body2_racs_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\Textures\MTVR_interier_racs_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\Textures\mtvr_fuel_racs_co.paa"};
    #include "items.hpp"
    maximumLoad = 2500;
    editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\preview\CUP_I_MTVR_Refuel_RACS.jpg";
};

class CUP_MTVR_Repair_Base;
class CLASS(MTVR_Repair): CUP_MTVR_Repair_Base {
    scope = 2;
    curatorScope = 2;
    side = 2;
    faction = QCLASS(I_Abramia);
    crew = QCLASS(I_Rifleman_F);
    typicalCargo[] = {QCLASS(I_Rifleman_F)};
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\mtvr_body_abramia_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\Textures\mtvr_body2_racs_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\Textures\MTVR_interier_racs_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\Textures\ural_repair_racs_co.paa"};
    #include "items.hpp"
    maximumLoad = 2500;
    editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\preview\CUP_I_MTVR_Repair_RACS.jpg";
};
