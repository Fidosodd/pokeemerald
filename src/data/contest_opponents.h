
#include "global.h"
#include "contest.h"
#include "constants/species.h"

#define CONTEST_OPPONENT_JIMMY 0
#define CONTEST_OPPONENT_EDITH 1
#define CONTEST_OPPONENT_EVAN 2
#define CONTEST_OPPONENT_KELSEY 3
#define CONTEST_OPPONENT_MADISON 4
#define CONTEST_OPPONENT_RAYMOND 5
#define CONTEST_OPPONENT_GRANT 6
#define CONTEST_OPPONENT_PAIGE 7
#define CONTEST_OPPONENT_ALEC 8
#define CONTEST_OPPONENT_SYDNEY 9
#define CONTEST_OPPONENT_MORRIS 10
#define CONTEST_OPPONENT_MARIAH 11
#define CONTEST_OPPONENT_RUSSELL 12
#define CONTEST_OPPONENT_MELANIE 13
#define CONTEST_OPPONENT_CHANCE 14
#define CONTEST_OPPONENT_AGATHA 15
#define CONTEST_OPPONENT_BEAU 16
#define CONTEST_OPPONENT_KAY 17
#define CONTEST_OPPONENT_CALE 18
#define CONTEST_OPPONENT_CAITLIN 19
#define CONTEST_OPPONENT_COLBY 20
#define CONTEST_OPPONENT_KYLIE 21
#define CONTEST_OPPONENT_LIAM 22
#define CONTEST_OPPONENT_MILO 23
#define CONTEST_OPPONENT_KARINA 24
#define CONTEST_OPPONENT_BOBBY 25
#define CONTEST_OPPONENT_CLAIRE 26
#define CONTEST_OPPONENT_WILLIE 27
#define CONTEST_OPPONENT_CASSIDY 28
#define CONTEST_OPPONENT_MORGAN 29
#define CONTEST_OPPONENT_SUMMER 30
#define CONTEST_OPPONENT_MILES 31
#define CONTEST_OPPONENT_AUDREY 32
#define CONTEST_OPPONENT_AVERY 33
#define CONTEST_OPPONENT_ARIANA 34
#define CONTEST_OPPONENT_ASHTON 35
#define CONTEST_OPPONENT_SANDRA 36
#define CONTEST_OPPONENT_CARSON 37
#define CONTEST_OPPONENT_KATRINA 38
#define CONTEST_OPPONENT_LUKE 39
#define CONTEST_OPPONENT_RAUL 40
#define CONTEST_OPPONENT_JADA 41
#define CONTEST_OPPONENT_ZEEK 42
#define CONTEST_OPPONENT_DIEGO 43
#define CONTEST_OPPONENT_ALIYAH 44
#define CONTEST_OPPONENT_NATALIA 45
#define CONTEST_OPPONENT_DEVIN 46
#define CONTEST_OPPONENT_TYLOR 47
#define CONTEST_OPPONENT_RONNIE 48
#define CONTEST_OPPONENT_CLAUDIA 49
#define CONTEST_OPPONENT_ELIAS 50
#define CONTEST_OPPONENT_JADE 51
#define CONTEST_OPPONENT_FRANCIS 52
#define CONTEST_OPPONENT_ALISHA 53
#define CONTEST_OPPONENT_SAUL 54
#define CONTEST_OPPONENT_FELICIA 55
#define CONTEST_OPPONENT_EMILIO 56
#define CONTEST_OPPONENT_KARLA 57
#define CONTEST_OPPONENT_DARRYL 58
#define CONTEST_OPPONENT_SELENA 59
#define CONTEST_OPPONENT_NOEL 60
#define CONTEST_OPPONENT_LACEY 61
#define CONTEST_OPPONENT_CORBIN 62
#define CONTEST_OPPONENT_GRACIE 63
#define CONTEST_OPPONENT_COLTIN 64
#define CONTEST_OPPONENT_ELLIE 65
#define CONTEST_OPPONENT_MARCUS 66
#define CONTEST_OPPONENT_KIARA 67
#define CONTEST_OPPONENT_BRYCE 68
#define CONTEST_OPPONENT_JAMIE 69
#define CONTEST_OPPONENT_JORGE 70
#define CONTEST_OPPONENT_DEVON 71
#define CONTEST_OPPONENT_JUSTINA 72
#define CONTEST_OPPONENT_RALPH 73
#define CONTEST_OPPONENT_ROSA 74
#define CONTEST_OPPONENT_KEATON 75
#define CONTEST_OPPONENT_MAYRA 76
#define CONTEST_OPPONENT_LAMAR 77
#define CONTEST_OPPONENT_AUBREY 78
#define CONTEST_OPPONENT_NIGEL 79
#define CONTEST_OPPONENT_CAMILLE 80
#define CONTEST_OPPONENT_DEON 81
#define CONTEST_OPPONENT_JANELLE 82
#define CONTEST_OPPONENT_HEATH 83
#define CONTEST_OPPONENT_SASHA 84
#define CONTEST_OPPONENT_FRANKIE 85
#define CONTEST_OPPONENT_HELEN 86
#define CONTEST_OPPONENT_CAMILE 87
#define CONTEST_OPPONENT_MARTIN 88
#define CONTEST_OPPONENT_SERGIO 89
#define CONTEST_OPPONENT_KAILEY 90
#define CONTEST_OPPONENT_PERLA 91
#define CONTEST_OPPONENT_CLARA 92
#define CONTEST_OPPONENT_JAKOB 93
#define CONTEST_OPPONENT_TREY 94
#define CONTEST_OPPONENT_LANE 95

const struct ContestWinner gUnknown_08587FA4[] =
{
    {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_ELECTRIKE,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .monName = _("ELECTER"),
        .trainerName = _("EZRA"),
        .contestRank = CONTEST_RANK_NORMAL
    },
    {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_KYUREM,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .monName = _("TROPO"),
        .trainerName = _("ALLAN"),
        .contestRank = CONTEST_RANK_HYPER
    },
    {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_PHANTUMP,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .monName = _("TUXA"),
        .trainerName = _("JULIET"),
        .contestRank = CONTEST_RANK_NORMAL
    },
    {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_SALANDIT,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .monName = _("PULSE"),
        .trainerName = _("BAILY"),
        .contestRank = CONTEST_RANK_MASTER
    },
    {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_SHUPPET,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .monName = _("SHUPUP"),
        .trainerName = _("MELANY"),
        .contestRank = CONTEST_RANK_SUPER
    },
    {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_ABSOLOM,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .monName = _("GOOZAN"),
        .trainerName = _("HANA"),
        .contestRank = CONTEST_RANK_HYPER
    },
    {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_BUNEARY,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .monName = _("LOUDED"),
        .trainerName = _("BRYANT"),
        .contestRank = CONTEST_RANK_HYPER
    },
    {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_DELCATTY,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .monName = _("KITSY"),
        .trainerName = _("OMAR"),
        .contestRank = CONTEST_RANK_MASTER
    }
};

