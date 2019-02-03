#ifndef PEPPA_H_
#define PEPPA_H_

#define HB_LUT_LENGTH 985


/*
 *     X - Axis
 *     Scan Signal
 */
uint32_t X_LUT[] = {
		//  Peppa
		/*
		270, 270, 270, 300, 300, 300, 330, 330, 360, 360, 390, 390, 390, 420, 420,
		450, 450, 450, 480, 480, 510, 510, 540, 540, 540, 540, 570, 570, 570, 570,
		570, 570, 570, 570, 570, 570, 600, 600, 600, 600, 600, 600, 600, 600, 600,
		600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 630,
		630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630,
		660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 690, 690, 690,
		690, 690, 690, 690, 690, 690, 690, 690, 690, 690, 720, 720, 720, 720, 720,
		720, 720, 720, 720, 720, 720, 720, 720, 720, 750, 750, 750, 750, 750, 750,
		750, 750, 750, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 810, 810,
		810, 810, 810, 810, 810, 810, 840, 840, 840, 840, 840, 840, 840, 840, 840,
		840, 840, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870,
		870, 870, 870, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900,
		900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 930, 930, 930, 930, 930,
		930, 930, 930, 930, 930, 930, 930, 930, 930, 930, 930, 930, 960, 960, 960,
		960, 960, 960, 960, 960, 960, 960, 960, 990, 990, 990, 990, 990, 990, 990,
		990, 990, 990, 990, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020,
		1020, 1020, 1020, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050,
		1050, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1110, 1110, 1110, 1110, 1110,
		1110, 1110, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1170, 1170, 1170,
		1170, 1170, 1170, 1170, 1170, 1170, 1200, 1200, 1200, 1200, 1200, 1200, 1200,
		1200, 1200, 1200, 1230, 1230, 1230, 1230, 1230, 1230, 1230, 1230, 1260, 1260,
		1260, 1290, 1290, 1290, 1320, 1320, 1350, 1350, 1380, 1380, 1380, 1410, 1410,
		1440, 1440, 1440, 1440, 1440, 1440, 1440, 1440, 1470, 1470, 1470, 1470, 1470,
		1470, 1500, 1500, 1500, 1500, 1500, 1500, 1530, 1530, 1530, 1530, 1530, 1530,
		1560, 1560, 1560, 1560, 1560, 1590, 1590, 1590, 1590, 1620, 1620, 1620, 1620,
		1650, 1650, 1650, 1650, 1680, 1680, 1680, 1680, 1680, 1710, 1710, 1710, 1710,
		1710, 1740, 1740, 1740, 1740, 1770, 1770, 1770, 1770, 1770, 1800, 1800, 1800,
		1800, 1830, 1830, 1830, 1830, 1830, 1830, 1860, 1860, 1860, 1860, 1860, 1890,
		1890, 1890, 1890, 1890, 1890, 1920, 1920, 1920, 1920, 1920, 1920, 1950, 1950,
		1950, 1950, 1950, 1950, 1950, 1950, 1950, 1980, 1980, 1980, 1980, 2010, 2010,
		2010, 2010, 2040, 2040, 2040, 2040, 2040, 2070, 2070, 2070, 2070, 2070, 2070,
		2100, 2100, 2100, 2100, 2100, 2100, 2130, 2130, 2130, 2130, 2130, 2130, 2130,
		2130, 2130, 2130, 2130, 2160, 2160, 2160, 2190, 2190, 2220, 2220, 2250, 2250,
		2280, 2280, 2310, 2310, 2310, 2340, 2340, 2340, 2370, 2370, 2370, 2370, 2400,
		2400, 2400, 2400, 2400, 2430, 2430, 2430, 2430, 2430, 2460, 2460, 2460, 2460,
		2460, 2460, 2490, 2490, 2490, 2490, 2520, 2520, 2520, 2520, 2520, 2520, 2550,
		2550, 2550, 2550, 2550, 2550, 2580, 2580, 2580, 2580, 2580, 2580, 2580, 2580,
		2580, 2610, 2610, 2610, 2610, 2610, 2610, 2610, 2610, 2610, 2610, 2610, 2610,
		2610, 2610, 2610, 2610, 2610, 2640, 2640, 2670, 2670, 2670, 2670, 2670, 2670,
		2670, 2700, 2700, 2700, 2700, 2700, 2700, 2700, 2700, 2730, 2730, 2730, 2730,
		2730, 2730, 2730, 2760, 2760, 2760, 2760, 2760, 2760, 2760, 2790, 2790, 2790,
		2790, 2790, 2790, 2790, 2790, 2790, 2790, 2790, 2790, 2820, 2820, 2820, 2820,
		2820, 2820, 2820, 2820, 2820, 2820, 2850, 2850, 2850, 2850, 2850, 2850, 2850,
		2880, 2880, 2880, 2880, 2880, 2880, 2880, 2910, 2910, 2910, 2910, 2910, 2910,
		2910, 2910, 2910, 2940, 2940, 2940, 2940, 2940, 2940, 2940, 2940, 2970, 2970,
		2970, 2970, 2970, 2970, 3000, 3000, 3000, 3000, 3000, 3000, 3030, 3030, 3030,
		3030, 3030, 3060, 3060, 3090, 3090, 3120, 3120, 3150, 3150, 3180, 3180, 3180,
		3180, 3180, 3180, 3210, 3210, 3210, 3210, 3240, 3240, 3240, 3240, 3270, 3270,
		3270, 3270, 3300, 3300, 3300, 3300, 3330, 3330, 3330, 3330, 3330, 3330, 3360,
		3360, 3360, 3360, 3360, 3360, 3360, 3390, 3390, 3390, 3390, 3390, 3390, 3390,
		3390, 3420, 3420, 3420, 3420, 3420, 3450, 3450, 3450, 3450, 3450, 3450, 3450,
		3450, 3450, 3450, 3450, 3450, 3480, 3480, 3510, 3510, 3540, 3540, 3570, 3570,
		3600, 3600, 3630, 3630, 3630, 3660, 3660, 3660, 3690, 3690, 3690, 3720, 3720,
		3750, 3750, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780,
		3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780,
		3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780,
		3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780,
		3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780,
		3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3780, 3810, 3810, 3810,
		3810, 3810, 3840, 3840, 3840, 3840, 3840, 3870, 3870, 3870, 3870, 3870, 3900,
		3900, 3900, 3900, 3900, 3930, 3930, 3930, 3930, 3930, 3960, 3960, 3960, 3960,
		3960, 3990, 3990, 3990, 3990, 3990, 4020, 4020, 4020, 4020, 4020, 4050, 4050,
		4050, 4050, 4050, 4080, 4080, 4080, 4080, 4080, 4110, 4110, 4110, 4110, 4110,
		4140, 4140, 4140, 4140, 4140, 4170, 4170, 4170, 4170, 4170, 4170, 4170, 4170,
		4170, 4170, 4170, 4170, 4170, 4200, 4200, 4200, 4200, 4200, 4200, 4200, 4200,
		4200, 4200, 4200, 4200, 4200, 4200, 4200, 4200, 4200, 4200, 4200, 4200, 4200,
		4200, 4200, 4200, 4200, 4200, 4200, 4230, 4230, 4230, 4230, 4230, 4230, 4230,
		4230, 4230, 4260, 4260, 4260, 4260, 4290, 4290, 4290, 4290, 4290, 4290, 4290,
		4290, 4290, 4290, 4290, 4290, 4290, 4290, 4290, 4290, 4290, 4290, 4290, 4290,
		4290, 4290, 4290, 4290, 4290, 4290, 4290, 4290, 4290, 4290, 4290, 4290, 4290,
		4290, 4290, 4290
		*/

		//  Infineon
		0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 30, 30, 30, 30, 30, 30, 60, 60, 60, 60, 60, 60,
		90, 90, 90, 90, 90, 90, 120, 120, 120, 120, 120, 120, 150, 150, 150, 150, 150,
		150, 180, 180, 180, 180, 180, 180, 210, 210, 210, 210, 210, 210, 210, 240, 240,
		240, 240, 240, 240, 270, 270, 270, 270, 300, 300, 300, 300, 300, 330, 330, 330,
		330, 330, 330, 330, 330, 360, 360, 360, 360, 360, 360, 360, 360, 360, 390, 390,
		390, 390, 390, 390, 390, 390, 390, 390, 420, 420, 420, 420, 420, 420, 420, 420,
		420, 450, 450, 450, 450, 450, 450, 450, 450, 480, 480, 480, 480, 480, 480, 480,
		480, 480, 480, 510, 510, 510, 510, 510, 510, 510, 510, 510, 540, 540, 540, 540,
		540, 540, 540, 540, 570, 570, 570, 570, 570, 570, 570, 570, 600, 600, 600, 600,
		600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
		600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 630, 630, 630, 630, 630, 630,
		630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630,
		630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 630, 660, 660,
		660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660,
		660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660,
		660, 660, 660, 690, 690, 690, 690, 690, 690, 690, 690, 690, 690, 690, 690, 690,
		690, 690, 690, 690, 690, 690, 690, 690, 690, 690, 690, 690, 690, 690, 690, 690,
		690, 690, 690, 690, 690, 690, 720, 720, 720, 720, 720, 720, 720, 720, 720, 720,
		720, 720, 720, 720, 720, 720, 720, 720, 720, 720, 720, 720, 720, 720, 720, 720,
		720, 720, 720, 720, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750,
		750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750,
		780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780,
		780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 810, 810, 810, 810,
		810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810,
		810, 810, 810, 810, 810, 810, 810, 810, 840, 840, 840, 840, 840, 840, 840, 840,
		840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840,
		840, 840, 840, 840, 840, 840, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870,
		870, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870,
		870, 870, 870, 870, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900,
		900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 900,
		900, 900, 930, 930, 930, 930, 930, 930, 930, 930, 930, 930, 930, 930, 930, 930,
		930, 930, 930, 930, 930, 930, 930, 930, 930, 930, 930, 930, 960, 960, 960, 960,
		960, 960, 960, 960, 960, 960, 960, 960, 960, 960, 960, 960, 960, 960, 960, 960,
		960, 960, 960, 960, 960, 960, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990,
		990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990,
		1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020,
		1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1050, 1050, 1050,
		1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050,
		1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1080, 1080, 1080, 1080,
		1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080,
		1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1080, 1110, 1110, 1110,
		1110, 1110, 1110, 1110, 1110, 1110, 1110, 1110, 1110, 1110, 1110, 1110, 1110, 1110,
		1110, 1110, 1110, 1110, 1110, 1110, 1110, 1110, 1110, 1110, 1110, 1110, 1110, 1140,
		1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140,
		1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140, 1140,
		1170, 1170, 1170, 1170, 1170, 1170, 1170, 1170, 1170, 1170, 1170, 1170, 1170, 1170,
		1170, 1170, 1170, 1170, 1170, 1170, 1170, 1170, 1170, 1170, 1170, 1170, 1170, 1200,
		1200, 1200, 1200, 1230, 1230, 1230, 1230, 1230, 1230, 1260, 1260, 1260, 1260, 1260,
		1290, 1290, 1290, 1290, 1290, 1290, 1320, 1320, 1320, 1320, 1320, 1320, 1350, 1350,
		1350, 1350, 1350, 1350, 1350, 1380, 1380, 1380, 1380, 1380, 1380, 1380, 1410, 1410,
		1410, 1410, 1410, 1410, 1410, 1440, 1440, 1440, 1440, 1440, 1440, 1440, 1440, 1440,
		1470, 1470, 1470, 1470, 1470, 1470, 1470, 1470, 1470, 1500, 1500, 1500, 1500, 1500,
		1500, 1500, 1500, 1500, 1500, 1530, 1530, 1530, 1530, 1530, 1530, 1530, 1530, 1530,
		1530, 1530, 1530, 1560, 1560, 1560, 1560, 1560, 1560, 1560, 1560, 1560, 1560, 1560,
		1560, 1560, 1560, 1590, 1590, 1590, 1590, 1590, 1590, 1590, 1590, 1590, 1590, 1590,
		1590, 1590, 1590, 1620, 1620, 1620, 1620, 1620, 1620, 1620, 1620, 1620, 1620, 1620,
		1620, 1620, 1620, 1620, 1620, 1620, 1620, 1620, 1620, 1650, 1650, 1650, 1650, 1650,
		1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650,
		1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1680, 1680,
		1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680,
		1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680,
		1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710,
		1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1740, 1740, 1740,
		1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740,
		1740, 1740, 1740, 1770, 1770, 1770, 1770, 1770, 1770, 1770, 1770, 1770

		//  new year
		/*
		270, 270, 270, 270, 270, 300, 300, 300, 300, 300, 300, 300, 330, 330, 330, 330, 330, 330,
		330, 330, 330, 330, 330, 330, 330, 330, 330, 330, 360, 360, 360, 360, 360, 360, 360, 360,
		360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
		360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
		390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390,
		390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390,
		390, 390, 420, 420, 420, 420, 420, 420, 420, 420, 420, 450, 450, 450, 450, 450, 450, 450,
		450, 450, 450, 450, 450, 480, 480, 480, 480, 480, 480, 480, 480, 480, 480, 480, 480, 480,
		510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 540, 540, 540, 540, 540, 540, 540,
		540, 540, 540, 540, 540, 540, 540, 540, 540, 540, 540, 540, 540, 540, 540, 570, 570, 570,
		570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570,
		570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570, 570,
		600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
		600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 630, 630, 630,
		630, 630, 630, 630, 630, 630, 630, 660, 660, 660, 660, 660, 660, 660, 660, 660, 660, 690,
		690, 690, 690, 690, 690, 690, 690, 690, 690, 720, 720, 720, 720, 720, 720, 720, 720, 720,
		720, 720, 720, 720, 720, 720, 720, 720, 720, 720, 720, 720, 750, 750, 750, 750, 750, 750,
		750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 750, 780, 780,
		780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780,
		780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 780, 810, 810, 810, 810,
		810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810,
		810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 810, 840, 840,
		840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840,
		840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840,
		870, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870, 870, 900, 900, 900, 900, 900,
		900, 900, 900, 900, 900, 900, 900, 900, 900, 900, 930, 930, 930, 930, 930, 930, 930, 930,
		930, 930, 930, 960, 960, 960, 960, 960, 960, 960, 960, 960, 960, 960, 990, 990, 990, 990,
		990, 990, 990, 990, 990, 990, 990, 990, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020,
		1020, 1020, 1020, 1020, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1050, 1290, 1290,
		1290, 1290, 1320, 1320, 1320, 1320, 1320, 1320, 1320, 1320, 1320, 1320, 1320, 1320, 1320,
		1320, 1350, 1350, 1350, 1350, 1350, 1350, 1350, 1350, 1350, 1350, 1350, 1350, 1350, 1350,
		1350, 1350, 1350, 1350, 1350, 1350, 1350, 1350, 1350, 1350, 1350, 1380, 1380, 1380, 1380,
		1380, 1380, 1380, 1380, 1380, 1380, 1380, 1380, 1380, 1380, 1380, 1380, 1380, 1380, 1380,
		1410, 1410, 1410, 1410, 1410, 1410, 1440, 1440, 1440, 1440, 1440, 1440, 1440, 1440, 1440,
		1440, 1440, 1440, 1440, 1440, 1440, 1440, 1440, 1440, 1440, 1470, 1470, 1470, 1470, 1470,
		1470, 1470, 1470, 1470, 1470, 1470, 1470, 1470, 1470, 1470, 1470, 1470, 1470, 1470, 1470,
		1470, 1470, 1470, 1470, 1470, 1470, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500,
		1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1530, 1530, 1530, 1530, 1530, 1530, 1530,
		1530, 1530, 1530, 1530, 1530, 1530, 1530, 1530, 1530, 1530, 1530, 1560, 1560, 1560, 1560,
		1560, 1560, 1560, 1560, 1560, 1560, 1560, 1560, 1560, 1560, 1560, 1560, 1560, 1590, 1590,
		1590, 1590, 1590, 1590, 1590, 1590, 1590, 1590, 1590, 1590, 1590, 1590, 1590, 1620, 1620,
		1620, 1620, 1620, 1620, 1620, 1620, 1620, 1620, 1620, 1620, 1620, 1620, 1620, 1620, 1650,
		1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650,
		1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650, 1650,
		1650, 1650, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680,
		1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680, 1680,
		1680, 1680, 1680, 1680, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710,
		1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1710, 1740, 1740,
		1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740, 1740,
		1740, 1740, 1740, 1740, 1740, 1740, 1740, 1770, 1770, 1770, 1770, 1770, 1770, 1770, 1770,
		1770, 1770, 1770, 1770, 1770, 1800, 1800, 1800, 1800, 1800, 1800, 1800, 1800, 1800, 1800,
		1800, 1800, 1800, 1800, 1800, 1800, 1830, 1830, 1830, 1830, 1830, 1830, 1830, 1830, 1830,
		1830, 1830, 1830, 1830, 1830, 1830, 1830, 1860, 1860, 1860, 1860, 1860, 1860, 1860, 1860,
		1860, 1860, 1860, 1860, 1860, 1860, 1860, 1860, 1890, 1890, 1890, 1890, 1890, 1890, 1890,
		1890, 1890, 1890, 1890, 1890, 1890, 1890, 1890, 1890, 1890, 1890, 1920, 1920, 1920, 1920,
		1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1950,
		1950, 1950, 1950, 1950, 1950, 1950, 1950, 1950, 1950, 1950, 1950, 1950, 1950, 1950, 1950,
		1950, 1950, 1980, 1980, 1980, 1980, 1980, 1980, 1980, 1980, 1980, 1980, 1980, 1980, 1980,
		1980, 1980, 1980, 1980, 1980, 2010, 2010, 2010, 2010, 2010, 2010, 2010, 2010, 2010, 2010,
		2010, 2010, 2010, 2010, 2010, 2010, 2010, 2010, 2010, 2010, 2010, 2040, 2040, 2040, 2040,
		2040, 2040, 2040, 2040, 2040, 2040, 2040, 2040, 2040, 2040, 2040, 2040, 2040, 2070, 2070,
		2070, 2070, 2070
		*/
};

