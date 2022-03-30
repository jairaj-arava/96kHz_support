/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2022 Intel Corporation. All rights reserved.
 *
 */

#include <sof/audio/src/src.h>
#include <stdint.h>

const int32_t src_int32_32_21_4535_5000_fir[3072] = {
	-74011,
	97109,
	-111157,
	109308,
	-83553,
	25003,
	75713,
	-227910,
	440204,
	-719755,
	1071445,
	-1497009,
	1994170,
	-2555816,
	3169274,
	-3815737,
	4469879,
	-5099722,
	5666784,
	-6126536,
	6429188,
	-6520806,
	6344746,
	-5843375,
	4960033,
	-3641173,
	1838604,
	488246,
	-3370150,
	6826080,
	-10861482,
	15466931,
	-20617248,
	26271172,
	-32371644,
	38846781,
	-45611591,
	52570516,
	-59620922,
	66657822,
	-73580376,
	80301496,
	-86763731,
	92969904,
	-99054271,
	105489319,
	-113907501,
	132913187,
	2046951030,
	66586897,
	-81897614,
	85396281,
	-85249252,
	83168224,
	-79789343,
	75449530,
	-70379253,
	64764616,
	-58770028,
	52546526,
	-46234206,
	39962117,
	-33847102,
	27992322,
	-22485868,
	17399682,
	-12788906,
	8691725,
	-5129718,
	2108687,
	380068,
	-2358117,
	3857959,
	-4920902,
	5594818,
	-5931894,
	5986455,
	-5812931,
	5464042,
	-4989249,
	4433511,
	-3836351,
	3231262,
	-2645413,
	2099658,
	-1608789,
	1182013,
	-823584,
	533563,
	-308632,
	142934,
	-28889,
	-42055,
	78751,
	-89801,
	83109,
	-82031,
	110583,
	-131977,
	139473,
	-125028,
	79532,
	6825,
	-144053,
	341734,
	-608281,
	950111,
	-1370754,
	1869944,
	-2442737,
	3078705,
	-3761257,
	4467145,
	-5166188,
	5821285,
	-6388721,
	6818805,
	-7056850,
	7044478,
	-6721227,
	6026433,
	-4901313,
	3291175,
	-1147691,
	-1568898,
	4887718,
	-8825478,
	13385054,
	-18554577,
	24307124,
	-30601144,
	37381758,
	-44583116,
	52132111,
	-59953932,
	67980420,
	-76163149,
	84495490,
	-93053673,
	102083329,
	-112211695,
	125083390,
	-145938307,
	202397295,
	2040970831,
	3664968,
	-50168998,
	64984863,
	-70925537,
	72772048,
	-72198737,
	69988367,
	-66593283,
	62322114,
	-57412781,
	52063847,
	-46448478,
	40720499,
	-35016673,
	29457193,
	-24145420,
	19167420,
	-14591633,
	10468836,
	-6832503,
	3699574,
	-1071638,
	-1063526,
	2730106,
	-3962203,
	4801629,
	-5295673,
	5494900,
	-5451067,
	5215236,
	-4836119,
	4358710,
	-3823234,
	3264399,
	-2710979,
	2185679,
	-1705274,
	1280969,
	-918949,
	621055,
	-385550,
	207923,
	-81680,
	-899,
	48083,
	-68111,
	68721,
	-89542,
	123393,
	-152061,
	168969,
	-166107,
	134220,
	-63137,
	-57764,
	238960,
	-490057,
	818963,
	-1230984,
	1727881,
	-2306938,
	2960075,
	-3673077,
	4424981,
	-5187678,
	5925774,
	-6596751,
	7151448,
	-7534892,
	7687467,
	-7546393,
	7047509,
	-6127277,
	4724952,
	-2784829,
	258470,
	2893204,
	-6698073,
	11171358,
	-16314680,
	22115787,
	-28549119,
	35577440,
	-43154843,
	51231637,
	-59761977,
	68715913,
	-78099174,
	87987989,
	-98596124,
	110419455,
	-124596099,
	143998292,
	-177721602,
	274769952,
	2029041918,
	-55630001,
	-18972267,
	44434573,
	-56214360,
	61878998,
	-64064685,
	63971564,
	-62260737,
	59356226,
	-55565029,
	51130151,
	-46255503,
	41117823,
	-35872254,
	30654733,
	-25582813,
	20755805,
	-16254746,
	12142479,
	-8464007,
	5247200,
	-2503869,
	231199,
	1586523,
	-2975929,
	3972443,
	-4618074,
	4959208,
	-5044504,
	4922931,
	-4642038,
	4246475,
	-3776812,
	3268674,
	-2752181,
	2251684,
	-1785785,
	1367579,
	-1005115,
	701987,
	-458043,
	270140,
	-132922,
	39556,
	17576,
	-46287,
	54086,
	-96458,
	135405,
	-171208,
	197515,
	-206413,
	188580,
	-133567,
	30223,
	132742,
	-366052,
	679050,
	-1078787,
	1569052,
	-2149393,
	2814163,
	-3551660,
	4343404,
	-5163610,
	5978908,
	-6748348,
	7423729,
	-7950269,
	8267618,
	-8311214,
	8013938,
	-7308027,
	6127179,
	-4408766,
	2096050,
	859706,
	-4497366,
	8844425,
	-13916056,
	19714875,
	-26231652,
	33447275,
	-41336394,
	49873478,
	-59042526,
	68852813,
	-79365453,
	90741163,
	-103333826,
	117894784,
	-136086640,
	162055682,
	-208982609,
	349740542,
	2011227067,
	-111100405,
	11453258,
	23922420,
	-41248165,
	50589676,
	-55463820,
	57456954,
	-57424283,
	55897193,
	-53246760,
	49756983,
	-45659921,
	41153165,
	-36408539,
	31576297,
	-26786985,
	22152161,
	-17764648,
	13698721,
	-10010452,
	6738333,
	-3904239,
	1514735,
	437322,
	-1970907,
	3114783,
	-3905341,
	4384416,
	-4597161,
	4590050,
	-4409063,
	4098123,
	-3697801,
	3244328,
	-2768902,
	2297305,
	-1849791,
	1441227,
	-1081440,
	775735,
	-525532,
	329079,
	-182187,
	78966,
	-12502,
	-24527,
	39341,
	-102697,
	146488,
	-189227,
	224836,
	-245571,
	242120,
	-203842,
	119147,
	23978,
	-237295,
	531511,
	-915375,
	1394686,
	-1971275,
	2641994,
	-3397769,
	4222779,
	-5093800,
	5979784,
	-6841714,
	7632770,
	-8298832,
	8779343,
	-9008507,
	8916812,
	-8432843,
	7485290,
	-6005116,
	3927739,
	-1195145,
	-2242225,
	6423961,
	-11378725,
	17124064,
	-23667271,
	31007667,
	-39140885,
	48066071,
	-57797653,
	68384779,
	-79944637,
	92723252,
	-107215873,
	124432156,
	-146568161,
	179080576,
	-239442020,
	426998631,
	1987619947,
	-162574512,
	40880997,
	3621533,
	-26159480,
	39006775,
	-46475947,
	50506100,
	-52130573,
	51979288,
	-50481904,
	47959628,
	-44669847,
	40828766,
	-36623047,
	32215712,
	-27748988,
	23345574,
	-19109171,
	15124753,
	-11458898,
	8160325,
	-5260727,
	2775939,
	-707407,
	-956066,
	2236365,
	-3163981,
	3775861,
	-4113286,
	4219845,
	-4139567,
	3915277,
	-3587198,
	3191850,
	-2761242,
	2322354,
	-1896914,
	1501415,
	-1147372,
	841741,
	-587494,
	384268,
	-229073,
	116999,
	-41893,
	-3024,
	24622,
	-108178,
	156517,
	-205927,
	250662,
	-283210,
	294349,
	-273333,
	208229,
	-86396,
	-104871,
	377567,
	-742073,
	1206163,
	-1773953,
	2444835,
	-3212462,
	4063822,
	-4978467,
	5927955,
	-6875550,
	7776223,
	-8576994,
	9217618,
	-9631629,
	9747720,
	-9491422,
	8787020,
	-7559637,
	5737376,
	-3253413,
	47877,
	3930625,
	-8724061,
	14364836,
	-20876803,
	28277859,
	-36584842,
	45821857,
	-56034060,
	67310716,
	-79825231,
	93908908,
	-110198222,
	129961492,
	-155932249,
	194902841,
	-268817876,
	506215637,
	1958344534,
	-209907163,
	69098449,
	-16300166,
	-11079803,
	27234176,
	-37183314,
	43183734,
	-46429806,
	47640486,
	-47298087,
	45756955,
	-43296779,
	40149989,
	-36516122,
	32569309,
	-28462046,
	24326979,
	-20277675,
	16408988,
	-12797350,
	9501220,
	-6561777,
	4003940,
	-1837684,
	59648,
	1345028,
	-2400700,
	3139136,
	-3597411,
	3815871,
	-3836228,
	3699847,
	-3446263,
	3111973,
	-2729513,
	2326830,
	-1926925,
	1547772,
	-1202459,
	899528,
	-643460,
	435278,
	-273205,
	153345,
	-70349,
	18037,
	10061,
	-112827,
	165373,
	-221130,
	274732,
	-318966,
	344779,
	-341409,
	296678,
	-197421,
	30088,
	218508,
	-560306,
	1005003,
	-1558978,
	2224188,
	-2997084,
	3867592,
	-4818234,
	5823435,
	-6849070,
	7852304,
	-8781758,
	9578024,
	-10174544,
	10498823,
	-10473974,
	10020515,
	-9058356,
	7508885,
	-5297009,
	2353027,
	1385859,
	-5974616,
	11460301,
	-17883208,
	25279777,
	-33688077,
	43157209,
	-53763049,
	65634833,
	-79001750,
	94279483,
	-112244156,
	134420494,
	-164078268,
	209358677,
	-296827486,
	587046641,
	1923554334,
	-252980293,
	95908404,
	-35681214,
	3861477,
	15376053,
	-27669887,
	35557160,
	-40375262,
	42922103,
	-43726365,
	43171221,
	-41555469,
	39125252,
	-36090911,
	32635939,
	-28921607,
	25089221,
	-21261130,
	17541157,
	-14014856,
	10749852,
	-7796402,
	5188238,
	-2943731,
	1067344,
	448665,
	-1622343,
	2480034,
	-3054309,
	3381946,
	-3501994,
	3454012,
	-3276513,
	3005660,
	-2674237,
	2310909,
	-1939751,
	1580051,
	-1246352,
	948692,
	-693020,
	481721,
	-314237,
	187710,
	-97636,
	38476,
	-4215,
	-116576,
	172947,
	-234665,
	296795,
	-352487,
	392930,
	-407442,
	383698,
	-308118,
	166415,
	55686,
	-371594,
	792855,
	-1328076,
	1981778,
	-2753257,
	3635486,
	-4614125,
	5666703,
	-6762017,
	7859807,
	-8910751,
	9856800,
	-10631877,
	11162928,
	-11371306,
	11174437,
	-10487698,
	9226414,
	-7307851,
	4653048,
	-1188300,
	-3153931,
	8435004,
	-14711391,
	22037863,
	-30473539,
	40092315,
	-51000470,
	63366648,
	-77474818,
	93823255,
	-113324682,
	137755283,
	-170914329,
	222292080,
	-323189391,
	669132306,
	1883431425,
	-291703269,
	121130020,
	-54367802,
	18538138,
	3535980,
	-18020606,
	27695656,
	-34022812,
	37868412,
	-39800927,
	40227854,
	-39463776,
	37765932,
	-35353318,
	32416968,
	-29125360,
	25627110,
	-22052184,
	18512391,
	-15101594,
	11895941,
	-8954269,
	6318785,
	-4016050,
	2058269,
	-444846,
	-835836,
	1804498,
	-2488955,
	2922119,
	-3140059,
	3180198,
	-3079704,
	2874099,
	-2596135,
	2274946,
	-1935468,
	1598132,
	-1278800,
	988916,
	-735827,
	523256,
	-351857,
	219826,
	-123534,
	58126,
	-18084,
	-119364,
	179138,
	-246375,
	316616,
	-383433,
	438337,
	-470813,
	468496,
	-417499,
	302917,
	-109497,
	-177530,
	571481,
	-1083128,
	1719536,
	-2482872,
	3369233,
	-4367562,
	5458704,
	-6614665,
	7798123,
	-8962252,
	10050873,
	-10998969,
	11733558,
	-12174913,
	12238073,
	-11834601,
	10874480,
	-9268025,
	6927668,
	-3769407,
	-286328,
	5314721,
	-11387995,
	18578875,
	-26967140,
	36651032,
	-47766606,
	60520952,
	-75251221,
	92535605,
	-113418877,
	139920977,
	-176358212,
	233556268,
	-347625348,
	752100917,
	1838185313,
	-326013043,
	144599774,
	-72214878,
	32828129,
	-8183939,
	-8320649,
	19669851,
	-27430412,
	32526232,
	-35558771,
	36955209,
	-37042483,
	36086244,
	-34311932,
	31916246,
	-29073248,
	25937450,
	-22645215,
	19315286,
	-16048956,
	12930172,
	-10025791,
	7386078,
	-5045508,
	3023880,
	-1327712,
	-48122,
	1118569,
	-1906478,
	2440634,
	-2753830,
	2881053,
	-2857811,
	2718687,
	-2496122,
	2219467,
	-1914302,
	1602021,
	-1299660,
	1019959,
	-771598,
	559590,
	-385787,
	249449,
	-147840,
	76827,
	-31431,
	-121135,
	183854,
	-256114,
	333973,
	-411482,
	480550,
	-530919,
	550286,
	-524575,
	438384,
	-275606,
	20224,
	342744,
	-826160,
	1439590,
	-2188071,
	3070878,
	-4080353,
	5200843,
	-6407822,
	7667248,
	-8935210,
	10157896,
	-11271921,
	12205013,
	-12877053,
	13201427,
	-13086643,
	12438105,
	-11159937,
	9156704,
	-6334803,
	2603290,
	2126238,
	-7941185,
	14931667,
	-23197543,
	32860701,
	-44086044,
	57117726,
	-72343910,
	90419129,
	-112514158,
	140882196,
	-180338220,
	243015062,
	-369862323,
	835570508,
	1788051627,
	-355874124,
	166172257,
	-89087163,
	46614534,
	-19683924,
	1345304,
	11551105,
	-20657583,
	26944501,
	-31039366,
	33384296,
	-34315099,
	34103101,
	-32977938,
	31140058,
	-28767446,
	26019056,
	-23036369,
	19943961,
	-16849608,
	13844274,
	-11002202,
	8381233,
	-6023413,
	3955921,
	-2192290,
	733901,
	428331,
	-1312114,
	1941884,
	-2346902,
	2559424,
	-2613011,
	2541016,
	-2375295,
	2145164,
	-1876627,
	1591848,
	-1308891,
	1041671,
	-800115,
	590480,
	-415789,
	276360,
	-170370,
	94434,
	-44148,
	-121844,
	187018,
	-263753,
	348664,
	-436335,
	519142,
	-587176,
	628299,
	-628365,
	571601,
	-441178,
	219957,
	108592,
	-559325,
	1144244,
	-1871232,
	2742769,
	-3754683,
	4894977,
	-6142828,
	7467788,
	-8829257,
	10176271,
	-11447637,
	12572425,
	-13470824,
	14055319,
	-14232149,
	13902951,
	-12966479,
	11320238,
	-8861816,
	5489656,
	-1102873,
	-4400403,
	11126956,
	-19195935,
	28751940,
	-39987484,
	53182009,
	-68771937,
	87483688,
	-110606493,
	140613495,
	-182793955,
	250544205,
	-389634481,
	919151078,
	1733290647,
	-381278373,
	185720843,
	-104860074,
	59786482,
	-30867337,
	10893793,
	3410889,
	-13764881,
	21173835,
	-26284282,
	29548495,
	-31307632,
	31835944,
	-31364995,
	30097052,
	-28212334,
	25872748,
	-23223584,
	20394096,
	-17497550,
	14631081,
	-11875630,
	9296061,
	-6941586,
	4846487,
	-3031158,
	1503435,
	-260145,
	-711160,
	1430382,
	-1923014,
	2218328,
	-2347662,
	2342859,
	-2234923,
	2052888,
	-1822955,
	1567868,
	-1306553,
	1053980,
	-821229,
	615735,
	-441659,
	300368,
	-190959,
	110813,
	-56138,
	-121453,
	188562,
	-269179,
	360506,
	-457714,
	553713,
	-639027,
	701791,
	-727906,
	701360,
	-604739,
	419922,
	-128960,
	-284885,
	835961,
	-1534950,
	2387538,
	-3393092,
	4543402,
	-5821548,
	7200959,
	-8644718,
	10105168,
	-11523852,
	12831808,
	-13950232,
	14791469,
	-15260303,
	15255454,
	-14671176,
	13398792,
	-11327957,
	8347363,
	-4344495,
	-796125,
	7197061,
	-14995772,
	24358395,
	-35503529,
	48743722,
	-64560353,
	83746401,
	-107700533,
	139099721,
	-183677016,
	256032627,
	-406685150,
	1002446867,
	1674185686,
	-402244608,
	203138188,
	-119420545,
	72239979,
	-41641467,
	20243277,
	-4679839,
	-6813366,
	15266075,
	-21336820,
	25483244,
	-28048346,
	29306556,
	-29489106,
	28798146,
	-27414437,
	25501334,
	-23206594,
	20662963,
	-17988157,
	15284594,
	-12639157,
	10123134,
	-7792432,
	5688097,
	-3837174,
	2253846,
	-940850,
	-108928,
	910709,
	-1486025,
	1860929,
	-2064279,
	2126151,
	-2076434,
	1943638,
	-1753933,
	1530450,
	-1292810,
	1056901,
	-834857,
	635216,
	-463238,
	321313,
	-209461,
	125846,
	-67311,
	-119935,
	188434,
	-272297,
	369341,
	-475368,
	583890,
	-685946,
	770046,
	-822259,
	826466,
	-764815,
	618350,
	-367845,
	-5189,
	517341,
	-1182016,
	2008078,
	-2998462,
	4148839,
	-5446359,
	6868583,
	-8382617,
	9944543,
	-11499164,
	12980099,
	-14310245,
	15402575,
	-16161247,
	16482946,
	-16258339,
	15373508,
	-13711122,
	11151081,
	-7570208,
	2840402,
	3175632,
	-10632499,
	19716475,
	-30670425,
	43837454,
	-59740043,
	79231569,
	-103809675,
	136336285,
	-182951612,
	259383609,
	-420768757,
	1085058698,
	1611041327,
	-418818052,
	218336597,
	-132667742,
	83878691,
	-51918273,
	29314819,
	-12651234,
	135935,
	9273823,
	-16241616,
	21225717,
	-24567498,
	26538855,
	-27368458,
	27256421,
	-26382360,
	24909569,
	-22986918,
	20749436,
	-18318214,
	15800016,
	-13286876,
	10855844,
	-8568996,
	6473754,
	-4603535,
	2978720,
	-1607890,
	489302,
	387483,
	-1039874,
	1490501,
	-1765512,
	1892969,
	-1901401,
	1818549,
	-1670338,
	1480079,
	-1267923,
	1050532,
	-840982,
	648839,
	-480403,
	339064,
	-225753,
	139428,
	-77586,
	-117272,
	186596,
	-273030,
	375034,
	-489078,
	609336,
	-727444,
	832387,
	-910519,
	945755,
	-919949,
	813467,
	-605962,
	277340,
	191102,
	-815395,
	1607524,
	-2573992,
	3714408,
	-5020133,
	6473072,
	-8044666,
	9695139,
	-11373050,
	13015193,
	-14546849,
	15882385,
	-16926176,
	17573772,
	-17713206,
	17226309,
	-15989785,
	13875785,
	-10751536,
	6477430,
	-902634,
	-6143257,
	14865047,
	-25527777,
	38502192,
	-54347513,
	73970540,
	-98956049,
	132329344,
	-180595072,
	260515880,
	-431652718,
	1166586338,
	1544181539,
	-431069599,
	231248234,
	-144513667,
	94614637,
	-61615074,
	38032733,
	-20435163,
	7022554,
	3249986,
	-11044246,
	16814487,
	-20897059,
	23558674,
	-25023250,
	25486989,
	-25126694,
	24104102,
	-22567838,
	20653990,
	-18485928,
	16173795,
	-13813935,
	11488455,
	-9265027,
	7197000,
	-5323842,
	3671913,
	-2255539,
	1078329,
	-134688,
	-588544,
	1110404,
	-1454122,
	1645517,
	-1711524,
	1678887,
	-1573063,
	1417350,
	-1232246,
	1035049,
	-839655,
	656571,
	-493074,
	353520,
	-239734,
	151471,
	-86895,
	-113456,
	183024,
	-271324,
	377474,
	-498654,
	629751,
	-763074,
	888179,
	-991826,
	1058098,
	-1068710,
	1003510,
	-841196,
	560232,
	-139947,
	-438198,
	1189225,
	-2123171,
	3243610,
	-4546213,
	6017415,
	-7633262,
	9358486,
	-11145875,
	12935965,
	-14657087,
	16225761,
	-17547422,
	18517400,
	-19022081,
	18940074,
	-18143198,
	16496973,
	-13860197,
	10082983,
	-5002293,
	-1566569,
	9845119,
	-20118229,
	32781027,
	-48424621,
	68001508,
	-93170434,
	127095903,
	-176598262,
	259364599,
	-439119259,
	1246630899,
	1473947667,
	-439094928,
	241825178,
	-154883650,
	104368811,
	-70655192,
	46325199,
	-27965772,
	13787099,
	-2752690,
	-5790822,
	12289181,
	-17070425,
	20393516,
	-22475504,
	23506848,
	-23659913,
	23093404,
	-21954357,
	20378689,
	-18490940,
	16403638,
	-14216568,
	12016148,
	-9875024,
	7851974,
	-5992142,
	4327610,
	-2878288,
	1653076,
	-651245,
	-136033,
	724054,
	-1132953,
	1386101,
	-1508618,
	1526031,
	-1463115,
	1342955,
	-1186228,
	1010707,
	-830993,
	658431,
	-501213,
	364612,
	-251326,
	161900,
	-95179,
	-108490,
	177709,
	-267142,
	376581,
	-503942,
	644875,
	-792434,
	936838,
	-1065369,
	1162415,
	-1209705,
	1186739,
	-1071436,
	840990,
	-472925,
	-53661,
	756717,
	-1649750,
	2740295,
	-4028394,
	5505156,
	-7151466,
	8936898,
	-10818901,
	12742292,
	-14639096,
	16428731,
	-18018528,
	19304526,
	-20172458,
	20498785,
	-20151569,
	18990885,
	-16868353,
	13625139,
	-9087459,
	3057989,
	4699494,
	-14487113,
	26720807,
	-42018269,
	61369258,
	-86492092,
	120663819,
	-170965893,
	255882237,
	-442967169,
	1324797236,
	1400696331,
	-443013461,
	250039342,
	-163716725,
	113071717,
	-78968530,
	54124841,
	-35180034,
	20371763,
	-8682078,
	-527586,
	7690125,
	-13122114,
	17072309,
	-19748859,
	21334723,
	-21996252,
	21887684,
	-21153142,
	19927155,
	-18334317,
	16488531,
	-14492128,
	12435056,
	-10394275,
	8433453,
	-6602985,
	4940366,
	-3470887,
	2208632,
	-1157714,
	313692,
	334888,
	-804908,
	1117109,
	-1294593,
	1361459,
	-1341597,
	1257685,
	-1130398,
	977837,
	-815172,
	654492,
	-504822,
	372301,
	-260473,
	170660,
	-102389,
	-102389,
	170660,
	-260473,
	372301,
	-504822,
	654492,
	-815172,
	977837,
	-1130398,
	1257685,
	-1341597,
	1361459,
	-1294593,
	1117109,
	-804908,
	334888,
	313692,
	-1157714,
	2208632,
	-3470887,
	4940366,
	-6602985,
	8433453,
	-10394275,
	12435056,
	-14492128,
	16488531,
	-18334317,
	19927155,
	-21153142,
	21887684,
	-21996252,
	21334723,
	-19748859,
	17072309,
	-13122114,
	7690125,
	-527586,
	-8682078,
	20371763,
	-35180034,
	54124841,
	-78968530,
	113071717,
	-163716725,
	250039342,
	-443013461,
	1400696331,
	1324797236,
	-442967169,
	255882237,
	-170965893,
	120663819,
	-86492092,
	61369258,
	-42018269,
	26720807,
	-14487113,
	4699494,
	3057989,
	-9087459,
	13625139,
	-16868353,
	18990885,
	-20151569,
	20498785,
	-20172458,
	19304526,
	-18018528,
	16428731,
	-14639096,
	12742292,
	-10818901,
	8936898,
	-7151466,
	5505156,
	-4028394,
	2740295,
	-1649750,
	756717,
	-53661,
	-472925,
	840990,
	-1071436,
	1186739,
	-1209705,
	1162415,
	-1065369,
	936838,
	-792434,
	644875,
	-503942,
	376581,
	-267142,
	177709,
	-108490,
	-95179,
	161900,
	-251326,
	364612,
	-501213,
	658431,
	-830993,
	1010707,
	-1186228,
	1342955,
	-1463115,
	1526031,
	-1508618,
	1386101,
	-1132953,
	724054,
	-136033,
	-651245,
	1653076,
	-2878288,
	4327610,
	-5992142,
	7851974,
	-9875024,
	12016148,
	-14216568,
	16403638,
	-18490940,
	20378689,
	-21954357,
	23093404,
	-23659913,
	23506848,
	-22475504,
	20393516,
	-17070425,
	12289181,
	-5790822,
	-2752690,
	13787099,
	-27965772,
	46325199,
	-70655192,
	104368811,
	-154883650,
	241825178,
	-439094928,
	1473947667,
	1246630899,
	-439119259,
	259364599,
	-176598262,
	127095903,
	-93170434,
	68001508,
	-48424621,
	32781027,
	-20118229,
	9845119,
	-1566569,
	-5002293,
	10082983,
	-13860197,
	16496973,
	-18143198,
	18940074,
	-19022081,
	18517400,
	-17547422,
	16225761,
	-14657087,
	12935965,
	-11145875,
	9358486,
	-7633262,
	6017415,
	-4546213,
	3243610,
	-2123171,
	1189225,
	-438198,
	-139947,
	560232,
	-841196,
	1003510,
	-1068710,
	1058098,
	-991826,
	888179,
	-763074,
	629751,
	-498654,
	377474,
	-271324,
	183024,
	-113456,
	-86895,
	151471,
	-239734,
	353520,
	-493074,
	656571,
	-839655,
	1035049,
	-1232246,
	1417350,
	-1573063,
	1678887,
	-1711524,
	1645517,
	-1454122,
	1110404,
	-588544,
	-134688,
	1078329,
	-2255539,
	3671913,
	-5323842,
	7197000,
	-9265027,
	11488455,
	-13813935,
	16173795,
	-18485928,
	20653990,
	-22567838,
	24104102,
	-25126694,
	25486989,
	-25023250,
	23558674,
	-20897059,
	16814487,
	-11044246,
	3249986,
	7022554,
	-20435163,
	38032733,
	-61615074,
	94614637,
	-144513667,
	231248234,
	-431069599,
	1544181539,
	1166586338,
	-431652718,
	260515880,
	-180595072,
	132329344,
	-98956049,
	73970540,
	-54347513,
	38502192,
	-25527777,
	14865047,
	-6143257,
	-902634,
	6477430,
	-10751536,
	13875785,
	-15989785,
	17226309,
	-17713206,
	17573772,
	-16926176,
	15882385,
	-14546849,
	13015193,
	-11373050,
	9695139,
	-8044666,
	6473072,
	-5020133,
	3714408,
	-2573992,
	1607524,
	-815395,
	191102,
	277340,
	-605962,
	813467,
	-919949,
	945755,
	-910519,
	832387,
	-727444,
	609336,
	-489078,
	375034,
	-273030,
	186596,
	-117272,
	-77586,
	139428,
	-225753,
	339064,
	-480403,
	648839,
	-840982,
	1050532,
	-1267923,
	1480079,
	-1670338,
	1818549,
	-1901401,
	1892969,
	-1765512,
	1490501,
	-1039874,
	387483,
	489302,
	-1607890,
	2978720,
	-4603535,
	6473754,
	-8568996,
	10855844,
	-13286876,
	15800016,
	-18318214,
	20749436,
	-22986918,
	24909569,
	-26382360,
	27256421,
	-27368458,
	26538855,
	-24567498,
	21225717,
	-16241616,
	9273823,
	135935,
	-12651234,
	29314819,
	-51918273,
	83878691,
	-132667742,
	218336597,
	-418818052,
	1611041327,
	1085058698,
	-420768757,
	259383609,
	-182951612,
	136336285,
	-103809675,
	79231569,
	-59740043,
	43837454,
	-30670425,
	19716475,
	-10632499,
	3175632,
	2840402,
	-7570208,
	11151081,
	-13711122,
	15373508,
	-16258339,
	16482946,
	-16161247,
	15402575,
	-14310245,
	12980099,
	-11499164,
	9944543,
	-8382617,
	6868583,
	-5446359,
	4148839,
	-2998462,
	2008078,
	-1182016,
	517341,
	-5189,
	-367845,
	618350,
	-764815,
	826466,
	-822259,
	770046,
	-685946,
	583890,
	-475368,
	369341,
	-272297,
	188434,
	-119935,
	-67311,
	125846,
	-209461,
	321313,
	-463238,
	635216,
	-834857,
	1056901,
	-1292810,
	1530450,
	-1753933,
	1943638,
	-2076434,
	2126151,
	-2064279,
	1860929,
	-1486025,
	910709,
	-108928,
	-940850,
	2253846,
	-3837174,
	5688097,
	-7792432,
	10123134,
	-12639157,
	15284594,
	-17988157,
	20662963,
	-23206594,
	25501334,
	-27414437,
	28798146,
	-29489106,
	29306556,
	-28048346,
	25483244,
	-21336820,
	15266075,
	-6813366,
	-4679839,
	20243277,
	-41641467,
	72239979,
	-119420545,
	203138188,
	-402244608,
	1674185686,
	1002446867,
	-406685150,
	256032627,
	-183677016,
	139099721,
	-107700533,
	83746401,
	-64560353,
	48743722,
	-35503529,
	24358395,
	-14995772,
	7197061,
	-796125,
	-4344495,
	8347363,
	-11327957,
	13398792,
	-14671176,
	15255454,
	-15260303,
	14791469,
	-13950232,
	12831808,
	-11523852,
	10105168,
	-8644718,
	7200959,
	-5821548,
	4543402,
	-3393092,
	2387538,
	-1534950,
	835961,
	-284885,
	-128960,
	419922,
	-604739,
	701360,
	-727906,
	701791,
	-639027,
	553713,
	-457714,
	360506,
	-269179,
	188562,
	-121453,
	-56138,
	110813,
	-190959,
	300368,
	-441659,
	615735,
	-821229,
	1053980,
	-1306553,
	1567868,
	-1822955,
	2052888,
	-2234923,
	2342859,
	-2347662,
	2218328,
	-1923014,
	1430382,
	-711160,
	-260145,
	1503435,
	-3031158,
	4846487,
	-6941586,
	9296061,
	-11875630,
	14631081,
	-17497550,
	20394096,
	-23223584,
	25872748,
	-28212334,
	30097052,
	-31364995,
	31835944,
	-31307632,
	29548495,
	-26284282,
	21173835,
	-13764881,
	3410889,
	10893793,
	-30867337,
	59786482,
	-104860074,
	185720843,
	-381278373,
	1733290647,
	919151078,
	-389634481,
	250544205,
	-182793955,
	140613495,
	-110606493,
	87483688,
	-68771937,
	53182009,
	-39987484,
	28751940,
	-19195935,
	11126956,
	-4400403,
	-1102873,
	5489656,
	-8861816,
	11320238,
	-12966479,
	13902951,
	-14232149,
	14055319,
	-13470824,
	12572425,
	-11447637,
	10176271,
	-8829257,
	7467788,
	-6142828,
	4894977,
	-3754683,
	2742769,
	-1871232,
	1144244,
	-559325,
	108592,
	219957,
	-441178,
	571601,
	-628365,
	628299,
	-587176,
	519142,
	-436335,
	348664,
	-263753,
	187018,
	-121844,
	-44148,
	94434,
	-170370,
	276360,
	-415789,
	590480,
	-800115,
	1041671,
	-1308891,
	1591848,
	-1876627,
	2145164,
	-2375295,
	2541016,
	-2613011,
	2559424,
	-2346902,
	1941884,
	-1312114,
	428331,
	733901,
	-2192290,
	3955921,
	-6023413,
	8381233,
	-11002202,
	13844274,
	-16849608,
	19943961,
	-23036369,
	26019056,
	-28767446,
	31140058,
	-32977938,
	34103101,
	-34315099,
	33384296,
	-31039366,
	26944501,
	-20657583,
	11551105,
	1345304,
	-19683924,
	46614534,
	-89087163,
	166172257,
	-355874124,
	1788051627,
	835570508,
	-369862323,
	243015062,
	-180338220,
	140882196,
	-112514158,
	90419129,
	-72343910,
	57117726,
	-44086044,
	32860701,
	-23197543,
	14931667,
	-7941185,
	2126238,
	2603290,
	-6334803,
	9156704,
	-11159937,
	12438105,
	-13086643,
	13201427,
	-12877053,
	12205013,
	-11271921,
	10157896,
	-8935210,
	7667248,
	-6407822,
	5200843,
	-4080353,
	3070878,
	-2188071,
	1439590,
	-826160,
	342744,
	20224,
	-275606,
	438384,
	-524575,
	550286,
	-530919,
	480550,
	-411482,
	333973,
	-256114,
	183854,
	-121135,
	-31431,
	76827,
	-147840,
	249449,
	-385787,
	559590,
	-771598,
	1019959,
	-1299660,
	1602021,
	-1914302,
	2219467,
	-2496122,
	2718687,
	-2857811,
	2881053,
	-2753830,
	2440634,
	-1906478,
	1118569,
	-48122,
	-1327712,
	3023880,
	-5045508,
	7386078,
	-10025791,
	12930172,
	-16048956,
	19315286,
	-22645215,
	25937450,
	-29073248,
	31916246,
	-34311932,
	36086244,
	-37042483,
	36955209,
	-35558771,
	32526232,
	-27430412,
	19669851,
	-8320649,
	-8183939,
	32828129,
	-72214878,
	144599774,
	-326013043,
	1838185313,
	752100917,
	-347625348,
	233556268,
	-176358212,
	139920977,
	-113418877,
	92535605,
	-75251221,
	60520952,
	-47766606,
	36651032,
	-26967140,
	18578875,
	-11387995,
	5314721,
	-286328,
	-3769407,
	6927668,
	-9268025,
	10874480,
	-11834601,
	12238073,
	-12174913,
	11733558,
	-10998969,
	10050873,
	-8962252,
	7798123,
	-6614665,
	5458704,
	-4367562,
	3369233,
	-2482872,
	1719536,
	-1083128,
	571481,
	-177530,
	-109497,
	302917,
	-417499,
	468496,
	-470813,
	438337,
	-383433,
	316616,
	-246375,
	179138,
	-119364,
	-18084,
	58126,
	-123534,
	219826,
	-351857,
	523256,
	-735827,
	988916,
	-1278800,
	1598132,
	-1935468,
	2274946,
	-2596135,
	2874099,
	-3079704,
	3180198,
	-3140059,
	2922119,
	-2488955,
	1804498,
	-835836,
	-444846,
	2058269,
	-4016050,
	6318785,
	-8954269,
	11895941,
	-15101594,
	18512391,
	-22052184,
	25627110,
	-29125360,
	32416968,
	-35353318,
	37765932,
	-39463776,
	40227854,
	-39800927,
	37868412,
	-34022812,
	27695656,
	-18020606,
	3535980,
	18538138,
	-54367802,
	121130020,
	-291703269,
	1883431425,
	669132306,
	-323189391,
	222292080,
	-170914329,
	137755283,
	-113324682,
	93823255,
	-77474818,
	63366648,
	-51000470,
	40092315,
	-30473539,
	22037863,
	-14711391,
	8435004,
	-3153931,
	-1188300,
	4653048,
	-7307851,
	9226414,
	-10487698,
	11174437,
	-11371306,
	11162928,
	-10631877,
	9856800,
	-8910751,
	7859807,
	-6762017,
	5666703,
	-4614125,
	3635486,
	-2753257,
	1981778,
	-1328076,
	792855,
	-371594,
	55686,
	166415,
	-308118,
	383698,
	-407442,
	392930,
	-352487,
	296795,
	-234665,
	172947,
	-116576,
	-4215,
	38476,
	-97636,
	187710,
	-314237,
	481721,
	-693020,
	948692,
	-1246352,
	1580051,
	-1939751,
	2310909,
	-2674237,
	3005660,
	-3276513,
	3454012,
	-3501994,
	3381946,
	-3054309,
	2480034,
	-1622343,
	448665,
	1067344,
	-2943731,
	5188238,
	-7796402,
	10749852,
	-14014856,
	17541157,
	-21261130,
	25089221,
	-28921607,
	32635939,
	-36090911,
	39125252,
	-41555469,
	43171221,
	-43726365,
	42922103,
	-40375262,
	35557160,
	-27669887,
	15376053,
	3861477,
	-35681214,
	95908404,
	-252980293,
	1923554334,
	587046641,
	-296827486,
	209358677,
	-164078268,
	134420494,
	-112244156,
	94279483,
	-79001750,
	65634833,
	-53763049,
	43157209,
	-33688077,
	25279777,
	-17883208,
	11460301,
	-5974616,
	1385859,
	2353027,
	-5297009,
	7508885,
	-9058356,
	10020515,
	-10473974,
	10498823,
	-10174544,
	9578024,
	-8781758,
	7852304,
	-6849070,
	5823435,
	-4818234,
	3867592,
	-2997084,
	2224188,
	-1558978,
	1005003,
	-560306,
	218508,
	30088,
	-197421,
	296678,
	-341409,
	344779,
	-318966,
	274732,
	-221130,
	165373,
	-112827,
	10061,
	18037,
	-70349,
	153345,
	-273205,
	435278,
	-643460,
	899528,
	-1202459,
	1547772,
	-1926925,
	2326830,
	-2729513,
	3111973,
	-3446263,
	3699847,
	-3836228,
	3815871,
	-3597411,
	3139136,
	-2400700,
	1345028,
	59648,
	-1837684,
	4003940,
	-6561777,
	9501220,
	-12797350,
	16408988,
	-20277675,
	24326979,
	-28462046,
	32569309,
	-36516122,
	40149989,
	-43296779,
	45756955,
	-47298087,
	47640486,
	-46429806,
	43183734,
	-37183314,
	27234176,
	-11079803,
	-16300166,
	69098449,
	-209907163,
	1958344534,
	506215637,
	-268817876,
	194902841,
	-155932249,
	129961492,
	-110198222,
	93908908,
	-79825231,
	67310716,
	-56034060,
	45821857,
	-36584842,
	28277859,
	-20876803,
	14364836,
	-8724061,
	3930625,
	47877,
	-3253413,
	5737376,
	-7559637,
	8787020,
	-9491422,
	9747720,
	-9631629,
	9217618,
	-8576994,
	7776223,
	-6875550,
	5927955,
	-4978467,
	4063822,
	-3212462,
	2444835,
	-1773953,
	1206163,
	-742073,
	377567,
	-104871,
	-86396,
	208229,
	-273333,
	294349,
	-283210,
	250662,
	-205927,
	156517,
	-108178,
	24622,
	-3024,
	-41893,
	116999,
	-229073,
	384268,
	-587494,
	841741,
	-1147372,
	1501415,
	-1896914,
	2322354,
	-2761242,
	3191850,
	-3587198,
	3915277,
	-4139567,
	4219845,
	-4113286,
	3775861,
	-3163981,
	2236365,
	-956066,
	-707407,
	2775939,
	-5260727,
	8160325,
	-11458898,
	15124753,
	-19109171,
	23345574,
	-27748988,
	32215712,
	-36623047,
	40828766,
	-44669847,
	47959628,
	-50481904,
	51979288,
	-52130573,
	50506100,
	-46475947,
	39006775,
	-26159480,
	3621533,
	40880997,
	-162574512,
	1987619947,
	426998631,
	-239442020,
	179080576,
	-146568161,
	124432156,
	-107215873,
	92723252,
	-79944637,
	68384779,
	-57797653,
	48066071,
	-39140885,
	31007667,
	-23667271,
	17124064,
	-11378725,
	6423961,
	-2242225,
	-1195145,
	3927739,
	-6005116,
	7485290,
	-8432843,
	8916812,
	-9008507,
	8779343,
	-8298832,
	7632770,
	-6841714,
	5979784,
	-5093800,
	4222779,
	-3397769,
	2641994,
	-1971275,
	1394686,
	-915375,
	531511,
	-237295,
	23978,
	119147,
	-203842,
	242120,
	-245571,
	224836,
	-189227,
	146488,
	-102697,
	39341,
	-24527,
	-12502,
	78966,
	-182187,
	329079,
	-525532,
	775735,
	-1081440,
	1441227,
	-1849791,
	2297305,
	-2768902,
	3244328,
	-3697801,
	4098123,
	-4409063,
	4590050,
	-4597161,
	4384416,
	-3905341,
	3114783,
	-1970907,
	437322,
	1514735,
	-3904239,
	6738333,
	-10010452,
	13698721,
	-17764648,
	22152161,
	-26786985,
	31576297,
	-36408539,
	41153165,
	-45659921,
	49756983,
	-53246760,
	55897193,
	-57424283,
	57456954,
	-55463820,
	50589676,
	-41248165,
	23922420,
	11453258,
	-111100405,
	2011227067,
	349740542,
	-208982609,
	162055682,
	-136086640,
	117894784,
	-103333826,
	90741163,
	-79365453,
	68852813,
	-59042526,
	49873478,
	-41336394,
	33447275,
	-26231652,
	19714875,
	-13916056,
	8844425,
	-4497366,
	859706,
	2096050,
	-4408766,
	6127179,
	-7308027,
	8013938,
	-8311214,
	8267618,
	-7950269,
	7423729,
	-6748348,
	5978908,
	-5163610,
	4343404,
	-3551660,
	2814163,
	-2149393,
	1569052,
	-1078787,
	679050,
	-366052,
	132742,
	30223,
	-133567,
	188580,
	-206413,
	197515,
	-171208,
	135405,
	-96458,
	54086,
	-46287,
	17576,
	39556,
	-132922,
	270140,
	-458043,
	701987,
	-1005115,
	1367579,
	-1785785,
	2251684,
	-2752181,
	3268674,
	-3776812,
	4246475,
	-4642038,
	4922931,
	-5044504,
	4959208,
	-4618074,
	3972443,
	-2975929,
	1586523,
	231199,
	-2503869,
	5247200,
	-8464007,
	12142479,
	-16254746,
	20755805,
	-25582813,
	30654733,
	-35872254,
	41117823,
	-46255503,
	51130151,
	-55565029,
	59356226,
	-62260737,
	63971564,
	-64064685,
	61878998,
	-56214360,
	44434573,
	-18972267,
	-55630001,
	2029041918,
	274769952,
	-177721602,
	143998292,
	-124596099,
	110419455,
	-98596124,
	87987989,
	-78099174,
	68715913,
	-59761977,
	51231637,
	-43154843,
	35577440,
	-28549119,
	22115787,
	-16314680,
	11171358,
	-6698073,
	2893204,
	258470,
	-2784829,
	4724952,
	-6127277,
	7047509,
	-7546393,
	7687467,
	-7534892,
	7151448,
	-6596751,
	5925774,
	-5187678,
	4424981,
	-3673077,
	2960075,
	-2306938,
	1727881,
	-1230984,
	818963,
	-490057,
	238960,
	-57764,
	-63137,
	134220,
	-166107,
	168969,
	-152061,
	123393,
	-89542,
	68721,
	-68111,
	48083,
	-899,
	-81680,
	207923,
	-385550,
	621055,
	-918949,
	1280969,
	-1705274,
	2185679,
	-2710979,
	3264399,
	-3823234,
	4358710,
	-4836119,
	5215236,
	-5451067,
	5494900,
	-5295673,
	4801629,
	-3962203,
	2730106,
	-1063526,
	-1071638,
	3699574,
	-6832503,
	10468836,
	-14591633,
	19167420,
	-24145420,
	29457193,
	-35016673,
	40720499,
	-46448478,
	52063847,
	-57412781,
	62322114,
	-66593283,
	69988367,
	-72198737,
	72772048,
	-70925537,
	64984863,
	-50168998,
	3664968,
	2040970831,
	202397295,
	-145938307,
	125083390,
	-112211695,
	102083329,
	-93053673,
	84495490,
	-76163149,
	67980420,
	-59953932,
	52132111,
	-44583116,
	37381758,
	-30601144,
	24307124,
	-18554577,
	13385054,
	-8825478,
	4887718,
	-1568898,
	-1147691,
	3291175,
	-4901313,
	6026433,
	-6721227,
	7044478,
	-7056850,
	6818805,
	-6388721,
	5821285,
	-5166188,
	4467145,
	-3761257,
	3078705,
	-2442737,
	1869944,
	-1370754,
	950111,
	-608281,
	341734,
	-144053,
	6825,
	79532,
	-125028,
	139473,
	-131977,
	110583,
	-82031,
	83109,
	-89801,
	78751,
	-42055,
	-28889,
	142934,
	-308632,
	533563,
	-823584,
	1182013,
	-1608789,
	2099658,
	-2645413,
	3231262,
	-3836351,
	4433511,
	-4989249,
	5464042,
	-5812931,
	5986455,
	-5931894,
	5594818,
	-4920902,
	3857959,
	-2358117,
	380068,
	2108687,
	-5129718,
	8691725,
	-12788906,
	17399682,
	-22485868,
	27992322,
	-33847102,
	39962117,
	-46234206,
	52546526,
	-58770028,
	64764616,
	-70379253,
	75449530,
	-79789343,
	83168224,
	-85249252,
	85396281,
	-81897614,
	66586897,
	2046951030,
	132913187,
	-113907501,
	105489319,
	-99054271,
	92969904,
	-86763731,
	80301496,
	-73580376,
	66657822,
	-59620922,
	52570516,
	-45611591,
	38846781,
	-32371644,
	26271172,
	-20617248,
	15466931,
	-10861482,
	6826080,
	-3370150,
	488246,
	1838604,
	-3641173,
	4960033,
	-5843375,
	6344746,
	-6520806,
	6429188,
	-6126536,
	5666784,
	-5099722,
	4469879,
	-3815737,
	3169274,
	-2555816,
	1994170,
	-1497009,
	1071445,
	-719755,
	440204,
	-227910,
	75713,
	25003,
	-83553,
	109308,
	-111157,
	97109,
	-74011

};

struct src_stage src_int32_32_21_4535_5000 = {
	19, 29, 32, 96, 3072, 21, 32, 0, 0,
	src_int32_32_21_4535_5000_fir};
