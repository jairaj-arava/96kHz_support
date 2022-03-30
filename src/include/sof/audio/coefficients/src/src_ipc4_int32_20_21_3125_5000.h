/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2022 Intel Corporation. All rights reserved.
 *
 */

#include <sof/audio/src/src.h>
#include <stdint.h>

const int32_t src_int32_20_21_3125_5000_fir[560] = {
	200668,
	163428,
	-2291331,
	6127777,
	-8447268,
	3114360,
	14545275,
	-40672693,
	58366768,
	-41592163,
	-31408754,
	161919266,
	-323833805,
	481359077,
	1660632831,
	396767204,
	-309099618,
	171065379,
	-45958173,
	-30835066,
	54016457,
	-41194263,
	17025797,
	908231,
	-7343797,
	5911564,
	-2430547,
	302674,
	256514,
	6378,
	-2101590,
	6256813,
	-9475758,
	5378497,
	11728382,
	-39498758,
	61983158,
	-52115102,
	-15808637,
	149881508,
	-334429854,
	567767147,
	1652332805,
	314630666,
	-290653857,
	177310622,
	-59283275,
	-20011550,
	49024158,
	-41080869,
	19146370,
	-1208737,
	-6186398,
	5616810,
	-2520500,
	423150,
	315422,
	-167056,
	-1860900,
	6291016,
	-10408346,
	7667070,
	8605084,
	-37664641,
	64781637,
	-62233520,
	646122,
	135003584,
	-340491444,
	655320426,
	1635808992,
	235550516,
	-268947442,
	180686544,
	-71234571,
	-9284341,
	43488076,
	-40358871,
	20889911,
	-3208190,
	-4995912,
	5252935,
	-2563213,
	524327,
	376232,
	-354996,
	-1569740,
	6223907,
	-11224603,
	9944533,
	5211522,
	-35172607,
	66687756,
	-71776932,
	17739106,
	117380188,
	-341658139,
	743322762,
	1611213017,
	160083988,
	-244449633,
	181263496,
	-81687987,
	1191070,
	37510989,
	-39062845,
	22245830,
	-5064898,
	-3792639,
	4829941,
	-2561389,
	606091,
	437608,
	-555104,
	-1229547,
	6050361,
	-11904967,
	12173855,
	1589685,
	-32035359,
	67638122,
	-80577331,
	35235990,
	97149634,
	-337610742,
	831059905,
	1578770204,
	88739363,
	-217641926,
	179148216,
	-90545754,
	11268480,
	31198537,
	-37234744,
	23209934,
	-6757014,
	-2596040,
	4358211,
	-2518314,
	668713,
	498063,
	-764598,
	-842747,
	5766780,
	-12431110,
	14317064,
	-2213018,
	-28276241,
	67581788,
	-88471838,
	52887332,
	74493691,
	-328076263,
	917806842,
	1538777065,
	21971449,
	-189011970,
	174480998,
	-97736882,
	20812807,
	24657524,
	-34922975,
	23784223,
	-8266263,
	-1424462,
	3848314,
	-2437765,
	712818,
	555969,
	-980270,
	-412783,
	5371239,
	-12786315,
	16335827,
	-6144297,
	-23929285,
	66481503,
	-95305363,
	70431694,
	49636839,
	-312832446,
	1002835360,
	1491598000,
	-39822248,
	-159047561,
	167432519,
	-103217242,
	29701705,
	17994268,
	-32181415,
	23976609,
	-9578073,
	-294900,
	3310818,
	-2323904,
	739339,
	609594,
	-1198522,
	55886,
	4863620,
	-12955837,
	18192058,
	-10147619,
	-19039079,
	64314799,
	-100933249,
	87599031,
	22844926,
	-291711779,
	1085421701,
	1437661261,
	-96304634,
	-128230796,
	158200357,
	-106969255,
	37826936,
	11313014,
	-29068372,
	23800545,
	-10681635,
	777214,
	2756111,
	-2181186,
	749479,
	657126,
	-1415404,
	557800,
	4245712,
	-12927248,
	19848560,
	-14162941,
	-13660473,
	61074873,
	-105223844,
	104114341,
	-5576759,
	-264604941,
	1164854258,
	1377454199,
	-147201401,
	-97032455,
	147005261,
	-109001212,
	45095473,
	4714434,
	-25645525,
	23274588,
	-11569902,
	1778180,
	2194233,
	-2014251,
	744664,
	696713,
	-1626669,
	1086528,
	3521290,
	-12690762,
	21269666,
	-18127527,
	-7858107,
	56771277,
	-108060971,
	119701495,
	-35285991,
	-231463613,
	1240441191,
	1311517893,
	-192302628,
	-65906676,
	134087236,
	-109346245,
	51430358,
	-1705765,
	-21976844,
	22421894,
	-12239532,
	2696163,
	1634732,
	-1827834,
	726498,
	726498,
	-1827834,
	1634732,
	2696163,
	-12239532,
	22421894,
	-21976844,
	-1705765,
	51430358,
	-109346245,
	134087236,
	-65906676,
	-192302628,
	1311517893,
	1240441191,
	-231463613,
	-35285991,
	119701495,
	-108060971,
	56771277,
	-7858107,
	-18127527,
	21269666,
	-12690762,
	3521290,
	1086528,
	-1626669,
	696713,
	744664,
	-2014251,
	2194233,
	1778180,
	-11569902,
	23274588,
	-25645525,
	4714434,
	45095473,
	-109001212,
	147005261,
	-97032455,
	-147201401,
	1377454199,
	1164854258,
	-264604941,
	-5576759,
	104114341,
	-105223844,
	61074873,
	-13660473,
	-14162941,
	19848560,
	-12927248,
	4245712,
	557800,
	-1415404,
	657126,
	749479,
	-2181186,
	2756111,
	777214,
	-10681635,
	23800545,
	-29068372,
	11313014,
	37826936,
	-106969255,
	158200357,
	-128230796,
	-96304634,
	1437661261,
	1085421701,
	-291711779,
	22844926,
	87599031,
	-100933249,
	64314799,
	-19039079,
	-10147619,
	18192058,
	-12955837,
	4863620,
	55886,
	-1198522,
	609594,
	739339,
	-2323904,
	3310818,
	-294900,
	-9578073,
	23976609,
	-32181415,
	17994268,
	29701705,
	-103217242,
	167432519,
	-159047561,
	-39822248,
	1491598000,
	1002835360,
	-312832446,
	49636839,
	70431694,
	-95305363,
	66481503,
	-23929285,
	-6144297,
	16335827,
	-12786315,
	5371239,
	-412783,
	-980270,
	555969,
	712818,
	-2437765,
	3848314,
	-1424462,
	-8266263,
	23784223,
	-34922975,
	24657524,
	20812807,
	-97736882,
	174480998,
	-189011970,
	21971449,
	1538777065,
	917806842,
	-328076263,
	74493691,
	52887332,
	-88471838,
	67581788,
	-28276241,
	-2213018,
	14317064,
	-12431110,
	5766780,
	-842747,
	-764598,
	498063,
	668713,
	-2518314,
	4358211,
	-2596040,
	-6757014,
	23209934,
	-37234744,
	31198537,
	11268480,
	-90545754,
	179148216,
	-217641926,
	88739363,
	1578770204,
	831059905,
	-337610742,
	97149634,
	35235990,
	-80577331,
	67638122,
	-32035359,
	1589685,
	12173855,
	-11904967,
	6050361,
	-1229547,
	-555104,
	437608,
	606091,
	-2561389,
	4829941,
	-3792639,
	-5064898,
	22245830,
	-39062845,
	37510989,
	1191070,
	-81687987,
	181263496,
	-244449633,
	160083988,
	1611213017,
	743322762,
	-341658139,
	117380188,
	17739106,
	-71776932,
	66687756,
	-35172607,
	5211522,
	9944533,
	-11224603,
	6223907,
	-1569740,
	-354996,
	376232,
	524327,
	-2563213,
	5252935,
	-4995912,
	-3208190,
	20889911,
	-40358871,
	43488076,
	-9284341,
	-71234571,
	180686544,
	-268947442,
	235550516,
	1635808992,
	655320426,
	-340491444,
	135003584,
	646122,
	-62233520,
	64781637,
	-37664641,
	8605084,
	7667070,
	-10408346,
	6291016,
	-1860900,
	-167056,
	315422,
	423150,
	-2520500,
	5616810,
	-6186398,
	-1208737,
	19146370,
	-41080869,
	49024158,
	-20011550,
	-59283275,
	177310622,
	-290653857,
	314630666,
	1652332805,
	567767147,
	-334429854,
	149881508,
	-15808637,
	-52115102,
	61983158,
	-39498758,
	11728382,
	5378497,
	-9475758,
	6256813,
	-2101590,
	6378,
	256514,
	302674,
	-2430547,
	5911564,
	-7343797,
	908231,
	17025797,
	-41194263,
	54016457,
	-30835066,
	-45958173,
	171065379,
	-309099618,
	396767204,
	1660632831,
	481359077,
	-323833805,
	161919266,
	-31408754,
	-41592163,
	58366768,
	-40672693,
	14545275,
	3114360,
	-8447268,
	6127777,
	-2291331,
	163428,
	200668

};

struct src_stage src_int32_20_21_3125_5000 = {
	1, 1, 20, 28, 560, 21, 20, 0, 0,
	src_int32_20_21_3125_5000_fir};