const struct ContestPokemon gContestOpponents[] =
{
    [CONTEST_OPPONENT_JIMMY] = {
        .species = SPECIES_POOCHYENA,
        .nickname = _("POOCHY"),
        .trainerName = _("JIMMY"),
        .trainerGfxId = EVENT_OBJ_GFX_BOY_1,
        .aiChecks = 0xC000FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_ROAR,
            MOVE_BITE,
            MOVE_TAKE_DOWN,
            MOVE_HOWL
        },
        .cool = 10,
        .beauty = 4,
        .cute = 10,
        .smart = 3,
        .tough = 4,
        .sheen = 50,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_EDITH] = {
        .species = SPECIES_GALLADE,
        .nickname = _("MUSILLE"),
        .trainerName = _("EDITH"),
        .trainerGfxId = EVENT_OBJ_GFX_GIRL_1,
        .aiChecks = 0x82000FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_REST,
            MOVE_FACADE,
            MOVE_TACKLE,
            MOVE_COVET
        },
        .cool = 10,
        .beauty = 10,
        .cute = 6,
        .smart = 1,
        .tough = 2,
        .sheen = 60,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_EVAN] = {
        .species = SPECIES_SOLOSIS,
        .nickname = _("DUSTER"),
        .trainerName = _("EVAN"),
        .trainerGfxId = EVENT_OBJ_GFX_LITTLE_BOY,
        .aiChecks = 0x21000FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SILVER_WIND,
            MOVE_MOONLIGHT,
            MOVE_LIGHT_SCREEN,
            MOVE_GUST
        },
        .cool = 2,
        .beauty = 10,
        .cute = 10,
        .smart = 12,
        .tough = 4,
        .sheen = 70,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KELSEY] = {
        .species = SPECIES_PANGORO,
        .nickname = _("DOTS"),
        .trainerName = _("KELSEY"),
        .trainerGfxId = EVENT_OBJ_GFX_WOMAN_1,
        .aiChecks = 0x20800FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_BIDE,
            MOVE_SYNTHESIS,
            MOVE_BULLET_SEED,
            MOVE_GROWTH
        },
        .cool = 3,
        .beauty = 3,
        .cute = 5,
        .smart = 2,
        .tough = 7,
        .sheen = 80,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MADISON] = {
        .species = SPECIES_SHELMET,
        .nickname = _("TATAY"),
        .trainerName = _("MADISON"),
        .trainerGfxId = EVENT_OBJ_GFX_POKEFAN_F,
        .aiChecks = 0x80400FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_WING_ATTACK,
            MOVE_AGILITY,
            MOVE_AERIAL_ACE,
            MOVE_GROWL
        },
        .cool = 1,
        .beauty = 3,
        .cute = 3,
        .smart = 5,
        .tough = 4,
        .sheen = 90,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_RAYMOND] = {
        .species = SPECIES_AMAURA,
        .nickname = _("NINDA"),
        .trainerName = _("RAYMOND"),
        .trainerGfxId = EVENT_OBJ_GFX_BLACK_BELT,
        .aiChecks = 0x10200FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_LEECH_LIFE,
            MOVE_FALSE_SWIPE,
            MOVE_FURY_SWIPES,
            MOVE_MIND_READER
        },
        .cool = 5,
        .beauty = 2,
        .cute = 10,
        .smart = 7,
        .tough = 8,
        .sheen = 100,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_GRANT] = {
        .species = SPECIES_SHROOMISH,
        .nickname = _("SMISH"),
        .trainerName = _("GRANT"),
        .trainerGfxId = EVENT_OBJ_GFX_YOUNGSTER,
        .aiChecks = 0x20100FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_STUN_SPORE,
            MOVE_LEECH_SEED,
            MOVE_MEGA_DRAIN,
            MOVE_ATTRACT
        },
        .cool = 3,
        .beauty = 3,
        .cute = 10,
        .smart = 2,
        .tough = 2,
        .sheen = 50,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_PAIGE] = {
        .species = SPECIES_TYNAMO,
        .nickname = _("SLEAL"),
        .trainerName = _("PAIGE"),
        .trainerGfxId = EVENT_OBJ_GFX_WOMAN_4,
        .aiChecks = 0x8080FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_AURORA_BEAM,
            MOVE_WATER_GUN,
            MOVE_GROWL,
            MOVE_ROCK_TOMB
        },
        .cool = 3,
        .beauty = 5,
        .cute = 1,
        .smart = 10,
        .tough = 10,
        .sheen = 60,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ALEC] = {
        .species = SPECIES_FLETCHLING,
        .nickname = _("SLOKTH"),
        .trainerName = _("ALEC"),
        .trainerGfxId = EVENT_OBJ_GFX_CAMPER,
        .aiChecks = 0x40040FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_STRENGTH,
            MOVE_COUNTER,
            MOVE_YAWN,
            MOVE_ENCORE
        },
        .cool = 10,
        .beauty = 4,
        .cute = 4,
        .smart = 5,
        .tough = 18,
        .sheen = 70,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SYDNEY] = {
        .species = SPECIES_MELOETTA,
        .nickname = _("WHIRIS"),
        .trainerName = _("SYDNEY"),
        .trainerGfxId = EVENT_OBJ_GFX_LASS,
        .aiChecks = 0x80020FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_ASTONISH,
            MOVE_SCREECH,
            MOVE_UPROAR,
            MOVE_HYPER_VOICE
        },
        .cool = 2,
        .beauty = 2,
        .cute = 7,
        .smart = 2,
        .tough = 7,
        .sheen = 80,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MORRIS] = {
        .species = SPECIES_DWEBBLE,
        .nickname = _("MAHITA"),
        .trainerName = _("MORRIS"),
        .trainerGfxId = EVENT_OBJ_GFX_SCHOOL_KID_M,
        .aiChecks = 0x8010FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SEISMIC_TOSS,
            MOVE_VITAL_THROW,
            MOVE_TACKLE,
            MOVE_REVERSAL
        },
        .cool = 9,
        .beauty = 1,
        .cute = 1,
        .smart = 8,
        .tough = 1,
        .sheen = 90,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MARIAH] = {
        .species = SPECIES_ARON,
        .nickname = _("RONAR"),
        .trainerName = _("MARIAH"),
        .trainerGfxId = EVENT_OBJ_GFX_GIRL_2,
        .aiChecks = 0x8008FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_METAL_CLAW,
            MOVE_IRON_DEFENSE,
            MOVE_HEADBUTT,
            MOVE_TAKE_DOWN
        },
        .cool = 5,
        .beauty = 10,
        .cute = 2,
        .smart = 10,
        .tough = 2,
        .sheen = 100,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_RUSSELL] = {
        .species = SPECIES_MIMIKYU,
        .nickname = _("BATRO"),
        .trainerName = _("RUSSELL"),
        .trainerGfxId = EVENT_OBJ_GFX_MAN_3,
        .aiChecks = 0x90004FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_HAZE,
            MOVE_MEAN_LOOK,
            MOVE_CONFUSE_RAY,
            MOVE_LEECH_LIFE
        },
        .cool = 4,
        .beauty = 2,
        .cute = 2,
        .smart = 2,
        .tough = 10,
        .sheen = 50,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MELANIE] = {
        .species = SPECIES_GIRATINA_ORIGIN,
        .nickname = _("GULIN"),
        .trainerName = _("MELANIE"),
        .trainerGfxId = EVENT_OBJ_GFX_TWIN,
        .aiChecks = 0x40002FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SLUDGE,
            MOVE_AMNESIA,
            MOVE_TOXIC,
            MOVE_YAWN
        },
        .cool = 1,
        .beauty = 10,
        .cute = 1,
        .smart = 10,
        .tough = 5,
        .sheen = 60,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CHANCE] = {
        .species = SPECIES_MANECTRIC,
        .nickname = _("RIKELEC"),
        .trainerName = _("CHANCE"),
        .trainerGfxId = EVENT_OBJ_GFX_RICH_BOY,
        .aiChecks = 0x80001FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SPARK,
            MOVE_THUNDER_WAVE,
            MOVE_THUNDER,
            MOVE_ROAR
        },
        .cool = 20,
        .beauty = 10,
        .cute = 1,
        .smart = 1,
        .tough = 1,
        .sheen = 70,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_AGATHA] = {
        .species = SPECIES_BULBASAUR,
        .nickname = _("BULBY"),
        .trainerName = _("AGATHA"),
        .trainerGfxId = EVENT_OBJ_GFX_WOMAN_2,
        .aiChecks = 0xC000FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_GROWL,
            MOVE_LEECH_SEED,
            MOVE_TACKLE,
            MOVE_SWEET_SCENT
        },
        .cool = 5,
        .beauty = 3,
        .cute = 10,
        .smart = 10,
        .tough = 4,
        .sheen = 50,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_BEAU] = {
        .species = SPECIES_SERPERIOR,
        .nickname = _("FUTTERBE"),
        .trainerName = _("BEAU"),
        .trainerGfxId = EVENT_OBJ_GFX_HEX_MANIAC,
        .aiChecks = 0x82000FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SUPERSONIC,
            MOVE_WHIRLWIND,
            MOVE_SILVER_WIND,
            MOVE_SAFEGUARD
        },
        .cool = 3,
        .beauty = 10,
        .cute = 2,
        .smart = 10,
        .tough = 4,
        .sheen = 60,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KAY] = {
        .species = SPECIES_PIDGEOTTO,
        .nickname = _("PIDEOT"),
        .trainerName = _("KAY"),
        .trainerGfxId = EVENT_OBJ_GFX_WOMAN_5,
        .aiChecks = 0x21000FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_MIRROR_MOVE,
            MOVE_QUICK_ATTACK,
            MOVE_AERIAL_ACE,
            MOVE_FEATHER_DANCE
        },
        .cool = 10,
        .beauty = 8,
        .cute = 4,
        .smart = 2,
        .tough = 3,
        .sheen = 70,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CALE] = {
        .species = SPECIES_KARRABLAST,
        .nickname = _("DIGLE"),
        .trainerName = _("CALE"),
        .trainerGfxId = EVENT_OBJ_GFX_HIKER,
        .aiChecks = 0x20800FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_DIG,
            MOVE_EARTHQUAKE,
            MOVE_FISSURE,
            MOVE_MAGNITUDE
        },
        .cool = 4,
        .beauty = 2,
        .cute = 3,
        .smart = 5,
        .tough = 10,
        .sheen = 80,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CAITLIN] = {
        .species = SPECIES_PIDOVE,
        .nickname = _("WAGIL"),
        .trainerName = _("CAITLIN"),
        .trainerGfxId = EVENT_OBJ_GFX_TUBER_F,
        .aiChecks = 0x80400FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_HYDRO_PUMP,
            MOVE_RAIN_DANCE,
            MOVE_BODY_SLAM,
            MOVE_ICE_BEAM
        },
        .cool = 2,
        .beauty = 10,
        .cute = 5,
        .smart = 3,
        .tough = 10,
        .sheen = 90,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_COLBY] = {
        .species = SPECIES_BASCULIN,
        .nickname = _("TOTDIL"),
        .trainerName = _("COLBY"),
        .trainerGfxId = EVENT_OBJ_GFX_NINJA_BOY,
        .aiChecks = 0x10200FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_RAGE,
            MOVE_SCREECH,
            MOVE_SURF,
            MOVE_BLIZZARD
        },
        .cool = 6,
        .beauty = 10,
        .cute = 2,
        .smart = 1,
        .tough = 5,
        .sheen = 100,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KYLIE] = {
        .species = SPECIES_CLAUNCHER,
        .nickname = _("BALEDY"),
        .trainerName = _("KYLIE"),
        .trainerGfxId = EVENT_OBJ_GFX_BEAUTY,
        .aiChecks = 0x20100FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_BATON_PASS,
            MOVE_AGILITY,
            MOVE_SWIFT,
            MOVE_ATTRACT
        },
        .cool = 8,
        .beauty = 6,
        .cute = 8,
        .smart = 6,
        .tough = 2,
        .sheen = 90,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_LIAM] = {
        .species = SPECIES_LUXIO,
        .nickname = _("BIRDLY"),
        .trainerName = _("LIAM"),
        .trainerGfxId = EVENT_OBJ_GFX_MAN_5,
        .aiChecks = 0x8080FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_PRESENT,
            MOVE_FACADE,
            MOVE_FOCUS_PUNCH,
            MOVE_RETURN
        },
        .cool = 4,
        .beauty = 3,
        .cute = 10,
        .smart = 5,
        .tough = 3,
        .sheen = 80,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MILO] = {
        .species = SPECIES_LARVITAR,
        .nickname = _("TARVITAR"),
        .trainerName = _("MILO"),
        .trainerGfxId = EVENT_OBJ_GFX_MANIAC,
        .aiChecks = 0x40040FFF,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_THRASH,
            MOVE_TORMENT,
            MOVE_CRUNCH,
            MOVE_DIG
        },
        .cool = 8,
        .beauty = 5,
        .cute = 5,
        .smart = 8,
        .tough = 10,
        .sheen = 70,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KARINA] = {
        .species = SPECIES_GIRATINA,
        .nickname = _("RELIA"),
        .trainerName = _("KARINA"),
        .trainerGfxId = EVENT_OBJ_GFX_PICNICKER,
        .aiChecks = 0x24000FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_PETAL_DANCE,
            MOVE_MAGICAL_LEAF,
            MOVE_GRASS_WHISTLE,
            MOVE_INGRAIN
        },
        .cool = 50,
        .beauty = 15,
        .cute = 75,
        .smart = 10,
        .tough = 20,
        .sheen = 100,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_BOBBY] = {
        .species = SPECIES_LILLIPUP,
        .nickname = _("DUODO"),
        .trainerName = _("BOBBY"),
        .trainerGfxId = EVENT_OBJ_GFX_RUNNING_TRIATHLETE_M,
        .aiChecks = 0x82000FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_PECK,
            MOVE_FURY_ATTACK,
            MOVE_RETURN,
            MOVE_GROWL
        },
        .cool = 15,
        .beauty = 21,
        .cute = 15,
        .smart = 85,
        .tough = 35,
        .sheen = 110,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CLAIRE] = {
        .species = SPECIES_TRAPINCH,
        .nickname = _("PINCHIN"),
        .trainerName = _("CLAIRE"),
        .trainerGfxId = EVENT_OBJ_GFX_GIRL_1,
        .aiChecks = 0x81000FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_BITE,
            MOVE_SAND_ATTACK,
            MOVE_DIG,
            MOVE_FAINT_ATTACK
        },
        .cool = 75,
        .beauty = 25,
        .cute = 25,
        .smart = 10,
        .tough = 25,
        .sheen = 120,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_WILLIE] = {
        .species = SPECIES_CACNEA,
        .nickname = _("NACAC"),
        .trainerName = _("WILLIE"),
        .trainerGfxId = EVENT_OBJ_GFX_LITTLE_BOY,
        .aiChecks = 0x80800FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SPIKES,
            MOVE_LEER,
            MOVE_POISON_STING,
            MOVE_SAND_ATTACK
        },
        .cool = 10,
        .beauty = 30,
        .cute = 25,
        .smart = 65,
        .tough = 25,
        .sheen = 130,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CASSIDY] = {
        .species = SPECIES_SANDSLASH,
        .nickname = _("SHRAND"),
        .trainerName = _("CASSIDY"),
        .trainerGfxId = EVENT_OBJ_GFX_POKEFAN_F,
        .aiChecks = 0x10400FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SLASH,
            MOVE_DEFENSE_CURL,
            MOVE_SWIFT,
            MOVE_FURY_SWIPES
        },
        .cool = 30,
        .beauty = 90,
        .cute = 30,
        .smart = 10,
        .tough = 100,
        .sheen = 140,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MORGAN] = {
        .species = SPECIES_BOLDORE,
        .nickname = _("TOYBAL"),
        .trainerName = _("MORGAN"),
        .trainerGfxId = EVENT_OBJ_GFX_BLACK_BELT,
        .aiChecks = 0x8200FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SELF_DESTRUCT,
            MOVE_ROCK_TOMB,
            MOVE_PSYBEAM,
            MOVE_CONFUSION
        },
        .cool = 50,
        .beauty = 40,
        .cute = 10,
        .smart = 35,
        .tough = 35,
        .sheen = 150,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SUMMER] = {
        .species = SPECIES_MEDICHAM,
        .nickname = _("CHAMCHAM"),
        .trainerName = _("SUMMER"),
        .trainerGfxId = EVENT_OBJ_GFX_WOMAN_4,
        .aiChecks = 0x10100FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_REVERSAL,
            MOVE_THUNDER_PUNCH,
            MOVE_FIRE_PUNCH,
            MOVE_ICE_PUNCH
        },
        .cool = 40,
        .beauty = 20,
        .cute = 40,
        .smart = 40,
        .tough = 40,
        .sheen = 100,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MILES] = {
        .species = SPECIES_PALKIA,
        .nickname = _("SPININ"),
        .trainerName = _("MILES"),
        .trainerGfxId = EVENT_OBJ_GFX_CAMPER,
        .aiChecks = 0x80080FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_TEETER_DANCE,
            MOVE_PSYCH_UP,
            MOVE_HYPNOSIS,
            MOVE_UPROAR
        },
        .cool = 25,
        .beauty = 75,
        .cute = 25,
        .smart = 10,
        .tough = 25,
        .sheen = 110,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_AUDREY] = {
        .species = SPECIES_SWABLU,
        .nickname = _("SWABY"),
        .trainerName = _("AUDREY"),
        .trainerGfxId = EVENT_OBJ_GFX_LASS,
        .aiChecks = 0xA0040FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_MIRROR_MOVE,
            MOVE_PERISH_SONG,
            MOVE_SAFEGUARD,
            MOVE_MIST
        },
        .cool = 30,
        .beauty = 30,
        .cute = 40,
        .smart = 30,
        .tough = 25,
        .sheen = 120,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_AVERY] = {
        .species = SPECIES_SPOINK,
        .nickname = _("POINKER"),
        .trainerName = _("AVERY"),
        .trainerGfxId = EVENT_OBJ_GFX_SCHOOL_KID_M,
        .aiChecks = 0x80020FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SPLASH,
            MOVE_CONFUSE_RAY,
            MOVE_SNORE,
            MOVE_REST
        },
        .cool = 40,
        .beauty = 10,
        .cute = 30,
        .smart = 40,
        .tough = 30,
        .sheen = 130,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ARIANA] = {    
        .species = SPECIES_ROGGENROLA,
        .nickname = _("KECON"),
        .trainerName = _("ARIANA"),
        .trainerGfxId = EVENT_OBJ_GFX_GIRL_2,
        .aiChecks = 0x80010FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_THIEF,
            MOVE_SCREECH,
            MOVE_ANCIENT_POWER,
            MOVE_BIND
        },
        .cool = 10,
        .beauty = 10,
        .cute = 40,
        .smart = 75,
        .tough = 35,
        .sheen = 140,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ASHTON] = {
        .species = SPECIES_DRILLBUR,
        .nickname = _("GOLDEN"),
        .trainerName = _("ASHTON"),
        .trainerGfxId = EVENT_OBJ_GFX_MAN_3,
        .aiChecks = 0x80008FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_HORN_ATTACK,
            MOVE_FURY_ATTACK,
            MOVE_HORN_DRILL,
            MOVE_TAIL_WHIP
        },
        .cool = 70,
        .beauty = 30,
        .cute = 5,
        .smart = 30,
        .tough = 25,
        .sheen = 150,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SANDRA] = {
        .species = SPECIES_LITWICK,
        .nickname = _("BOBOACH"),
        .trainerName = _("SANDRA"),
        .trainerGfxId = EVENT_OBJ_GFX_TWIN,
        .aiChecks = 0x80004FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_MUD_SPORT,
            MOVE_WATER_SPORT,
            MOVE_EARTHQUAKE,
            MOVE_FUTURE_SIGHT
        },
        .cool = 45,
        .beauty = 45,
        .cute = 60,
        .smart = 25,
        .tough = 15,
        .sheen = 100,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CARSON] = {
        .species = SPECIES_SKARMORY,
        .nickname = _("CORPY"),
        .trainerName = _("CARSON"),
        .trainerGfxId = EVENT_OBJ_GFX_YOUNGSTER,
        .aiChecks = 0x8002FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SWIFT,
            MOVE_DOUBLE_TEAM,
            MOVE_AGILITY,
            MOVE_CUT
        },
        .cool = 40,
        .beauty = 30,
        .cute = 25,
        .smart = 60,
        .tough = 20,
        .sheen = 110,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KATRINA] = {
        .species = SPECIES_DUOSION,
        .nickname = _("TADO"),
        .trainerName = _("KATRINA"),
        .trainerGfxId = EVENT_OBJ_GFX_WOMAN_1,
        .aiChecks = 0x8001FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_ASTONISH,
            MOVE_GROWL,
            MOVE_RAIN_DANCE,
            MOVE_WATER_PULSE
        },
        .cool = 15,
        .beauty = 15,
        .cute = 30,
        .smart = 15,
        .tough = 75,
        .sheen = 120,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_LUKE] = {
        .species = SPECIES_MANDIBUZZ,
        .nickname = _("BROWLO"),
        .trainerName = _("LUKE"),
        .trainerGfxId = EVENT_OBJ_GFX_FAT_MAN,
        .aiChecks = 0xC000FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_YAWN,
            MOVE_DISABLE,
            MOVE_GROWL,
            MOVE_CONFUSION
        },
        .cool = 20,
        .beauty = 40,
        .cute = 40,
        .smart = 30,
        .tough = 20,
        .sheen = 100,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_RAUL] = {
        .species = SPECIES_MAGNEZONE,
        .nickname = _("FETCHIN"),
        .trainerName = _("RAUL"),
        .trainerGfxId = EVENT_OBJ_GFX_MAN_5,
        .aiChecks = 0x82000FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_FACADE,
            MOVE_FURY_CUTTER,
            MOVE_FLY,
            MOVE_RETURN
        },
        .cool = 40,
        .beauty = 10,
        .cute = 40,
        .smart = 20,
        .tough = 20,
        .sheen = 110,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JADA] = {
        .species = SPECIES_HERDIER,
        .nickname = _("HERDIEREY"),
        .trainerName = _("JADA"),
        .trainerGfxId = EVENT_OBJ_GFX_WOMAN_2,
        .aiChecks = 0x21000FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_ATTRACT,
            MOVE_ICE_BEAM,
            MOVE_SAFEGUARD,
            MOVE_GROWL
        },
        .cool = 10,
        .beauty = 30,
        .cute = 40,
        .smart = 20,
        .tough = 20,
        .sheen = 120,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ZEEK] = {
        .species = SPECIES_RUFFLET,
        .nickname = _("DROWZIN"),
        .trainerName = _("ZEEK"),
        .trainerGfxId = EVENT_OBJ_GFX_PSYCHIC_M,
        .aiChecks = 0x20800FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_DISABLE,
            MOVE_FUTURE_SIGHT,
            MOVE_HIDDEN_POWER,
            MOVE_RETURN
        },
        .cool = 10,
        .beauty = 40,
        .cute = 50,
        .smart = 30,
        .tough = 45,
        .sheen = 130,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_DIEGO] = {
        .species = SPECIES_HITMONCHAN,
        .nickname = _("HITEMON"),
        .trainerName = _("DIEGO"),
        .trainerGfxId = EVENT_OBJ_GFX_EXPERT_M,
        .aiChecks = 0x80400FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SKY_UPPERCUT,
            MOVE_DETECT,
            MOVE_REVENGE,
            MOVE_MEGA_PUNCH
        },
        .cool = 45,
        .beauty = 20,
        .cute = 10,
        .smart = 20,
        .tough = 45,
        .sheen = 140,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ALIYAH] = {
        .species = SPECIES_BLISSEY,
        .nickname = _("BLISS"),
        .trainerName = _("ALIYAH"),
        .trainerGfxId = EVENT_OBJ_GFX_TEALA,
        .aiChecks = 0x10200FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SING,
            MOVE_SOFT_BOILED,
            MOVE_EGG_BOMB,
            MOVE_DOUBLE_EDGE
        },
        .cool = 20,
        .beauty = 35,
        .cute = 40,
        .smart = 20,
        .tough = 20,
        .sheen = 150,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_NATALIA] = {
        .species = SPECIES_GOTHORITA,
        .nickname = _("KIDLEK"),
        .trainerName = _("NATALIA"),
        .trainerGfxId = EVENT_OBJ_GFX_POKEFAN_F,
        .aiChecks = 0x20100FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SHOCK_WAVE,
            MOVE_QUICK_ATTACK,
            MOVE_SCREECH,
            MOVE_ATTRACT
        },
        .cool = 40,
        .beauty = 10,
        .cute = 40,
        .smart = 25,
        .tough = 25,
        .sheen = 140,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_DEVIN] = {
        .species = SPECIES_POPPLIO,
        .nickname = _("SNUBBINS"),
        .trainerName = _("DEVIN"),
        .trainerGfxId = EVENT_OBJ_GFX_GENTLEMAN,
        .aiChecks = 0x8080FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SCARY_FACE,
            MOVE_TAUNT,
            MOVE_TAIL_WHIP,
            MOVE_BITE
        },
        .cool = 20,
        .beauty = 20,
        .cute = 20,
        .smart = 20,
        .tough = 20,
        .sheen = 130,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_TYLOR] = {
        .species = SPECIES_SYLVEON,
        .nickname = _("DREAVIS"),
        .trainerName = _("TYLOR"),
        .trainerGfxId = EVENT_OBJ_GFX_HEX_MANIAC,
        .aiChecks = 0x40040FFF,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_PERISH_SONG,
            MOVE_MEAN_LOOK,
            MOVE_CONFUSE_RAY,
            MOVE_PAIN_SPLIT
        },
        .cool = 10,
        .beauty = 35,
        .cute = 10,
        .smart = 45,
        .tough = 20,
        .sheen = 120,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_RONNIE] = {
        .species = SPECIES_LAIRON,
        .nickname = _("LAIRN"),
        .trainerName = _("RONNIE"),
        .trainerGfxId = EVENT_OBJ_GFX_HIKER,
        .aiChecks = 0x84000FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_METAL_SOUND,
            MOVE_METAL_CLAW,
            MOVE_HARDEN,
            MOVE_TAKE_DOWN
        },
        .cool = 30,
        .beauty = 50,
        .cute = 35,
        .smart = 100,
        .tough = 90,
        .sheen = 200,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CLAUDIA] = {
        .species = SPECIES_MIENSHAO,
        .nickname = _("SHIFTY"),
        .trainerName = _("CLAUDIA"),
        .trainerGfxId = EVENT_OBJ_GFX_GIRL_1,
        .aiChecks = 0x82000FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_GROWTH,
            MOVE_RAZOR_WIND,
            MOVE_EXPLOSION,
            MOVE_EXTRASENSORY
        },
        .cool = 75,
        .beauty = 75,
        .cute = 65,
        .smart = 35,
        .tough = 70,
        .sheen = 210,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ELIAS] = {
        .species = SPECIES_AURORUS,
        .nickname = _("NINAS"),
        .trainerName = _("ELIAS"),
        .trainerGfxId = EVENT_OBJ_GFX_LITTLE_BOY,
        .aiChecks = 0x81000FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SCREECH,
            MOVE_FURY_SWIPES,
            MOVE_SAND_ATTACK,
            MOVE_BATON_PASS
        },
        .cool = 30,
        .beauty = 50,
        .cute = 95,
        .smart = 70,
        .tough = 70,
        .sheen = 220,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JADE] = {
        .species = SPECIES_ACCELGOR,
        .nickname = _("WELOW"),
        .trainerName = _("JADE"),
        .trainerGfxId = EVENT_OBJ_GFX_POKEFAN_F,
        .aiChecks = 0x80800FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_AGILITY,
            MOVE_AERIAL_ACE,
            MOVE_WING_ATTACK,
            MOVE_FLY
        },
        .cool = 65,
        .beauty = 85,
        .cute = 35,
        .smart = 75,
        .tough = 40,
        .sheen = 230,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_FRANCIS] = {
        .species = SPECIES_MIGHTYENA,
        .nickname = _("YENA"),
        .trainerName = _("FRANCIS"),
        .trainerGfxId = EVENT_OBJ_GFX_BLACK_BELT,
        .aiChecks = 0x80400FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_TAUNT,
            MOVE_THIEF,
            MOVE_ODOR_SLEUTH,
            MOVE_TAKE_DOWN
        },
        .cool = 40,
        .beauty = 80,
        .cute = 35,
        .smart = 70,
        .tough = 70,
        .sheen = 240,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ALISHA] = {
        .species = SPECIES_COTTONEE,
        .nickname = _("TIFLY"),
        .trainerName = _("ALISHA"),
        .trainerGfxId = EVENT_OBJ_GFX_WOMAN_4,
        .aiChecks = 0x80200FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_MORNING_SUN,
            MOVE_SILVER_WIND,
            MOVE_STUN_SPORE,
            MOVE_SECRET_POWER
        },
        .cool = 40,
        .beauty = 70,
        .cute = 25,
        .smart = 80,
        .tough = 100,
        .sheen = 250,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SAUL] = {
        .species = SPECIES_EXCADRILL,
        .nickname = _("KINGSEA"),
        .trainerName = _("SAUL"),
        .trainerGfxId = EVENT_OBJ_GFX_CAMPER,
        .aiChecks = 0x80100FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_FLAIL,
            MOVE_SUPERSONIC,
            MOVE_HORN_ATTACK,
            MOVE_FURY_ATTACK
        },
        .cool = 80,
        .beauty = 60,
        .cute = 30,
        .smart = 70,
        .tough = 90,
        .sheen = 200,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_FELICIA] = {
        .species = SPECIES_ALOLAN_MAROWAK,
        .nickname = _("CASTER"),
        .trainerName = _("FELICIA"),
        .trainerGfxId = EVENT_OBJ_GFX_LASS,
        .aiChecks = 0x80080FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SUNNY_DAY,
            MOVE_WEATHER_BALL,
            MOVE_SANDSTORM,
            MOVE_RETURN
        },
        .cool = 70,
        .beauty = 80,
        .cute = 80,
        .smart = 50,
        .tough = 65,
        .sheen = 210,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_EMILIO] = {
        .species = SPECIES_SPEWPA,
        .nickname = _("CHOKEM"),
        .trainerName = _("EMILIO"),
        .trainerGfxId = EVENT_OBJ_GFX_SCHOOL_KID_M,
        .aiChecks = 0x80040FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SEISMIC_TOSS,
            MOVE_FOCUS_ENERGY,
            MOVE_KARATE_CHOP,
            MOVE_SCARY_FACE
        },
        .cool = 70,
        .beauty = 85,
        .cute = 25,
        .smart = 60,
        .tough = 50,
        .sheen = 220,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KARLA] = {
        .species = SPECIES_REUNICLUS,
        .nickname = _("LOMBE"),
        .trainerName = _("KARLA"),
        .trainerGfxId = EVENT_OBJ_GFX_GIRL_2,
        .aiChecks = 0x80020FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_ATTRACT,
            MOVE_FLASH,
            MOVE_UPROAR,
            MOVE_GROWL
        },
        .cool = 40,
        .beauty = 60,
        .cute = 90,
        .smart = 45,
        .tough = 70,
        .sheen = 230,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_DARRYL] = {
        .species = SPECIES_BANSHEETTE,
        .nickname = _("VIPES"),
        .trainerName = _("DARRYL"),
        .trainerGfxId = EVENT_OBJ_GFX_MAN_3,
        .aiChecks = 0x80010FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_POISON_FANG,
            MOVE_GLARE,
            MOVE_WRAP,
            MOVE_SCREECH
        },
        .cool = 35,
        .beauty = 50,
        .cute = 90,
        .smart = 40,
        .tough = 100,
        .sheen = 240,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SELENA] = {
        .species = SPECIES_WAILMER,
        .nickname = _("MERAIL"),
        .trainerName = _("SELENA"),
        .trainerGfxId = EVENT_OBJ_GFX_EXPERT_F,
        .aiChecks = 0x80008FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_WATER_PULSE,
            MOVE_REST,
            MOVE_WATER_SPOUT,
            MOVE_SPLASH
        },
        .cool = 30,
        .beauty = 100,
        .cute = 100,
        .smart = 50,
        .tough = 30,
        .sheen = 250,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_NOEL] = {
        .species = SPECIES_MAGIKARP,
        .nickname = _("KARPAG"),
        .trainerName = _("NOEL"),
        .trainerGfxId = EVENT_OBJ_GFX_YOUNGSTER,
        .aiChecks = 0x80004FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_TACKLE,
            MOVE_SPLASH,
            MOVE_FLAIL,
            MOVE_TACKLE
        },
        .cool = 30,
        .beauty = 30,
        .cute = 160,
        .smart = 50,
        .tough = 160,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_LACEY] = {
        .species = SPECIES_FROSLASS,
        .nickname = _("LUNONE"),
        .trainerName = _("LACEY"),
        .trainerGfxId = EVENT_OBJ_GFX_WOMAN_1,
        .aiChecks = 0x80002FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_EXPLOSION,
            MOVE_FUTURE_SIGHT,
            MOVE_PSYCHIC,
            MOVE_CONFUSION
        },
        .cool = 50,
        .beauty = 70,
        .cute = 60,
        .smart = 70,
        .tough = 50,
        .sheen = 210,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CORBIN] = {
        .species = SPECIES_ABSOL,
        .nickname = _("ABSO"),
        .trainerName = _("CORBIN"),
        .trainerGfxId = EVENT_OBJ_GFX_MANIAC,
        .aiChecks = 0x80001FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_PERISH_SONG,
            MOVE_HAIL,
            MOVE_HYPER_BEAM,
            MOVE_SLASH
        },
        .cool = 95,
        .beauty = 80,
        .cute = 85,
        .smart = 35,
        .tough = 35,
        .sheen = 220,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_GRACIE] = {
        .species = SPECIES_BEARTIC,
        .nickname = _("EGGSOR"),
        .trainerName = _("GRACIE"),
        .trainerGfxId = EVENT_OBJ_GFX_PICNICKER,
        .aiChecks = 0xC000FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_STOMP,
            MOVE_HYPNOSIS,
            MOVE_EGG_BOMB,
            MOVE_SKILL_SWAP
        },
        .cool = 40,
        .beauty = 50,
        .cute = 60,
        .smart = 100,
        .tough = 80,
        .sheen = 200,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_COLTIN] = {
        .species = SPECIES_CUBONE,
        .nickname = _("CUBIN"),
        .trainerName = _("COLTIN"),
        .trainerGfxId = EVENT_OBJ_GFX_MAN_4, 
        .aiChecks = 0x82000FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_BONE_CLUB,
            MOVE_BONEMERANG,
            MOVE_BONE_RUSH,
            MOVE_GROWL
        },
        .cool = 40,
        .beauty = 35,
        .cute = 85,
        .smart = 35,
        .tough = 100,
        .sheen = 210,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ELLIE] = {
        .species = SPECIES_HITMONLEE,
        .nickname = _("HITMON"),
        .trainerName = _("ELLIE"),
        .trainerGfxId = EVENT_OBJ_GFX_EXPERT_F,
        .aiChecks = 0x21000FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_REVERSAL,
            MOVE_REVENGE,
            MOVE_FOCUS_ENERGY,
            MOVE_MEGA_KICK
        },
        .cool = 85,
        .beauty = 30,
        .cute = 25,
        .smart = 50,
        .tough = 100,
        .sheen = 220,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MARCUS] = {
        .species = SPECIES_SQUIRTLE,
        .nickname = _("SURTLE"),
        .trainerName = _("MARCUS"),
        .trainerGfxId = EVENT_OBJ_GFX_SAILOR,
        .aiChecks = 0x20800FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_TAIL_WHIP,
            MOVE_BUBBLE,
            MOVE_FOCUS_PUNCH,
            MOVE_WITHDRAW
        },
        .cool = 30,
        .beauty = 35,
        .cute = 100,
        .smart = 40,
        .tough = 95,
        .sheen = 230,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KIARA] = {
        .species = SPECIES_TANGROWTH,
        .nickname = _("KHANKAN"),
        .trainerName = _("KIARA"),
        .trainerGfxId = EVENT_OBJ_GFX_GIRL_3,
        .aiChecks = 0x80400FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_MEGA_PUNCH,
            MOVE_RAGE,
            MOVE_FOCUS_PUNCH,
            MOVE_TAIL_WHIP
        },
        .cool = 100,
        .beauty = 50,
        .cute = 30,
        .smart = 50,
        .tough = 100,
        .sheen = 240,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_BRYCE] = {
        .species = SPECIES_JOLTIK,
        .nickname = _("PINOC"),
        .trainerName = _("BRYCE"),
        .trainerGfxId = EVENT_OBJ_GFX_BUG_CATCHER,
        .aiChecks = 0x10200FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_EXPLOSION,
            MOVE_SPIKES,
            MOVE_LIGHT_SCREEN,
            MOVE_GIGA_DRAIN
        },
        .cool = 80,
        .beauty = 80,
        .cute = 80,
        .smart = 80,
        .tough = 80,
        .sheen = 250,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JAMIE] = {
        .species = SPECIES_AUDINO,
        .nickname = _("DILTOT"),
        .trainerName = _("JAMIE"),
        .trainerGfxId = EVENT_OBJ_GFX_WOMAN_5,
        .aiChecks = 0x20100FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SPITE,
            MOVE_YAWN,
            MOVE_DEFENSE_CURL,
            MOVE_TAKE_DOWN
        },
        .cool = 40,
        .beauty = 35,
        .cute = 100,
        .smart = 40,
        .tough = 110,
        .sheen = 240,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JORGE] = {
        .species = SPECIES_HOUNDOOM,
        .nickname = _("DOOMOND"),
        .trainerName = _("JORGE"),
        .trainerGfxId = EVENT_OBJ_GFX_GENTLEMAN,
        .aiChecks = 0x8080FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_ROAR,
            MOVE_FLAMETHROWER,
            MOVE_FAINT_ATTACK,
            MOVE_SUNNY_DAY
        },
        .cool = 100,
        .beauty = 100,
        .cute = 30,
        .smart = 25,
        .tough = 80,
        .sheen = 230,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_DEVON] = {
        .species = SPECIES_BONDED_MEWTWO_Y,
        .nickname = _("MILKAN"),
        .trainerName = _("DEVON"),
        .trainerGfxId = EVENT_OBJ_GFX_POKEFAN_M,
        .aiChecks = 0x40040FFF,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_MILK_DRINK,
            MOVE_HEAL_BELL,
            MOVE_DEFENSE_CURL,
            MOVE_BLIZZARD
        },
        .cool = 50,
        .beauty = 110,
        .cute = 100,
        .smart = 35,
        .tough = 40,
        .sheen = 220,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JUSTINA] = {
        .species = SPECIES_GYARADOS,
        .nickname = _("RADOS"),
        .trainerName = _("JUSTINA"),
        .trainerGfxId = EVENT_OBJ_GFX_PICNICKER,
        .aiChecks = 0x84000FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_HYPER_BEAM,
            MOVE_HYDRO_PUMP,
            MOVE_RAIN_DANCE,
            MOVE_BITE
        },
        .cool = 160,
        .beauty = 200,
        .cute = 20,
        .smart = 40,
        .tough = 160,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_RALPH] = {
        .species = SPECIES_BUNEARY,
        .nickname = _("LOUDERD"),
        .trainerName = _("RALPH"),
        .trainerGfxId = EVENT_OBJ_GFX_EXPERT_M,
        .aiChecks = 0x82000FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_HYPER_VOICE,
            MOVE_STOMP,
            MOVE_ROAR,
            MOVE_HOWL
        },
        .cool = 170,
        .beauty = 50,
        .cute = 55,
        .smart = 150,
        .tough = 160,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ROSA] = {
        .species = SPECIES_SKITTY,
        .nickname = _("SITTY"),
        .trainerName = _("ROSA"),
        .trainerGfxId = EVENT_OBJ_GFX_GIRL_1,
        .aiChecks = 0x81000FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_ATTRACT,
            MOVE_ASSIST,
            MOVE_FAINT_ATTACK,
            MOVE_TAIL_WHIP
        },
        .cool = 40,
        .beauty = 200,
        .cute = 150,
        .smart = 185,
        .tough = 60,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KEATON] = {
        .species = SPECIES_TALONFLAME,
        .nickname = _("SLING"),
        .trainerName = _("KEATON"),
        .trainerGfxId = EVENT_OBJ_GFX_LITTLE_BOY,
        .aiChecks = 0x80800FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_COVET,
            MOVE_COUNTER,
            MOVE_ENCORE,
            MOVE_SLACK_OFF
        },
        .cool = 85,
        .beauty = 85,
        .cute = 170,
        .smart = 110,
        .tough = 150,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MAYRA] = {
        .species = SPECIES_ALTARIA,
        .nickname = _("TARIA"),
        .trainerName = _("MAYRA"),
        .trainerGfxId = EVENT_OBJ_GFX_POKEFAN_F,
        .aiChecks = 0x80400FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_DRAGON_DANCE,
            MOVE_HYPER_BEAM,
            MOVE_PERISH_SONG,
            MOVE_SAFEGUARD
        },
        .cool = 170,
        .beauty = 150,
        .cute = 30,
        .smart = 30,
        .tough = 90,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_LAMAR] = {
        .species = SPECIES_KIRLIA,
        .nickname = _("LIRKI"),
        .trainerName = _("LAMAR"),
        .trainerGfxId = EVENT_OBJ_GFX_RICH_BOY,
        .aiChecks = 0x80200FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SHOCK_WAVE,
            MOVE_SHADOW_BALL,
            MOVE_SKILL_SWAP,
            MOVE_RETURN
        },
        .cool = 230,
        .beauty = 60,
        .cute = 60,
        .smart = 230,
        .tough = 80,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_AUBREY] = {
        .species = SPECIES_TREVENANT,
        .nickname = _("BLOSSOM"),
        .trainerName = _("AUBREY"),
        .trainerGfxId = EVENT_OBJ_GFX_WOMAN_4,
        .aiChecks = 0x80100FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_PETAL_DANCE,
            MOVE_SWEET_SCENT,
            MOVE_STUN_SPORE,
            MOVE_FLASH
        },
        .cool = 35,
        .beauty = 200,
        .cute = 150,
        .smart = 130,
        .tough = 40,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_NIGEL] = {
        .species = SPECIES_SABLEYE,
        .nickname = _("EYESAB"),
        .trainerName = _("NIGEL"),
        .trainerGfxId = EVENT_OBJ_GFX_CAMPER,
        .aiChecks = 0x80080FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_MEAN_LOOK,
            MOVE_FAINT_ATTACK,
            MOVE_KNOCK_OFF,
            MOVE_CONFUSE_RAY
        },
        .cool = 25,
        .beauty = 35,
        .cute = 230,
        .smart = 150,
        .tough = 160,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CAMILLE] = {
        .species = SPECIES_TOGEKISS,
        .nickname = _("UTAN"),
        .trainerName = _("CAMILLE"),
        .trainerGfxId = EVENT_OBJ_GFX_LASS,
        .aiChecks = 0x80040FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_NIGHT_SHADE,
            MOVE_FUTURE_SIGHT,
            MOVE_CONFUSE_RAY,
            MOVE_PSYCHIC
        },
        .cool = 35,
        .beauty = 35,
        .cute = 150,
        .smart = 130,
        .tough = 170,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_DEON] = {
        .species = SPECIES_SHARPEDO,
        .nickname = _("PEDOS"),
        .trainerName = _("DEON"),
        .trainerGfxId = EVENT_OBJ_GFX_SCHOOL_KID_M,
        .aiChecks = 0x80020FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_AGILITY,
            MOVE_SWAGGER,
            MOVE_TAUNT,
            MOVE_TAKE_DOWN
        },
        .cool = 140,
        .beauty = 70,
        .cute = 140,
        .smart = 75,
        .tough = 100,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JANELLE] = {
        .species = SPECIES_CHANDELURE,
        .nickname = _("LUVIS"),
        .trainerName = _("JANELLE"),
        .trainerGfxId = EVENT_OBJ_GFX_GIRL_2,
        .aiChecks = 0x80010FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SWEET_KISS,
            MOVE_ATTRACT,
            MOVE_TAKE_DOWN,
            MOVE_CHARM
        },
        .cool = 50,
        .beauty = 100,
        .cute = 220,
        .smart = 40,
        .tough = 190,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_HEATH] = {
        .species = SPECIES_HERACROSS,
        .nickname = _("HEROSS"),
        .trainerName = _("HEATH"),
        .trainerGfxId = EVENT_OBJ_GFX_MAN_3,
        .aiChecks = 0x80008FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_STRENGTH,
            MOVE_ENDURE,
            MOVE_REVERSAL,
            MOVE_ROCK_TOMB
        },
        .cool = 170,
        .beauty = 70,
        .cute = 110,
        .smart = 240,
        .tough = 140,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SASHA] = {
        .species = SPECIES_SCRAFTY,
        .nickname = _("RODLECT"),
        .trainerName = _("SASHA"),
        .trainerGfxId = EVENT_OBJ_GFX_TWIN,
        .aiChecks = 0x80004FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_EXPLOSION,
            MOVE_LIGHT_SCREEN,
            MOVE_SWIFT,
            MOVE_FLASH
        },
        .cool = 200,
        .beauty = 200,
        .cute = 30,
        .smart = 35,
        .tough = 50,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_FRANKIE] = {
        .species = SPECIES_SEWADDLE,
        .nickname = _("CHUPY"),
        .trainerName = _("FRANKIE"),
        .trainerGfxId = EVENT_OBJ_GFX_YOUNGSTER,
        .aiChecks = 0x80002FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SWEET_KISS,
            MOVE_ATTRACT,
            MOVE_REST,
            MOVE_TAIL_WHIP
        },
        .cool = 25,
        .beauty = 150,
        .cute = 180,
        .smart = 115,
        .tough = 120,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_HELEN] = {
        .species = SPECIES_FLOETTE,
        .nickname = _("WOBET"),
        .trainerName = _("HELEN"),
        .trainerGfxId = EVENT_OBJ_GFX_WOMAN_1,
        .aiChecks = 0x80001FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_COUNTER,
            MOVE_MIRROR_COAT,
            MOVE_SAFEGUARD,
            MOVE_DESTINY_BOND
        },
        .cool = 60,
        .beauty = 230,
        .cute = 50,
        .smart = 220,
        .tough = 210,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CAMILE] = {
        .species = SPECIES_GENGAR,
        .nickname = _("GAREN"),
        .trainerName = _("CAMILE"),
        .trainerGfxId = EVENT_OBJ_GFX_HEX_MANIAC,
        .aiChecks = 0xC000FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_DESTINY_BOND,
            MOVE_CONFUSE_RAY,
            MOVE_LICK,
            MOVE_SLUDGE_BOMB
        },
        .cool = 200,
        .beauty = 100,
        .cute = 50,
        .smart = 80,
        .tough = 180,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MARTIN] = {
        .species = SPECIES_PORYGON,
        .nickname = _("GONPOR"),
        .trainerName = _("MARTIN"),
        .trainerGfxId = EVENT_OBJ_GFX_SCIENTIST_1,
        .aiChecks = 0x82000FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_CONVERSION_2,
            MOVE_CONVERSION,
            MOVE_RETURN,
            MOVE_RECYCLE
        },
        .cool = 130,
        .beauty = 130,
        .cute = 130,
        .smart = 130,
        .tough = 130,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SERGIO] = {
        .species = SPECIES_GOODRA,
        .nickname = _("DRITE"),
        .trainerName = _("SERGIO"),
        .trainerGfxId = EVENT_OBJ_GFX_BOY_1,
        .aiChecks = 0x21000FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_OUTRAGE,
            MOVE_SLAM,
            MOVE_TWISTER,
            MOVE_EARTHQUAKE
        },
        .cool = 150,
        .beauty = 140,
        .cute = 50,
        .smart = 120,
        .tough = 150,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KAILEY] = {
        .species = SPECIES_TYRUNT,
        .nickname = _("MEOWY"),
        .trainerName = _("KAILEY"),
        .trainerGfxId = EVENT_OBJ_GFX_TWIN,
        .aiChecks = 0x20800FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_GROWL,
            MOVE_TAUNT,
            MOVE_PAY_DAY,
            MOVE_BITE
        },
        .cool = 125,
        .beauty = 110,
        .cute = 180,
        .smart = 170,
        .tough = 80,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_PERLA] = {
        .species = SPECIES_LARVESTA,
        .nickname = _("NYX"),
        .trainerName = _("PERLA"),
        .trainerGfxId = EVENT_OBJ_GFX_BEAUTY,
        .aiChecks = 0x80400FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_PERISH_SONG,
            MOVE_MEAN_LOOK,
            MOVE_LOVELY_KISS,
            MOVE_FAKE_TEARS
        },
        .cool = 100,
        .beauty = 150,
        .cute = 100,
        .smart = 150,
        .tough = 120,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CLARA] = {
        .species = SPECIES_TOGEPI,
        .nickname = _("GEPITO"),
        .trainerName = _("CLARA"),
        .trainerGfxId = EVENT_OBJ_GFX_WOMAN_2,
        .aiChecks = 0x10200FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_GROWL,
            MOVE_YAWN,
            MOVE_ENCORE,
            MOVE_FOLLOW_ME
        },
        .cool = 80,
        .beauty = 120,
        .cute = 200,
        .smart = 120,
        .tough = 80,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JAKOB] = {
        .species = SPECIES_ESPEON,
        .nickname = _("SPEON"),
        .trainerName = _("JAKOB"),
        .trainerGfxId = EVENT_OBJ_GFX_PSYCHIC_M,
        .aiChecks = 0x20100FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SWIFT,
            MOVE_QUICK_ATTACK,
            MOVE_MORNING_SUN,
            MOVE_TAIL_WHIP
        },
        .cool = 180,
        .beauty = 150,
        .cute = 100,
        .smart = 80,
        .tough = 150,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_TREY] = {
        .species = SPECIES_GLACEON,
        .nickname = _("SLOWGO"),
        .trainerName = _("TREY"),
        .trainerGfxId = EVENT_OBJ_GFX_SAILOR,
        .aiChecks = 0x8080FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_FACADE,
            MOVE_CURSE,
            MOVE_YAWN,
            MOVE_FOCUS_PUNCH
        },
        .cool = 100,
        .beauty = 80,
        .cute = 200,
        .smart = 110,
        .tough = 170,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_LANE] = {
        .species = SPECIES_URSARING,
        .nickname = _("URSING"),
        .trainerName = _("LANE"),
        .trainerGfxId = EVENT_OBJ_GFX_BLACK_BELT,
        .aiChecks = 0x40040FFF,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_THRASH,
            MOVE_AERIAL_ACE,
            MOVE_FAKE_TEARS,
            MOVE_LEER
        },
        .cool = 180,
        .beauty = 140,
        .cute = 30,
        .smart = 80,
        .tough = 190,
        .sheen = 255,
        .unk2C = {0},
        .personality = 0,
        .otId = 0xFFFF
    }
};


