/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2022 Intel Corporation. All rights reserved.
 *
 */

#include <sof/audio/src/src.h>
#include <stdint.h>

const int32_t src_int32_21_20_3125_5000_fir[504] = {
	-317819,
	453281,
	1498098,
	-7690475,
	17944732,
	-26649022,
	21935909,
	10593403,
	-80090473,
	182726767,
	-300253868,
	414979081,
	1743730000,
	328942092,
	-277606581,
	183081861,
	-88620892,
	19520825,
	15960077,
	-23977287,
	17457847,
	-8078116,
	1936090,
	228448,
	-383490,
	694269,
	998258,
	-7149721,
	18169720,
	-29031052,
	27837466,
	1122270,
	-69961206,
	179532461,
	-319560029,
	503643649,
	1734982105,
	246162632,
	-252111583,
	180715950,
	-95490678,
	27792862,
	10003627,
	-21070379,
	16730463,
	-8315783,
	2309419,
	22455,
	-450909,
	948139,
	440744,
	-6455183,
	18114631,
	-31070927,
	33568150,
	-8767749,
	-58321909,
	173417432,
	-335049471,
	594264716,
	1717567345,
	167223505,
	-224273657,
	175780844,
	-100664939,
	35312162,
	4155952,
	-17983964,
	15786690,
	-8408890,
	2616587,
	-162609,
	-518413,
	1211045,
	-168892,
	-5608813,
	17764978,
	-32719242,
	39029842,
	-18940097,
	-45288162,
	164339561,
	-346270827,
	686136662,
	1691646861,
	92654981,
	-194602537,
	168458510,
	-104135159,
	41996600,
	-1499013,
	-14773912,
	14652821,
	-8364899,
	2857354,
	-325247,
	-584147,
	1478608,
	-823733,
	-4615315,
	17110411,
	-33930591,
	44124413,
	-29248144,
	-31001624,
	152298364,
	-352803221,
	778526400,
	1657460088,
	22930095,
	-163606610,
	158957350,
	-105918306,
	47779920,
	-6883867,
	-11495410,
	13356795,
	-8193080,
	3032655,
	-464532,
	-646093,
	1745957,
	-1515527,
	-3482224,
	16145101,
	-34664498,
	48755292,
	-39537071,
	-15628937,
	137336740,
	-354262329,
	870680866,
	1615322057,
	-41539309,
	-131786808,
	147508233,
	-106055607,
	52612111,
	-11928655,
	-8202118,
	11927664,
	-7904248,
	3144506,
	-580085,
	-702100,
	2007792,
	-2234752,
	-2219941,
	14868080,
	-34886310,
	52829074,
	-49645952,
	639794,
	119542187,
	-350306132,
	961834828,
	1565619845,
	-100405765,
	-99630769,
	134360378,
	-104611005,
	56459524,
	-16571642,
	-4945399,
	10395060,
	-7510492,
	3195891,
	-672035,
	-749928,
	2258456,
	-2970704,
	-841715,
	13283501,
	-34568032,
	56257154,
	-59410021,
	17592922,
	99047443,
	-340640289,
	1051218924,
	1508808226,
	-153388565,
	-67607332,
	119777117,
	-101669344,
	59304733,
	-20759919,
	-1773607,
	8788688,
	-7024890,
	3190645,
	-740979,
	-787295,
	2492026,
	-3711616,
	636414,
	11400833,
	-33689089,
	58957335,
	-68663075,
	34999579,
	76030543,
	-325023061,
	1138067845,
	1445404574,
	-200275317,
	-36161434,
	104031626,
	-97334313,
	61146157,
	-24449846,
	1268535,
	7137836,
	-6461236,
	3133320,
	-787925,
	-811926,
	2702409,
	-4444806,
	2195742,
	9234974,
	-32237008,
	60855417,
	-77240004,
	52612369,
	50714255,
	-303269701,
	1221628537,
	1375983080,
	-240922675,
	-5709461,
	87402666,
	-91726184,
	61997455,
	-27607338,
	4140474,
	5470920,
	-5833756,
	3029058,
	-814243,
	-821606,
	2883451,
	-5156844,
	3815068,
	6806275,
	-30207984,
	61886708,
	-84979395,
	70170405,
	23364898,
	-275256248,
	1301168363,
	1301168363,
	-275256248,
	23364898,
	70170405,
	-84979395,
	61886708,
	-30207984,
	6806275,
	3815068,
	-5156844,
	2883451,
	-821606,
	-814243,
	3029058,
	-5833756,
	5470920,
	4140474,
	-27607338,
	61997455,
	-91726184,
	87402666,
	-5709461,
	-240922675,
	1375983080,
	1221628537,
	-303269701,
	50714255,
	52612369,
	-77240004,
	60855417,
	-32237008,
	9234974,
	2195742,
	-4444806,
	2702409,
	-811926,
	-787925,
	3133320,
	-6461236,
	7137836,
	1268535,
	-24449846,
	61146157,
	-97334313,
	104031626,
	-36161434,
	-200275317,
	1445404574,
	1138067845,
	-325023061,
	76030543,
	34999579,
	-68663075,
	58957335,
	-33689089,
	11400833,
	636414,
	-3711616,
	2492026,
	-787295,
	-740979,
	3190645,
	-7024890,
	8788688,
	-1773607,
	-20759919,
	59304733,
	-101669344,
	119777117,
	-67607332,
	-153388565,
	1508808226,
	1051218924,
	-340640289,
	99047443,
	17592922,
	-59410021,
	56257154,
	-34568032,
	13283501,
	-841715,
	-2970704,
	2258456,
	-749928,
	-672035,
	3195891,
	-7510492,
	10395060,
	-4945399,
	-16571642,
	56459524,
	-104611005,
	134360378,
	-99630769,
	-100405765,
	1565619845,
	961834828,
	-350306132,
	119542187,
	639794,
	-49645952,
	52829074,
	-34886310,
	14868080,
	-2219941,
	-2234752,
	2007792,
	-702100,
	-580085,
	3144506,
	-7904248,
	11927664,
	-8202118,
	-11928655,
	52612111,
	-106055607,
	147508233,
	-131786808,
	-41539309,
	1615322057,
	870680866,
	-354262329,
	137336740,
	-15628937,
	-39537071,
	48755292,
	-34664498,
	16145101,
	-3482224,
	-1515527,
	1745957,
	-646093,
	-464532,
	3032655,
	-8193080,
	13356795,
	-11495410,
	-6883867,
	47779920,
	-105918306,
	158957350,
	-163606610,
	22930095,
	1657460088,
	778526400,
	-352803221,
	152298364,
	-31001624,
	-29248144,
	44124413,
	-33930591,
	17110411,
	-4615315,
	-823733,
	1478608,
	-584147,
	-325247,
	2857354,
	-8364899,
	14652821,
	-14773912,
	-1499013,
	41996600,
	-104135159,
	168458510,
	-194602537,
	92654981,
	1691646861,
	686136662,
	-346270827,
	164339561,
	-45288162,
	-18940097,
	39029842,
	-32719242,
	17764978,
	-5608813,
	-168892,
	1211045,
	-518413,
	-162609,
	2616587,
	-8408890,
	15786690,
	-17983964,
	4155952,
	35312162,
	-100664939,
	175780844,
	-224273657,
	167223505,
	1717567345,
	594264716,
	-335049471,
	173417432,
	-58321909,
	-8767749,
	33568150,
	-31070927,
	18114631,
	-6455183,
	440744,
	948139,
	-450909,
	22455,
	2309419,
	-8315783,
	16730463,
	-21070379,
	10003627,
	27792862,
	-95490678,
	180715950,
	-252111583,
	246162632,
	1734982105,
	503643649,
	-319560029,
	179532461,
	-69961206,
	1122270,
	27837466,
	-29031052,
	18169720,
	-7149721,
	998258,
	694269,
	-383490,
	228448,
	1936090,
	-8078116,
	17457847,
	-23977287,
	15960077,
	19520825,
	-88620892,
	183081861,
	-277606581,
	328942092,
	1743730000,
	414979081,
	-300253868,
	182726767,
	-80090473,
	10593403,
	21935909,
	-26649022,
	17944732,
	-7690475,
	1498098,
	453281,
	-317819

};

struct src_stage src_int32_21_20_3125_5000 = {
	19, 20, 21, 24, 504, 20, 21, 0, 0,
	src_int32_21_20_3125_5000_fir};
