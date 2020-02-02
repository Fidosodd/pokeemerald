const u16 gSpeciesIdToCryId[] =
{
    [SPECIES_TREECKO - 252] = 273,
    [SPECIES_GROVYLE - 252] = 274,
    [SPECIES_SCEPTILE - 252] = 275,
    [SPECIES_TORCHIC - 252] = 270,
    [SPECIES_COMBUSKEN - 252] = 271,
    [SPECIES_BLAZIKEN - 252] = 272,
    [SPECIES_MUDKIP - 252] = 276,
    [SPECIES_MARSHTOMP - 252] = 277,
    [SPECIES_SWAMPERT - 252] = 278,
    [SPECIES_POOCHYENA - 252] = 359,
    [SPECIES_MIGHTYENA - 252] = 360,
    [SPECIES_ZIGZAGOON - 252] = 378,
    [SPECIES_LINOONE - 252] = 375,
    [SPECIES_PETILIL - 252] = 290,
    [SPECIES_LILLIGANT - 252] = 291,
    [SPECIES_COTTONEE - 252] = 292,
    [SPECIES_WHIMSICOTT - 252] = 293,
    [SPECIES_SOLOSIS - 252] = 294,
    [SPECIES_DUOSION - 252] = 283,
    [SPECIES_REUNICLUS - 252] = 284,
    [SPECIES_PANCHAM - 252] = 285,
    [SPECIES_PANGORO - 252] = 286,
    [SPECIES_MIENFOO - 252] = 287,
    [SPECIES_MIENSHAO - 252] = 288,
    [SPECIES_AMAURA - 252] = 301,
    [SPECIES_AURORUS - 252] = 302,
    [SPECIES_DIALGA - 252] = 303,
    [SPECIES_SHELMET - 252] = 266,
    [SPECIES_ACCELGOR - 252] = 267,
    [SPECIES_SHROOMISH - 252] = 374,
    [SPECIES_BRELOOM - 252] = 373,
    [SPECIES_PALKIA - 252] = 269,
    [SPECIES_WINGULL - 252] = 280,
    [SPECIES_PELIPPER - 252] = 279,
    [SPECIES_RIOLU - 252] = 310,
    [SPECIES_LUCARIO - 252] = 311,
    [SPECIES_WAILMER - 252] = 377,
    [SPECIES_WAILORD - 252] = 381,
    [SPECIES_SKITTY - 252] = 312,
    [SPECIES_DELCATTY - 252] = 313,
    [SPECIES_ROGGENROLA - 252] = 251,
    [SPECIES_BOLDORE - 252] = 329,
    [SPECIES_GIGALITH - 252] = 330,
    [SPECIES_SANDSHREW_A - 252] = 306,
    [SPECIES_SANDSLASH_A - 252] = 253,
    [SPECIES_SABLEYE - 252] = 362,
    [SPECIES_LITWICK - 252] = 318,
    [SPECIES_LAMPENT - 252] = 319,
    [SPECIES_CHANDELURE - 252] = 368,
    [SPECIES_CORPHISH - 252] = 320,
    [SPECIES_CRAWDAUNT - 252] = 321,
    [SPECIES_FEEBAS - 252] = 333,
    [SPECIES_MILOTIC - 252] = 334,
    [SPECIES_CARVANHA - 252] = 289,
    [SPECIES_SHARPEDO - 252] = 260,
    [SPECIES_TRAPINCH - 252] = 324,
    [SPECIES_VIBRAVA - 252] = 325,
    [SPECIES_FLYGON - 252] = 326,
    [SPECIES_DWEBBLE - 252] = 304,
    [SPECIES_CRUSTLE - 252] = 305,
    [SPECIES_ELECTRIKE - 252] = 254,
    [SPECIES_MANECTRIC - 252] = 255,
    [SPECIES_MANETHUNDR - 252] = 316,
    [SPECIES_PORYGONZ - 252] = 317,
    [SPECIES_TYNAMO - 252] = 338,
    [SPECIES_EELEKTRIK - 252] = 339,
    [SPECIES_EELEKTROSS - 252] = 340,
    [SPECIES_CACNEA - 252] = 327,
    [SPECIES_CACTURNE - 252] = 328,
    [SPECIES_SNORUNT - 252] = 383,
    [SPECIES_GLALIE - 252] = 307,
    [SPECIES_FROSLASS - 252] = 331,
    [SPECIES_TIRTOUGA - 252] = 332,
    [SPECIES_CARRACOSTA - 252] = 262,
    [SPECIES_SPOINK - 252] = 322,
    [SPECIES_GRUMPIG - 252] = 323,
    [SPECIES_SALANDIT - 252] = 308,
    [SPECIES_SALAZZLE - 252] = 309,
    [SPECIES_MAWILE - 252] = 363,
    [SPECIES_MEDITITE - 252] = 336,
    [SPECIES_MEDICHAM - 252] = 337,
    [SPECIES_SWABLU - 252] = 263,
    [SPECIES_ALTARIA - 252] = 264,
    [SPECIES_TIMBURR - 252] = 258,
    [SPECIES_GURDURR - 252] = 256,
    [SPECIES_CONKELDURR - 252] = 361,
    [SPECIES_GIRATINA - 252] = 252,
    [SPECIES_FLETCHLING - 252] = 298,
    [SPECIES_FLETCHINDR - 252] = 299,
    [SPECIES_TALONFLAME - 252] = 300,
    [SPECIES_GIRATINA_ORIGIN - 252] = 314,
    [SPECIES_BONDED_SERPERIOR - 252] = 315,
    [SPECIES_KYUREM - 252] = 376,
    [SPECIES_MELOETTA - 252] = 382,
    [SPECIES_BUNEARY - 252] = 380,
    [SPECIES_LOPUNNY - 252] = 379,
    [SPECIES_AZELF - 252] = 341,
    [SPECIES_MESPRIT - 252] = 342,
    [SPECIES_UXIE - 252] = 343,
    [SPECIES_ABSOL - 252] = 335,
    [SPECIES_SHUPPET - 252] = 282,
    [SPECIES_BANETTE - 252] = 281,
    [SPECIES_BANSHEETTE - 252] = 259,
    [SPECIES_ABSOLOM - 252] = 261,
    [SPECIES_RELICANTH - 252] = 367,
    [SPECIES_ARON - 252] = 364,
    [SPECIES_LAIRON - 252] = 365,
    [SPECIES_AGGRON - 252] = 366,
    [SPECIES_ALOLAN_MAROWAK - 252] = 356,
    [SPECIES_RHYPERIOR - 252] = 357,
    [SPECIES_GALLADE - 252] = 358,
    [SPECIES_LILEEP - 252] = 344,
    [SPECIES_CRADILY - 252] = 345,
    [SPECIES_ANORITH - 252] = 346,
    [SPECIES_ARMALDO - 252] = 347,
    [SPECIES_RALTS - 252] = 295,
    [SPECIES_KIRLIA - 252] = 296,
    [SPECIES_GARDEVOIR - 252] = 297,
    [SPECIES_BAGON - 252] = 351,
    [SPECIES_SHELGON - 252] = 352,
    [SPECIES_SALAMENCE - 252] = 372,
    [SPECIES_BELDUM - 252] = 348,
    [SPECIES_METANG - 252] = 349,
    [SPECIES_METAGROSS - 252] = 350,
    [SPECIES_ROCKRUFF - 252] = 353,
    [SPECIES_LYCANROC - 252] = 354,
    [SPECIES_BONDED_AERODACTYL - 252] = 355,
    [SPECIES_KYOGRE - 252] = 370,
    [SPECIES_GROUDON - 252] = 369,
    [SPECIES_RAYQUAZA - 252] = 371,
    [SPECIES_KYUREM_WHITE - 252] = 257,
    [SPECIES_KYUREM_BLACK - 252] = 384,
    [SPECIES_BONDED_AGGRON - 252] = 385,
    [SPECIES_BONDED_ALAKAZAM - 252] = 386,
    [SPECIES_ARCEUS - 252] = 387,
};
