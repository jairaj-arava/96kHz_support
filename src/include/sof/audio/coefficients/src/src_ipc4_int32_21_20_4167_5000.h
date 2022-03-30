/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2022 Intel Corporation. All rights reserved.
 *
 */

#include <sof/audio/src/src.h>
#include <stdint.h>

const int32_t src_int32_21_20_4167_5000_fir[1092] = {
	-109235,
	136395,
	-51591,
	-234644,
	817290,
	-1775757,
	3146767,
	-4894585,
	6883424,
	-8857664,
	10435523,
	-11120682,
	10334275,
	-7466719,
	1945499,
	6688219,
	-18703959,
	34118641,
	-52657289,
	73748688,
	-96566409,
	120129259,
	-143496775,
	166197636,
	-189619494,
	226160889,
	1967060275,
	127599915,
	-145663735,
	142367499,
	-130750266,
	114434247,
	-95544151,
	75753181,
	-56458728,
	38780678,
	-23529815,
	11189831,
	-1926425,
	-4375410,
	8051434,
	-9584510,
	9527499,
	-8432333,
	6792878,
	-5006293,
	3354383,
	-2003413,
	1018588,
	-387973,
	50310,
	78259,
	-136165,
	195425,
	-157683,
	-69985,
	592265,
	-1505708,
	2871688,
	-4685182,
	6843916,
	-9123578,
	11165002,
	-12478477,
	12468439,
	-10478997,
	5857317,
	1971715,
	-13429326,
	28717580,
	-47779246,
	70299349,
	-95770993,
	123669372,
	-153857022,
	187681193,
	-232162613,
	330443065,
	1954708148,
	35584846,
	-101124946,
	116700767,
	-115915836,
	106739729,
	-92761469,
	76304070,
	-59133186,
	42630490,
	-27825095,
	15396402,
	-5686724,
	-1264592,
	5665836,
	-7902698,
	8462105,
	-7859479,
	6577370,
	-5020932,
	3492656,
	-2185761,
	1193191,
	-527494,
	146233,
	22139,
	-162444,
	254143,
	-266003,
	103189,
	347066,
	-1197116,
	2532412,
	-4379343,
	6671648,
	-9220968,
	11697708,
	-13627860,
	14409879,
	-13353021,
	9735112,
	-2873878,
	-7797833,
	22666157,
	-41896402,
	65441472,
	-93133749,
	124935993,
	-161568847,
	206333340,
	-272447499,
	439529127,
	1930144129,
	-49161330,
	-56804912,
	89723061,
	-99321743,
	97234228,
	-88306969,
	75419770,
	-60652238,
	45611411,
	-31519455,
	19234832,
	-9267154,
	1807043,
	3224375,
	-6110007,
	7262993,
	-7153489,
	6244225,
	-4940951,
	3561079,
	-2320848,
	1338755,
	-651099,
	234591,
	-30951,
	-187398,
	311278,
	-374446,
	281773,
	85782,
	-854724,
	2133559,
	-3980246,
	6366420,
	-9143760,
	12018779,
	-14542137,
	16117315,
	-16031004,
	13504155,
	-7758634,
	-1909953,
	16067101,
	-35101032,
	59238778,
	-88664774,
	123850393,
	-166412045,
	221703776,
	-309624970,
	552419682,
	1893646780,
	-126024893,
	-13466473,
	61966116,
	-81319513,
	86135217,
	-82298334,
	73144997,
	-61009530,
	47684064,
	-34555113,
	22640308,
	-12604174,
	4782721,
	774012,
	-4242524,
	5955789,
	-6330914,
	5802803,
	-4770526,
	3560491,
	-2407691,
	1453579,
	-757077,
	314027,
	-80116,
	-210336,
	365519,
	-480800,
	462421,
	-187026,
	-484102,
	1681062,
	-3492975,
	5930609,
	-8889108,
	12117086,
	-15198541,
	17553080,
	-18457734,
	17090321,
	-12590141,
	4127038,
	9035520,
	-27504532,
	51781748,
	-82408959,
	120376109,
	-168213535,
	233385780,
	-342855008,
	668045095,
	1845629217,
	-194507300,
	28176729,
	33958426,
	-62277050,
	73684499,
	-74879557,
	69549430,
	-60220479,
	48826772,
	-36887691,
	25557359,
	-15640048,
	7608611,
	-1639109,
	-2336949,
	4567565,
	-5410096,
	5264266,
	-4515431,
	3493020,
	-2446262,
	1536619,
	-844132,
	383426,
	-124595,
	-230565,
	415544,
	-582794,
	641606,
	-466398,
	-91562,
	1182087,
	-2924477,
	5369185,
	-8457522,
	11985535,
	-15578762,
	18683923,
	-20581692,
	20421518,
	-17275222,
	10200975,
	1696953,
	-19235676,
	43186450,
	-74445887,
	114520621,
	-166851802,
	241024790,
	-371319689,
	785278464,
	1786633506,
	-254229386,
	67469479,
	6216212,
	-42571625,
	60143255,
	-66217750,
	64725931,
	-58321577,
	49035632,
	-38486801,
	27940723,
	-18323817,
	10234786,
	-3970514,
	-429894,
	3126288,
	-4410785,
	4641320,
	-4182881,
	3362001,
	-2437458,
	1587482,
	-911392,
	441928,
	-163770,
	-247405,
	460045,
	-678135,
	815686,
	-747059,
	315941,
	644928,
	-2283475,
	4689687,
	-7852949,
	11621300,
	-15669396,
	19481742,
	-22356106,
	23429106,
	-21721696,
	16196849,
	-5814825,
	-10438511,
	33592861,
	-64889083,
	106336253,
	-162260534,
	244326345,
	-394236092,
	902949542,
	1717323334,
	-304933815,
	103823085,
	-20765167,
	-22582863,
	45786840,
	-56499591,
	58788378,
	-55369312,
	48324258,
	-39336345,
	29755999,
	-20612123,
	12616074,
	-6178201,
	1442812,
	1660279,
	-3353723,
	3947934,
	-3781360,
	3171877,
	-2383052,
	1606411,
	-958408,
	488930,
	-197170,
	-260211,
	497762,
	-764561,
	980971,
	-1023517,
	730925,
	78877,
	-1580353,
	3902142,
	-7082776,
	11025970,
	-15462310,
	19924232,
	-23739949,
	26049281,
	-25840159,
	21998948,
	-13360183,
	-1269924,
	23162710,
	-53884618,
	95920272,
	-154431360,
	243063253,
	-410868985,
	1019859438,
	1638475043,
	-346485775,
	136722229,
	-46519194,
	-2685858,
	30899438,
	-45927477,
	51869139,
	-51438744,
	46723200,
	-39434555,
	30980087,
	-22469874,
	14712822,
	-8223382,
	3246778,
	197661,
	-2260230,
	3199042,
	-3320418,
	2928081,
	-2285631,
	1594256,
	-985147,
	524094,
	-224474,
	-268386,
	527507,
	-839889,
	1133798,
	-1290162,
	1145514,
	-505926,
	-826991,
	3018932,
	-6157768,
	10205627,
	-14954917,
	19995435,
	-24698842,
	28224389,
	-29545745,
	27493040,
	-20796179,
	8103082,
	12076862,
	-41609070,
	83414160,
	-143415617,
	237081832,
	-420543080,
	1134795867,
	1550967172,
	-378871920,
	165730506,
	-70615480,
	16755459,
	15768674,
	-34715480,
	44116266,
	-46621754,
	44279061,
	-38793756,
	31601405,
	-23870745,
	16491523,
	-10071144,
	4949669,
	-1234163,
	-1151784,
	2410231,
	-2810459,
	2636898,
	-2148518,
	1552435,
	-991974,
	547332,
	-245511,
	-271398,
	548199,
	-902060,
	1270604,
	-1541378,
	1551584,
	-1098667,
	-36580,
	2054617,
	-5091948,
	9170827,
	-14150344,
	19686180,
	-25205847,
	29904151,
	-32759834,
	32568588,
	-27979214,
	17506355,
	532296,
	-28266877,
	69002052,
	-129325098,
	226307119,
	-422654683,
	1246548745,
	1455768663,
	-402197614,
	190494577,
	-92666216,
	35394604,
	680276,
	-23085151,
	35690442,
	-41025019,
	41053320,
	-37439868,
	31619888,
	-24797499,
	17925325,
	-11691026,
	6521774,
	-2609013,
	-49613,
	1597431,
	-2262524,
	2305325,
	-1975685,
	1482886,
	-979628,
	558802,
	-260251,
	-268802,
	558892,
	-949192,
	1388009,
	-1771650,
	1940908,
	-1688054,
	776599,
	1025706,
	-3902400,
	7936504,
	-13057499,
	18994401,
	-25242133,
	31046769,
	-35411671,
	37120916,
	-34767746,
	26761753,
	-11261286,
	-14087111,
	52908363,
	-112331737,
	210746913,
	-416682526,
	1353925896,
	1353925896,
	-416682526,
	210746913,
	-112331737,
	52908363,
	-14087111,
	-11261286,
	26761753,
	-34767746,
	37120916,
	-35411671,
	31046769,
	-25242133,
	18994401,
	-13057499,
	7936504,
	-3902400,
	1025706,
	776599,
	-1688054,
	1940908,
	-1771650,
	1388009,
	-949192,
	558892,
	-268802,
	-260251,
	558802,
	-979628,
	1482886,
	-1975685,
	2305325,
	-2262524,
	1597431,
	-49613,
	-2609013,
	6521774,
	-11691026,
	17925325,
	-24797499,
	31619888,
	-37439868,
	41053320,
	-41025019,
	35690442,
	-23085151,
	680276,
	35394604,
	-92666216,
	190494577,
	-402197614,
	1455768663,
	1246548745,
	-422654683,
	226307119,
	-129325098,
	69002052,
	-28266877,
	532296,
	17506355,
	-27979214,
	32568588,
	-32759834,
	29904151,
	-25205847,
	19686180,
	-14150344,
	9170827,
	-5091948,
	2054617,
	-36580,
	-1098667,
	1551584,
	-1541378,
	1270604,
	-902060,
	548199,
	-271398,
	-245511,
	547332,
	-991974,
	1552435,
	-2148518,
	2636898,
	-2810459,
	2410231,
	-1151784,
	-1234163,
	4949669,
	-10071144,
	16491523,
	-23870745,
	31601405,
	-38793756,
	44279061,
	-46621754,
	44116266,
	-34715480,
	15768674,
	16755459,
	-70615480,
	165730506,
	-378871920,
	1550967172,
	1134795867,
	-420543080,
	237081832,
	-143415617,
	83414160,
	-41609070,
	12076862,
	8103082,
	-20796179,
	27493040,
	-29545745,
	28224389,
	-24698842,
	19995435,
	-14954917,
	10205627,
	-6157768,
	3018932,
	-826991,
	-505926,
	1145514,
	-1290162,
	1133798,
	-839889,
	527507,
	-268386,
	-224474,
	524094,
	-985147,
	1594256,
	-2285631,
	2928081,
	-3320418,
	3199042,
	-2260230,
	197661,
	3246778,
	-8223382,
	14712822,
	-22469874,
	30980087,
	-39434555,
	46723200,
	-51438744,
	51869139,
	-45927477,
	30899438,
	-2685858,
	-46519194,
	136722229,
	-346485775,
	1638475043,
	1019859438,
	-410868985,
	243063253,
	-154431360,
	95920272,
	-53884618,
	23162710,
	-1269924,
	-13360183,
	21998948,
	-25840159,
	26049281,
	-23739949,
	19924232,
	-15462310,
	11025970,
	-7082776,
	3902142,
	-1580353,
	78877,
	730925,
	-1023517,
	980971,
	-764561,
	497762,
	-260211,
	-197170,
	488930,
	-958408,
	1606411,
	-2383052,
	3171877,
	-3781360,
	3947934,
	-3353723,
	1660279,
	1442812,
	-6178201,
	12616074,
	-20612123,
	29755999,
	-39336345,
	48324258,
	-55369312,
	58788378,
	-56499591,
	45786840,
	-22582863,
	-20765167,
	103823085,
	-304933815,
	1717323334,
	902949542,
	-394236092,
	244326345,
	-162260534,
	106336253,
	-64889083,
	33592861,
	-10438511,
	-5814825,
	16196849,
	-21721696,
	23429106,
	-22356106,
	19481742,
	-15669396,
	11621300,
	-7852949,
	4689687,
	-2283475,
	644928,
	315941,
	-747059,
	815686,
	-678135,
	460045,
	-247405,
	-163770,
	441928,
	-911392,
	1587482,
	-2437458,
	3362001,
	-4182881,
	4641320,
	-4410785,
	3126288,
	-429894,
	-3970514,
	10234786,
	-18323817,
	27940723,
	-38486801,
	49035632,
	-58321577,
	64725931,
	-66217750,
	60143255,
	-42571625,
	6216212,
	67469479,
	-254229386,
	1786633506,
	785278464,
	-371319689,
	241024790,
	-166851802,
	114520621,
	-74445887,
	43186450,
	-19235676,
	1696953,
	10200975,
	-17275222,
	20421518,
	-20581692,
	18683923,
	-15578762,
	11985535,
	-8457522,
	5369185,
	-2924477,
	1182087,
	-91562,
	-466398,
	641606,
	-582794,
	415544,
	-230565,
	-124595,
	383426,
	-844132,
	1536619,
	-2446262,
	3493020,
	-4515431,
	5264266,
	-5410096,
	4567565,
	-2336949,
	-1639109,
	7608611,
	-15640048,
	25557359,
	-36887691,
	48826772,
	-60220479,
	69549430,
	-74879557,
	73684499,
	-62277050,
	33958426,
	28176729,
	-194507300,
	1845629217,
	668045095,
	-342855008,
	233385780,
	-168213535,
	120376109,
	-82408959,
	51781748,
	-27504532,
	9035520,
	4127038,
	-12590141,
	17090321,
	-18457734,
	17553080,
	-15198541,
	12117086,
	-8889108,
	5930609,
	-3492975,
	1681062,
	-484102,
	-187026,
	462421,
	-480800,
	365519,
	-210336,
	-80116,
	314027,
	-757077,
	1453579,
	-2407691,
	3560491,
	-4770526,
	5802803,
	-6330914,
	5955789,
	-4242524,
	774012,
	4782721,
	-12604174,
	22640308,
	-34555113,
	47684064,
	-61009530,
	73144997,
	-82298334,
	86135217,
	-81319513,
	61966116,
	-13466473,
	-126024893,
	1893646780,
	552419682,
	-309624970,
	221703776,
	-166412045,
	123850393,
	-88664774,
	59238778,
	-35101032,
	16067101,
	-1909953,
	-7758634,
	13504155,
	-16031004,
	16117315,
	-14542137,
	12018779,
	-9143760,
	6366420,
	-3980246,
	2133559,
	-854724,
	85782,
	281773,
	-374446,
	311278,
	-187398,
	-30951,
	234591,
	-651099,
	1338755,
	-2320848,
	3561079,
	-4940951,
	6244225,
	-7153489,
	7262993,
	-6110007,
	3224375,
	1807043,
	-9267154,
	19234832,
	-31519455,
	45611411,
	-60652238,
	75419770,
	-88306969,
	97234228,
	-99321743,
	89723061,
	-56804912,
	-49161330,
	1930144129,
	439529127,
	-272447499,
	206333340,
	-161568847,
	124935993,
	-93133749,
	65441472,
	-41896402,
	22666157,
	-7797833,
	-2873878,
	9735112,
	-13353021,
	14409879,
	-13627860,
	11697708,
	-9220968,
	6671648,
	-4379343,
	2532412,
	-1197116,
	347066,
	103189,
	-266003,
	254143,
	-162444,
	22139,
	146233,
	-527494,
	1193191,
	-2185761,
	3492656,
	-5020932,
	6577370,
	-7859479,
	8462105,
	-7902698,
	5665836,
	-1264592,
	-5686724,
	15396402,
	-27825095,
	42630490,
	-59133186,
	76304070,
	-92761469,
	106739729,
	-115915836,
	116700767,
	-101124946,
	35584846,
	1954708148,
	330443065,
	-232162613,
	187681193,
	-153857022,
	123669372,
	-95770993,
	70299349,
	-47779246,
	28717580,
	-13429326,
	1971715,
	5857317,
	-10478997,
	12468439,
	-12478477,
	11165002,
	-9123578,
	6843916,
	-4685182,
	2871688,
	-1505708,
	592265,
	-69985,
	-157683,
	195425,
	-136165,
	78259,
	50310,
	-387973,
	1018588,
	-2003413,
	3354383,
	-5006293,
	6792878,
	-8432333,
	9527499,
	-9584510,
	8051434,
	-4375410,
	-1926425,
	11189831,
	-23529815,
	38780678,
	-56458728,
	75753181,
	-95544151,
	114434247,
	-130750266,
	142367499,
	-145663735,
	127599915,
	1967060275,
	226160889,
	-189619494,
	166197636,
	-143496775,
	120129259,
	-96566409,
	73748688,
	-52657289,
	34118641,
	-18703959,
	6688219,
	1945499,
	-7466719,
	10334275,
	-11120682,
	10435523,
	-8857664,
	6883424,
	-4894585,
	3146767,
	-1775757,
	817290,
	-234644,
	-51591,
	136395,
	-109235

};

struct src_stage src_int32_21_20_4167_5000 = {
	19, 20, 21, 52, 1092, 20, 21, 0, 0,
	src_int32_21_20_4167_5000_fir};
