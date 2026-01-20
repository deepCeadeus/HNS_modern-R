#ifndef GUARD_TRAINER_REMATCH_H
#define GUARD_TRAINER_REMATCH_H

enum {
    REMATCH_JOEY, //Hns Rematch
    REMATCH_MIKEY, //Hns Rematch
    REMATCH_LIZ, //Hns Rematch
    REMATCH_COLETTE, //Hns Rematch
    REMATCH_BROOKE, //Hns Rematch
    REMATCH_HENRY, //Hns Rematch
    REMATCH_ANTHONY, //Hns Rematch
    REMATCH_BETH, //Hns Rematch
    REMATCH_BRANDON, //Hns Rematch    
    REMATCH_TOBY, //Hns Rematch
    REMATCH_JOE, //HnS Rematch    
    REMATCH_ROY, //Hns Rematch    
    REMATCH_JAMIE, //Hns Rematch    
    REMATCH_ANN_AND_ANNE, //Hns Rematch
    REMATCH_SIMON, //Hns Rematch
    REMATCH_SHANE, //Hns Rematch
    REMATCH_RON, //Hns Rematch
    REMATCH_ELLIOT, //Hns Rematch
    REMATCH_PHIL, //Hns Rematch
    REMATCH_KELLY, //Hns Rematch
    REMATCH_BRENT, //Hns Rematch
    REMATCH_BOB, //Hns Rematch
    REMATCH_THOM_AND_KAE, //Hns Rematch
    REMATCH_QUINN, //Hns Rematch
    REMATCH_WARREN, //Hns Rematch    
    REMATCH_ALLAN, //Hns Rematch    
    REMATCH_ZEKE, //Hns Rematch    
    REMATCH_TRAINER_SIDNEY, //Hns Rematch
    REMATCH_JASON, //Hns Rematch
    REMATCH_JAKE, //Hns Rematch
    REMATCH_BRET, //Hns Rematch    
    //Unused rematches
    REMATCH_ANDRES,
    REMATCH_DUSTY,
    REMATCH_CRISTIN,
    REMATCH_CINDY,
    REMATCH_JESSICA,
    REMATCH_STEVE,
    REMATCH_TONY,
    REMATCH_FERNANDO,
    REMATCH_DALTON,
    REMATCH_BERNIE,
    REMATCH_ETHAN,
    REMATCH_JEFFREY,
    REMATCH_CAMERON,
    REMATCH_JACKI,
    REMATCH_KAREN,
    REMATCH_JERRY,
    REMATCH_ISABEL,
    REMATCH_CALVIN,
    REMATCH_ISAIAH,
    REMATCH_ABIGAIL,
    REMATCH_DYLAN,
    REMATCH_CYNDY,
    REMATCH_JENNY,
    REMATCH_DIANA,
    REMATCH_ERNEST,
    REMATCH_CORY,
    REMATCH_EDWIN,
    REMATCH_ISAAC,
    REMATCH_GABRIELLE,
    REMATCH_CATHERINE,
    REMATCH_JACKSON,
    REMATCH_HALEY,
    REMATCH_JAMES,
    //Unused, entries above WALLY are considered normal trainers, from Wally below are special trainers
    REMATCH_WALLY_VR,
    REMATCH_ROXANNE,
    REMATCH_BRAWLY,
    REMATCH_WATTSON,
    REMATCH_FLANNERY,
    REMATCH_NORMAN,
    REMATCH_WINONA,
    REMATCH_TATE_AND_LIZA,
    REMATCH_JUAN,
    //Unused, entries from SIDNEY below are considered part of REMATCH_ELITE_FOUR_ENTRIES.
    REMATCH_SIDNEY, 
    REMATCH_PHOEBE,
    REMATCH_GLACIA,
    REMATCH_DRAKE,
    REMATCH_WALLACE,
    REMATCH_TABLE_ENTRIES // The total number of rematch entries. Must be last in enum
};

#define REMATCH_SPECIAL_TRAINER_START   REMATCH_WALLY_VR
#define REMATCH_ELITE_FOUR_ENTRIES      REMATCH_SIDNEY

void UpdateGymLeaderRematch(void);

#endif //GUARD_TRAINER_REMATCH_H