/*
 *   Y - Axis
 *   Image Signal
 */
uint32_t Y_LUT[] = {
		//  Peppa
		/*
	    1950, 1980, 2010, 1950, 2040, 2070, 1920, 2100, 1920, 2130, 1920, 2130, 2160,
		1920, 2160, 1920, 2160, 2190, 1920, 2190, 1920, 2190, 1500, 1530, 1920, 2220,
		1440, 1470, 1560, 1590, 1950, 2220, 3150, 3180, 3210, 3240, 1410, 1620, 1950,
		2220, 2670, 2700, 2730, 2760, 2790, 2820, 2850, 2880, 2910, 2940, 2970, 3000,
		3030, 3060, 3090, 3120, 3270, 3300, 3330, 1410, 1650, 1680, 1950, 1980, 2220,
		2550, 2580, 2610, 2640, 2670, 2700, 3060, 3330, 3360, 3390, 1410, 1680, 1980,
		2220, 2400, 2430, 2460, 2490, 2520, 3030, 3390, 3420, 1410, 1710, 2010, 2220,
		2280, 2310, 2340, 2370, 2400, 2580, 2610, 3030, 3450, 1410, 1710, 1740, 2010,
		2190, 2220, 2250, 2280, 2520, 2550, 2640, 2670, 3000, 3480, 1410, 1740, 2040,
		2130, 2160, 2490, 2700, 3000, 3510, 1410, 1440, 1740, 2040, 2070, 2100, 2460,
		2730, 3000, 3510, 1440, 1770, 1980, 2010, 2430, 2760, 3000, 3540, 1440, 1770,
		1920, 1950, 2430, 2760, 3000, 3360, 3390, 3420, 3540, 1470, 1770, 1860, 1890,
		2430, 2520, 2550, 2580, 2760, 3000, 3180, 3210, 3240, 3360, 3420, 3570, 1470,
		1770, 1800, 1830, 2100, 2130, 2160, 2190, 2220, 2430, 2520, 2580, 2610, 2760,
		3000, 3150, 3240, 3270, 3360, 3390, 3420, 3570, 1500, 1740, 1770, 2040, 2070,
		2220, 2250, 2430, 2520, 2550, 2580, 2760, 3030, 3150, 3240, 3270, 3570, 1530,
		1710, 2040, 2280, 2430, 2760, 3030, 3180, 3210, 3240, 3570, 1560, 1650, 1680,
		2010, 2280, 2310, 2460, 2730, 3030, 3570, 3600, 1590, 1620, 2010, 2100, 2130,
		2310, 2490, 2520, 2670, 2700, 3060, 3570, 1590, 2010, 2070, 2160, 2310, 2550,
		2580, 2610, 2640, 3060, 3570, 1560, 2010, 2070, 2160, 2310, 3090, 3570, 1530,
		2010, 2100, 2130, 2310, 3120, 3540, 1500, 1530, 2040, 2280, 3120, 3150, 3510,
		3540, 1470, 1500, 2040, 2070, 2250, 3150, 3180, 3480, 3510, 1470, 2100, 2130,
		2160, 2190, 2220, 3210, 3240, 3450, 3480, 1440, 1470, 3270, 3300, 3330, 3360,
		3390, 3420, 1440, 3360, 3390, 1410, 3330, 3360, 1410, 3300, 1380, 3270, 1380,
		3210, 3240, 1350, 3180, 1350, 1650, 1680, 1710, 1740, 1770, 3120, 3150, 1350,
		1560, 1590, 1830, 3060, 3090, 1320, 1350, 1500, 1530, 1860, 3030, 1320, 1350,
		1500, 1890, 2970, 3000, 1320, 1470, 1920, 2940, 2970, 1320, 1470, 1920, 2940,
		1320, 1470, 1950, 2940, 1320, 1470, 1950, 2970, 1290, 1470, 1500, 1950, 2970,
		1290, 1500, 1950, 2970, 3000, 1290, 1500, 1950, 3000, 1290, 1500, 1530, 1950,
		3000, 1290, 1530, 1950, 3030, 1320, 1530, 1560, 1950, 2790, 3030, 1320, 1560,
		1920, 2790, 3030, 1320, 1590, 1620, 1890, 2790, 3030, 1320, 1650, 1680, 1860,
		2760, 3030, 1320, 1350, 1710, 1740, 1770, 1800, 2100, 2760, 3030, 1350, 2130,
		2730, 3030, 1350, 2160, 2700, 3030, 1350, 2160, 2670, 2700, 3030, 1380, 2190,
		2220, 2640, 2670, 3000, 1380, 2250, 2280, 2580, 2610, 3000, 1380, 2310, 2340,
		2370, 2400, 2430, 2460, 2490, 2520, 2550, 3000, 1410, 2970, 3000, 1410, 2970,
		1440, 2940, 1440, 2940, 1470, 2910, 1470, 1500, 2880, 1500, 1530, 2850, 1530,
		1560, 2820, 2850, 1500, 1560, 1590, 2790, 2880, 1500, 1590, 1620, 2760, 2880,
		1470, 1650, 1680, 2700, 2730, 2910, 1470, 1710, 2670, 2910, 1440, 1740, 1770,
		2610, 2640, 2940, 1440, 1800, 1830, 2520, 2550, 2940, 1410, 1890, 1920, 1950,
		2400, 2430, 2460, 2490, 2970, 1410, 1980, 2010, 2040, 2070, 2100, 2130, 2160,
		2190, 2220, 2250, 2280, 2310, 2340, 2370, 2970, 3000, 1380, 3000, 1290, 1320,
		1350, 1380, 3000, 3030, 3060, 1170, 1200, 1230, 1350, 3030, 3090, 3120, 3150,
		1080, 1110, 1140, 1350, 3030, 3180, 3210, 1020, 1050, 1320, 1350, 3060, 3270,
		3690, 690, 720, 750, 780, 960, 990, 1320, 3060, 3330, 3600, 3630, 3660, 810,
		840, 900, 930, 1320, 3060, 3390, 3420, 3540, 3570, 840, 870, 1290, 3090, 3450,
		3480, 3510, 810, 840, 870, 1290, 3090, 3480, 3510, 750, 780, 840, 1260, 3090,
		3480, 3510, 3540, 3570, 720, 750, 840, 1260, 3120, 3510, 3600, 3630, 690, 840,
		1260, 3120, 3510, 3660, 660, 840, 1230, 1260, 3150, 3510, 840, 1230, 3150, 3510,
		3540, 1230, 3150, 1230, 3180, 1200, 3180, 1200, 3180, 930, 960, 990, 1020, 1200,
		3180, 900, 1050, 1200, 3180, 870, 1080, 1170, 3210, 870, 1080, 1170, 3210, 870,
		1080, 1170, 3210, 870, 1050, 1080, 1140, 1170, 3210, 720, 900, 1050, 1140, 1170,
		3210, 3240, 720, 750, 930, 960, 1050, 1140, 3210, 3240, 750, 990, 1020, 1140,
		3240, 780, 810, 840, 870, 900, 930, 960, 1050, 1080, 1110, 1140, 3240, 1140, 3240,
		1140, 3240, 1110, 3240, 1110, 3240, 1110, 3240, 1110, 3240, 3270, 1110, 3240, 3270,
		1110, 3240, 3270, 1110, 3270, 1110, 3270, 1110, 1140, 1170, 1200, 1230, 1260, 1290,
		1320, 1350, 1380, 1410, 1440, 1470, 1500, 1530, 1560, 1590, 1620, 1650, 1680, 1710,
		1740, 1770, 1800, 1830, 1860, 1890, 1920, 1950, 1980, 2010, 2040, 2070, 2100, 2130,
		2160, 2190, 2220, 2250, 2280, 2310, 2340, 2370, 2400, 2430, 2460, 2490, 2520, 2550,
		2580, 2610, 2640, 2670, 2700, 2730, 2760, 2790, 2820, 2850, 2880, 2910, 2940, 2970,
		3000, 3030, 3060, 3090, 3120, 3150, 3180, 3210, 3240, 3270, 1560, 1680, 2400, 2430,
		2520, 1560, 1680, 2400, 2430, 2520, 1560, 1680, 2400, 2430, 2520, 1560, 1680, 2400,
		2430, 2520, 1560, 1680, 2400, 2430, 2520, 1560, 1680, 2400, 2430, 2520, 1560, 1680,
		2400, 2430, 2520, 1560, 1680, 2400, 2430, 2520, 1560, 1680, 2400, 2430, 2520, 1560,
		1680, 2400, 2430, 2520, 1560, 1680, 2400, 2430, 2520, 1560, 1680, 2400, 2430, 2520,
		1560, 1680, 1800, 1830, 1860, 1890, 2400, 2430, 2520, 2640, 2670, 2700, 2730, 1560,
		1620, 1650, 1680, 1710, 1740, 1770, 1920, 1950, 1980, 2010, 2040, 2070, 2400, 2430,
		2460, 2490, 2520, 2550, 2580, 2610, 2760, 2790, 2820, 2850, 2880, 2910, 1560, 1590,
		1650, 2100, 2400, 2430, 2460, 2490, 2940, 1560, 2100, 2400, 2940, 1560, 1590, 1620,
		1650, 1680, 1710, 1740, 1770, 1800, 1830, 1860, 1890, 1920, 1950, 1980, 2010, 2040,
		2070, 2430, 2460, 2490, 2520, 2550, 2580, 2610, 2640, 2670, 2700, 2730, 2760, 2790,
		2820, 2850, 2880, 2910, 2940
		*/

		//  Infineon

		690, 720, 750, 780, 810, 840, 870, 900, 930, 570, 600, 630, 660, 690, 720, 750, 510, 540,
		570, 600, 630, 660, 450, 480, 510, 540, 570, 600, 390, 420, 450, 480, 510, 540, 360, 390,
		420, 450, 480, 510, 270, 300, 360, 390, 420, 450, 240, 270, 300, 330, 360, 390, 420, 240,
		270, 300, 330, 360, 390, 240, 270, 300, 330, 210, 240, 270, 300, 330, 180, 210, 240, 270,
		300, 330, 660, 690, 150, 180, 210, 270, 300, 630, 660, 690, 780, 150, 180, 210, 270, 300,
		630, 660, 690, 750, 780, 120, 150, 180, 210, 630, 660, 690, 750, 780, 120, 150, 180, 210,
		630, 660, 750, 780, 90, 120, 150, 180, 270, 300, 630, 660, 750, 780, 90, 120, 150, 180, 270,
		300, 630, 660, 780, 60, 90, 120, 150, 270, 300, 630, 660, 60, 90, 120, 150, 270, 300, 630,
		660, 30, 60, 90, 120, 270, 300, 390, 420, 450, 480, 510, 600, 630, 660, 690, 750, 780, 870,
		900, 960, 990, 1140, 1170, 1200, 1350, 1380, 1410, 1530, 1590, 1620, 30, 60, 90, 120, 270,
		300, 390, 420, 450, 480, 510, 600, 630, 660, 690, 750, 780, 870, 900, 930, 960, 990, 1110,
		1140, 1170, 1200, 1320, 1350, 1380, 1410, 1500, 1530, 1560, 1590, 1620, 1650, 30, 60, 90,
		270, 300, 390, 420, 450, 480, 510, 600, 630, 660, 690, 750, 780, 870, 900, 930, 960, 990,
		1020, 1110, 1140, 1170, 1200, 1230, 1320, 1350, 1380, 1410, 1440, 1530, 1560, 1590, 1620,
		1650, 30, 60, 90, 270, 300, 390, 420, 450, 480, 510, 600, 630, 660, 690, 750, 780, 870, 900,
		930, 960, 990, 1020, 1110, 1140, 1200, 1230, 1320, 1350, 1410, 1440, 1530, 1560, 1590, 1620,
		1650, 0, 30, 60, 90, 270, 300, 390, 420, 480, 510, 630, 660, 750, 780, 870, 900, 930, 990,
		1020, 1110, 1200, 1230, 1320, 1350, 1410, 1440, 1530, 1560, 1620, 1650, 0, 30, 60, 90, 270,
		300, 390, 420, 510, 630, 660, 750, 780, 870, 900, 990, 1020, 1080, 1110, 1200, 1230, 1290,
		1320, 1410, 1440, 1530, 1620, 1650, 0, 30, 60, 90, 270, 300, 390, 420, 510, 630, 660, 750,
		780, 870, 900, 990, 1020, 1080, 1110, 1200, 1230, 1290, 1320, 1410, 1440, 1530, 1620, 1650,
		0, 30, 60, 90, 270, 300, 390, 420, 510, 630, 660, 750, 780, 870, 900, 990, 1020, 1080, 1110,
		1200, 1230, 1290, 1320, 1410, 1440, 1530, 1620, 1650, 0, 30, 60, 90, 270, 300, 390, 420, 510,
		630, 660, 750, 780, 870, 900, 990, 1020, 1080, 1110, 1140, 1170, 1200, 1230, 1290, 1320, 1410,
		1440, 1530, 1620, 1650, 0, 30, 60, 90, 270, 300, 390, 420, 510, 630, 660, 750, 780, 870, 900,
		990, 1020, 1080, 1110, 1140, 1170, 1200, 1230, 1290, 1320, 1410, 1440, 1530, 1620, 1650, 0,
		30, 60, 90, 270, 300, 390, 420, 510, 630, 660, 750, 780, 870, 900, 990, 1020, 1080, 1110, 1140,
		1170, 1200, 1230, 1290, 1320, 1410, 1440, 1530, 1620, 1650, 0, 30, 60, 90, 270, 300, 390, 420,
		510, 630, 660, 750, 780, 870, 900, 990, 1020, 1080, 1110, 1290, 1320, 1410, 1440, 1530, 1620,
		1650, 0, 30, 60, 90, 270, 300, 390, 420, 510, 630, 660, 750, 780, 870, 900, 990, 1020, 1080,
		1110, 1290, 1320, 1410, 1440, 1530, 1620, 1650, 0, 30, 60, 90, 270, 300, 390, 420, 510, 630,
		660, 750, 780, 870, 900, 990, 1020, 1080, 1110, 1290, 1320, 1410, 1440, 1530, 1620, 1650, 0,
		30, 60, 90, 270, 300, 390, 420, 510, 630, 660, 750, 780, 870, 900, 990, 1020, 1110, 1290, 1320,
		1410, 1440, 1530, 1620, 1650, 0, 30, 60, 90, 270, 300, 390, 420, 510, 630, 660, 750, 780, 870,
		900, 990, 1020, 1110, 1140, 1230, 1320, 1350, 1410, 1440, 1530, 1620, 1650, 30, 60, 90, 120, 270,
		300, 390, 420, 510, 630, 660, 750, 780, 870, 900, 990, 1020, 1110, 1140, 1200, 1230, 1320, 1350,
		1380, 1410, 1440, 1530, 1620, 1650, 30, 60, 90, 120, 270, 300, 390, 420, 510, 630, 660, 750, 780,
		870, 900, 990, 1020, 1110, 1140, 1170, 1200, 1230, 1320, 1350, 1380, 1410, 1440, 1530, 1620, 1650,
		30, 60, 90, 120, 270, 300, 390, 420, 510, 630, 660, 750, 780, 870, 900, 990, 1020, 1110, 1140,
		1170, 1200, 1230, 1320, 1350, 1380, 1410, 1530, 1620, 1650, 30, 60, 90, 120, 150, 270, 300, 390,
		420, 510, 630, 660, 750, 780, 870, 900, 990, 1020, 1140, 1170, 1200, 1350, 1380, 1410, 1530,
		1620, 1650, 60, 90, 120, 150, 60, 90, 120, 150, 180, 1830, 90, 120, 150, 180, 1800, 90, 120, 150,
		180, 210, 1800, 120, 150, 180, 210, 240, 1770, 120, 150, 180, 210, 240, 270, 1740, 150, 180, 210,
		240, 270, 300, 1710, 180, 210, 240, 270, 300, 1680, 1710, 180, 210, 240, 270, 300, 330, 360, 1650,
		1680, 210, 240, 270, 300, 330, 360, 390, 1620, 1650, 240, 270, 300, 330, 360, 390, 420, 1560,
		1590, 1620, 270, 300, 330, 360, 390, 420, 450, 480, 1500, 1530, 1560, 1590, 300, 330, 360, 390,
		420, 450, 480, 510, 540, 1440, 1470, 1500, 1530, 1560, 360, 390, 420, 450, 480, 510, 540, 570,
		600, 1380, 1410, 1440, 1470, 1500, 390, 420, 450, 480, 510, 540, 570, 600, 630, 660, 690, 720,
		1260, 1290, 1320, 1350, 1380, 1410, 1440, 1470, 450, 480, 510, 540, 570, 600, 630, 660, 690, 720,
		750, 780, 810, 840, 870, 900, 930, 1020, 1050, 1080, 1110, 1140, 1170, 1200, 1230, 1260, 1290,
		1320, 1350, 1380, 1410, 510, 540, 570, 600, 630, 660, 690, 720, 750, 780, 810, 840, 870, 900, 930,
		960, 990, 1020, 1050, 1080, 1110, 1140, 1170, 1200, 1230, 1260, 1290, 1320, 1350, 1380, 570, 600,
		630, 660, 690, 720, 750, 780, 810, 840, 870, 900, 930, 960, 990, 1020, 1050, 1080, 1110, 1140,
		1170, 1200, 1230, 1260, 1290, 660, 690, 720, 750, 780, 810, 840, 870, 900, 930, 960, 990, 1020,
		1050, 1080, 1110, 1140, 1170, 1200, 1230, 810, 840, 870, 900, 930, 960, 990, 1020, 1050

		//  New Year
		/*
		540, 570, 1380, 1410, 1440, 540, 570, 600, 1080, 1110, 1380, 1410, 570, 600, 840, 870, 900, 930,
		960, 990, 1020, 1050, 1080, 1110, 1140, 1350, 1380, 1410, 390, 420, 450, 480, 510, 540, 570, 600,
		630, 660, 690, 720, 750, 840, 870, 900, 930, 960, 990, 1020, 1050, 1080, 1350, 1380, 1410, 1440,
		1470, 1500, 1530, 1560, 1590, 1620, 1650, 1680, 1710, 1740, 1770, 1800, 1830, 1860, 1890, 1920,
		1950, 1980, 390, 420, 450, 480, 510, 540, 570, 600, 630, 660, 690, 720, 750, 840, 870, 1320, 1350,
		1380, 1410, 1440, 1470, 1500, 1530, 1560, 1590, 1620, 1650, 1680, 1710, 1740, 1770, 1800, 1830,
		1860, 1890, 1920, 1950, 1980, 450, 480, 690, 840, 870, 1320, 1350, 1650, 1680, 450, 480, 660, 690,
		720, 840, 870, 1290, 1320, 1350, 1650, 1680, 450, 480, 510, 630, 660, 690, 840, 870, 1260, 1290,
		1320, 1650, 1680, 480, 510, 630, 660, 840, 870, 1230, 1260, 1290, 1650, 1680, 360, 390, 420, 450,
		480, 510, 540, 570, 600, 630, 660, 690, 720, 750, 780, 840, 870, 1230, 1260, 1290, 1650, 1680, 360,
		390, 420, 450, 480, 510, 540, 570, 600, 630, 660, 690, 720, 750, 780, 840, 870, 1260, 1350, 1380,
		1410, 1440, 1470, 1500, 1530, 1560, 1590, 1620, 1650, 1680, 1710, 1740, 1770, 1800, 1830, 1860, 1890,
		1920, 1950, 840, 870, 900, 930, 960, 990, 1020, 1050, 1080, 1110, 1140, 1170, 1350, 1380, 1410, 1440,
		1470, 1500, 1530, 1560, 1590, 1620, 1650, 1680, 1710, 1740, 1770, 1800, 1830, 1860, 1890, 1920, 1950,
		570, 600, 840, 870, 1020, 1050, 1350, 1380, 1650, 1680, 570, 600, 840, 870, 1020, 1050, 1350, 1380,
		1650, 1680, 570, 600, 840, 870, 1020, 1050, 1350, 1380, 1650, 1680, 390, 420, 450, 480, 510, 540, 570,
		600, 630, 660, 690, 720, 750, 840, 870, 1020, 1050, 1350, 1380, 1650, 1680, 390, 420, 450, 480, 510, 540,
		570, 600, 630, 660, 690, 720, 750, 810, 840, 870, 1020, 1050, 1350, 1380, 1650, 1680, 570, 600, 810,
		840, 870, 1020, 1050, 1230, 1260, 1290, 1320, 1350, 1380, 1410, 1440, 1470, 1500, 1530, 1560, 1590, 1620,
		1650, 1680, 1710, 1740, 1770, 1800, 1830, 1860, 1890, 1920, 1950, 1980, 2010, 450, 480, 570, 600, 660,
		690, 810, 840, 1020, 1050, 1200, 1230, 1260, 1290, 1320, 1350, 1380, 1410, 1440, 1470, 1500, 1530, 1560,
		1590, 1620, 1650, 1680, 1710, 1740, 1770, 1800, 1830, 1860, 1890, 1920, 1950, 1980, 2010, 420, 450, 480,
		570, 600, 660, 690, 810, 840, 1020, 1050, 1230, 1260, 1290, 1320, 1350, 1380, 1410, 1440, 1470, 1500,
		1530, 1560, 1590, 1620, 1650, 1680, 1710, 1740, 1770, 1800, 1830, 1860, 1890, 1920, 1950, 1980, 2010,
		420, 450, 570, 600, 660, 690, 720, 810, 840, 1020, 1050, 1650, 1680, 390, 420, 450, 570, 600, 690, 720,
		750, 780, 810, 840, 1020, 1050, 1650, 1680, 390, 420, 570, 600, 720, 780, 810, 1020, 1050, 1650, 1680,
		390, 420, 570, 600, 750, 780, 810, 1020, 1050, 1650, 1680, 450, 480, 510, 540, 570, 600, 750, 780, 1020,
		1050, 1650, 1680, 450, 480, 510, 540, 570, 720, 750, 780, 1020, 1050, 1650, 1680, 450, 480, 510, 540,
		750, 1020, 1050, 1650, 1680, 480, 510, 840, 870, 480, 510, 840, 870, 1620, 1650, 1680, 1710, 1740, 1770,
		1800, 1830, 1860, 1890, 480, 510, 840, 870, 1320, 1350, 1380, 1410, 1440, 1470, 1500, 1530, 1560, 1590,
		1620, 1650, 1680, 1710, 1740, 1770, 1800, 1830, 1860, 1890, 1920, 480, 510, 840, 870, 1320, 1350, 1380,
		1410, 1440, 1470, 1500, 1530, 1560, 1590, 1620, 1650, 1680, 1710, 1740, 480, 510, 840, 870, 1320, 1350,
		480, 510, 660, 690, 720, 750, 780, 810, 840, 870, 900, 930, 960, 990, 1020, 1050, 1080, 1320, 1350, 390,
		480, 510, 540, 570, 660, 690, 720, 750, 780, 810, 840, 870, 900, 930, 960, 990, 1020, 1050, 1080, 1290,
		1320, 1350, 1590, 1620, 1650, 390, 420, 480, 510, 570, 600, 840, 870, 1020, 1050, 1080, 1290, 1320, 1350,
		1590, 1620, 1650, 390, 420, 480, 510, 570, 600, 630, 840, 870, 1020, 1050, 1080, 1290, 1320, 1350, 1590,
		1620, 1650, 390, 420, 480, 510, 600, 630, 840, 870, 1020, 1050, 1080, 1290, 1320, 1350, 1590, 1620, 1650,
		390, 420, 480, 510, 810, 840, 870, 1020, 1050, 1080, 1290, 1320, 1590, 1620, 1650, 360, 390, 420, 480,
		510, 810, 840, 870, 1020, 1050, 1080, 1290, 1320, 1590, 1620, 1650, 360, 390, 480, 510, 810, 840, 870,
		1020, 1050, 1080, 1290, 1320, 1350, 1380, 1410, 1440, 1470, 1500, 1530, 1560, 1590, 1620, 1650, 1680,
		1710, 1740, 1770, 1800, 1830, 1860, 1890, 1920, 1950, 390, 480, 510, 810, 840, 870, 1020, 1050, 1080,
		1290, 1320, 1350, 1380, 1410, 1440, 1470, 1500, 1530, 1560, 1590, 1620, 1650, 1680, 1710, 1740, 1770,
		1800, 1830, 1860, 1890, 1920, 1950, 480, 510, 600, 630, 660, 690, 720, 750, 780, 810, 840, 870, 900,
		930, 960, 990, 1020, 1050, 1080, 1110, 1140, 1590, 1620, 1650, 480, 510, 600, 630, 660, 690, 720, 750,
		780, 810, 840, 870, 900, 930, 960, 990, 1020, 1050, 1080, 1110, 1140, 1590, 1620, 1650, 480, 510, 810,
		840, 870, 900, 1410, 1440, 1590, 1620, 1650, 1770, 1800, 480, 510, 780, 810, 840, 870, 900, 1380, 1410,
		1440, 1590, 1620, 1650, 1770, 1800, 1830, 480, 510, 780, 810, 870, 900, 930, 1350, 1380, 1410, 1590,
		1620, 1650, 1800, 1830, 1860, 480, 510, 750, 780, 810, 900, 930, 1320, 1350, 1380, 1590, 1620, 1650,
		1830, 1860, 1890, 480, 510, 750, 780, 810, 900, 930, 960, 1290, 1320, 1350, 1380, 1590, 1620, 1650,
		1860, 1890, 1920, 480, 510, 720, 750, 780, 930, 960, 990, 1260, 1290, 1320, 1350, 1590, 1620, 1650,
		1890, 1920, 1950, 480, 510, 690, 720, 750, 960, 990, 1020, 1230, 1260, 1290, 1320, 1590, 1620, 1650,
		1920, 1950, 1980, 480, 510, 660, 690, 720, 990, 1020, 1050, 1080, 1230, 1260, 1290, 1590, 1620, 1650,
		1950, 1980, 2010, 480, 510, 630, 660, 690, 1020, 1050, 1080, 1110, 1140, 1230, 1260, 1440, 1470, 1500,
		1530, 1560, 1590, 1620, 1950, 1980, 480, 510, 570, 600, 630, 660, 1050, 1080, 1110, 1140, 1440, 1470,
		1500, 1530, 1560, 1590, 1620, 480, 510, 600, 630, 1110
		*/
};


#endif