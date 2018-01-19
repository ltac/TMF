#include "loadouts\_macros.hpp"

class cfgLoadouts
{

    /**
     * Vanilla
     */
    class BLU_F
    {
        displayName = "NATO";
        category = "Vanilla";
        tooltip = "Uses standard NATO equipment in vanilla Arma 3.";
        #include "loadouts\blu_f.hpp"
    };
    class BLU_G_F
    {
        displayName = "FIA (West)";
        category = "Vanilla";
        tooltip = "Uses standard FIA equipment in vanilla Arma 3.";
        #include "loadouts\fia_f.hpp"
    };

    class OPF_F
    {
        displayName = "CSAT";
        category = "Vanilla";
        tooltip = "Uses standard CSAT equipment in vanilla Arma 3.";
        #include "loadouts\opf_f.hpp"
    };
    class OPF_G_F
    {
        displayName = "FIA (East)";
        category = "Vanilla";
        tooltip = "Uses standard FIA equipment in vanilla Arma 3.";
        #include "loadouts\fia_f.hpp"
    };
    class IND_F
    {
        displayName = "AAF";
        category = "Vanilla";
        tooltip = "Uses standard AAF equipment in vanilla Arma 3.";
        #include "loadouts\ind_f.hpp"
    };
    class IND_G_F
    {
        displayName = "FIA (Resistance)";
        category = "Vanilla";
        tooltip = "Uses standard FIA equipment in vanilla Arma 3.";
        #include "loadouts\fia_f.hpp"
    };
    class CIV_F
    {
        displayName = "Altis Civilians";
        category = "Vanilla";
        tooltip = "Uses civilian uniforms from vanilla Arma 3.";
        #include "loadouts\civ_f.hpp"
    };

    /**
     * Mod: BluFor
     */
    class US_ARMY_OCP
    {
        displayName = "US Army (OCP)";
        category = "Modset";
        #include "loadouts\us_army_ocp.hpp"
    };
    class BAF_MTP
    {
        displayName = "British Armed Forces (MTP)";
        category = "Modset";
        #include "loadouts\baf_mtp.hpp"
    }

    /**
     * Mod: OpFor
     */
    class RUS_MSV_FLORA
    {
        displayName = "RU Ground Forces (Flora)";
        category = "Modset";
        #include "loadouts\ru_msv_flora.hpp"
    };
    class OPF_AFGHAN
    {
        displayName = "Afghan Militia";
        category = "Modset";
        #include "loadouts\opf_afghan.hpp"
    };

    /**
     * Mod: IndFor
     */    
    class TAK_ARMY
    {
        displayName = "Takistani Army";
        category = "Modset";
        #include "loadouts\taki_army.hpp"
    };
};