const u8 gPostgameContestOpponentFilter[] =
{
    [CONTEST_OPPONENT_JIMMY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_EDITH] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_EVAN] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_KELSEY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MADISON] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_RAYMOND] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_GRANT] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_PAIGE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ALEC] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_SYDNEY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MORRIS] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MARIAH] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_RUSSELL] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MELANIE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CHANCE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_AGATHA] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_BEAU] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_KAY] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_CALE] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_CAITLIN] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_COLBY] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_KYLIE] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_LIAM] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_MILO] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_KARINA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_BOBBY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CLAIRE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_WILLIE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CASSIDY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MORGAN] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_SUMMER] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MILES] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_AUDREY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_AVERY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ARIANA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ASHTON] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_SANDRA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CARSON] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_KATRINA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_LUKE] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_RAUL] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_JADA] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_ZEEK] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_DIEGO] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_ALIYAH] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_NATALIA] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_DEVIN] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_TYLOR] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_RONNIE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CLAUDIA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ELIAS] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_JADE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_FRANCIS] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ALISHA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_SAUL] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_FELICIA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_EMILIO] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_KARLA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_DARRYL] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_SELENA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_NOEL] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_LACEY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CORBIN] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_GRACIE] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_COLTIN] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_ELLIE] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_MARCUS] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_KIARA] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_BRYCE] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_JAMIE] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_JORGE] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_DEVON] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_JUSTINA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_RALPH] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ROSA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_KEATON] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MAYRA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_LAMAR] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_AUBREY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_NIGEL] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CAMILLE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_DEON] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_JANELLE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_HEATH] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_SASHA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_FRANKIE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_HELEN] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CAMILE] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_MARTIN] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_SERGIO] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_KAILEY] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_PERLA] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_CLARA] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_JAKOB] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_TREY] = CONTEST_FILTER_ONLY_POSTGAME,
    [CONTEST_OPPONENT_LANE] = CONTEST_FILTER_ONLY_POSTGAME
};
