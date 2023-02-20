class CUP_UH1H_base;
class CLASS(UH1H): CUP_UH1H_base {
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = QCLASS(I_Abramia);
    crew = QCLASS(I_Pilot_F);
    typicalCargo[] = {QCLASS(I_Pilot_F)};
    #include "items.hpp"
    hiddenSelectionsTextures[] = {QPATHTOF(data\uh1d_abramia_co.paa), "CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_racs_CO.paa", "CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa"};
    editorPreview = "CUP\AirVehicles\CUP_AirVehicles_UH1H\Data\preview\CUP_I_UH1H_RACS.jpg";
};
