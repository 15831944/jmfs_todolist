#pragma once

//////////////////////////////////////////////////////////////////////

static const int COLORBREWER_MINCOLORS = 3;
static const int COLORBREWER_MAXCOLORS = 12;
static const int COLORBREWER_MAXPALETTES = 10;

//////////////////////////////////////////////////////////////////////

enum COLORBREWER_PALETTETYPE
{
	CBPT_SEQUENTIAL,
	CBPT_DIVERGING,
	CBPT_QUALITATIVE,
};

//////////////////////////////////////////////////////////////////////

struct COLORBREWER_PALETTE
{
	int nNumColors;
	COLORREF crPalette[COLORBREWER_MAXCOLORS];
};

//////////////////////////////////////////////////////////////////////

struct COLORBREWER_PALETTEGROUP
{
	COLORBREWER_PALETTETYPE nType;
	LPCTSTR szName;

	int nNumPalettes;
	COLORBREWER_PALETTE palettes[COLORBREWER_MAXPALETTES];
};

//////////////////////////////////////////////////////////////////////

static const COLORBREWER_PALETTEGROUP COLORBREWER_GROUPS[] = 
{
	// 18 sequential groups
	{ 
		CBPT_SEQUENTIAL, _T("Yellow-Green"), 7, 
		{
			{ 3, { 0x00f7fcb9, 0x00addd8e, 0x0031a354, CLR_NONE } },
			{ 4, { 0x00ffffcc, 0x00c2e699, 0x0078c679, 0x00238443, CLR_NONE } },
			{ 5, { 0x00ffffcc, 0x00c2e699, 0x0078c679, 0x0031a354, 0x00006837, CLR_NONE } },
			{ 6, { 0x00ffffcc, 0x00d9f0a3, 0x00addd8e, 0x0078c679, 0x0031a354, 0x00006837, CLR_NONE } },
			{ 7, { 0x00ffffcc, 0x00d9f0a3, 0x00addd8e, 0x0078c679, 0x0041ab5d, 0x00238443, 0x00005a32, CLR_NONE } },
			{ 8, { 0x00ffffe5, 0x00f7fcb9, 0x00d9f0a3, 0x00addd8e, 0x0078c679, 0x0041ab5d, 0x00238443, 0x00005a32, CLR_NONE } },
			{ 9, { 0x00ffffe5, 0x00f7fcb9, 0x00d9f0a3, 0x00addd8e, 0x0078c679, 0x0041ab5d, 0x00238443, 0x00006837, 0x00004529, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{
		CBPT_SEQUENTIAL, _T("Yellow-Green-Blue"), 7, 
		{
			{ 3, { 0x00edf8b1, 0x007fcdbb, 0x002c7fb8, CLR_NONE } },
			{ 4, { 0x00ffffcc, 0x00a1dab4, 0x0041b6c4, 0x00225ea8, CLR_NONE } },
			{ 5, { 0x00ffffcc, 0x00a1dab4, 0x0041b6c4, 0x002c7fb8, 0x00253494, CLR_NONE } },
			{ 6, { 0x00ffffcc, 0x00c7e9b4, 0x007fcdbb, 0x0041b6c4, 0x002c7fb8, 0x00253494, CLR_NONE } },
			{ 7, { 0x00ffffcc, 0x00c7e9b4, 0x007fcdbb, 0x0041b6c4, 0x001d91c0, 0x00225ea8, 0x000c2c84, CLR_NONE } },
			{ 8, { 0x00ffffd9, 0x00edf8b1, 0x00c7e9b4, 0x007fcdbb, 0x0041b6c4, 0x001d91c0, 0x00225ea8, 0x000c2c84, CLR_NONE } },
			{ 9, { 0x00ffffd9, 0x00edf8b1, 0x00c7e9b4, 0x007fcdbb, 0x0041b6c4, 0x001d91c0, 0x00225ea8, 0x00253494, 0x00081d58, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{
		CBPT_SEQUENTIAL, _T("Green-Blue"), 7, 
		{
			{ 3, { 0x00e0f3db, 0x00a8ddb5, 0x0043a2ca, CLR_NONE } },
			{ 4, { 0x00f0f9e8, 0x00bae4bc, 0x007bccc4, 0x002b8cbe, CLR_NONE } },
			{ 5, { 0x00f0f9e8, 0x00bae4bc, 0x007bccc4, 0x0043a2ca, 0x000868ac, CLR_NONE } },
			{ 6, { 0x00f0f9e8, 0x00ccebc5, 0x00a8ddb5, 0x007bccc4, 0x0043a2ca, 0x000868ac, CLR_NONE } },
			{ 7, { 0x00f0f9e8, 0x00ccebc5, 0x00a8ddb5, 0x007bccc4, 0x004eb3d3, 0x002b8cbe, 0x0008589e, CLR_NONE } },
			{ 8, { 0x00f7fcf0, 0x00e0f3db, 0x00ccebc5, 0x00a8ddb5, 0x007bccc4, 0x004eb3d3, 0x002b8cbe, 0x0008589e, CLR_NONE } },
			{ 9, { 0x00f7fcf0, 0x00e0f3db, 0x00ccebc5, 0x00a8ddb5, 0x007bccc4, 0x004eb3d3, 0x002b8cbe, 0x000868ac, 0x00084081, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Blue-Green"), 7, 
		{
			{ 3, { 0x00e5f5f9, 0x0099d8c9, 0x002ca25f, CLR_NONE } },
			{ 4, { 0x00edf8fb, 0x00b2e2e2, 0x0066c2a4, 0x00238b45, CLR_NONE } },
			{ 5, { 0x00edf8fb, 0x00b2e2e2, 0x0066c2a4, 0x002ca25f, 0x00006d2c, CLR_NONE } },
			{ 6, { 0x00edf8fb, 0x00ccece6, 0x0099d8c9, 0x0066c2a4, 0x002ca25f, 0x00006d2c, CLR_NONE } },
			{ 7, { 0x00edf8fb, 0x00ccece6, 0x0099d8c9, 0x0066c2a4, 0x0041ae76, 0x00238b45, 0x00005824, CLR_NONE } },
			{ 8, { 0x00f7fcfd, 0x00e5f5f9, 0x00ccece6, 0x0099d8c9, 0x0066c2a4, 0x0041ae76, 0x00238b45, 0x00005824, CLR_NONE } },
			{ 9, { 0x00f7fcfd, 0x00e5f5f9, 0x00ccece6, 0x0099d8c9, 0x0066c2a4, 0x0041ae76, 0x00238b45, 0x00006d2c, 0x0000441b, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Purple-Blue-Green"), 7,
		{
			{ 3, { 0x00ece2f0, 0x00a6bddb, 0x001c9099, CLR_NONE } },
			{ 4, { 0x00f6eff7, 0x00bdc9e1, 0x0067a9cf, 0x0002818a, CLR_NONE } },
			{ 5, { 0x00f6eff7, 0x00bdc9e1, 0x0067a9cf, 0x001c9099, 0x00016c59, CLR_NONE } },
			{ 6, { 0x00f6eff7, 0x00d0d1e6, 0x00a6bddb, 0x0067a9cf, 0x001c9099, 0x00016c59, CLR_NONE } },
			{ 7, { 0x00f6eff7, 0x00d0d1e6, 0x00a6bddb, 0x0067a9cf, 0x003690c0, 0x0002818a, 0x00016450, CLR_NONE } },
			{ 8, { 0x00fff7fb, 0x00ece2f0, 0x00d0d1e6, 0x00a6bddb, 0x0067a9cf, 0x003690c0, 0x0002818a, 0x00016450, CLR_NONE } },
			{ 9, { 0x00fff7fb, 0x00ece2f0, 0x00d0d1e6, 0x00a6bddb, 0x0067a9cf, 0x003690c0, 0x0002818a, 0x00016c59, 0x00014636, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Purple-Blue"), 7,
		{
			{ 3, { 0x00ece7f2, 0x00a6bddb, 0x002b8cbe, CLR_NONE } },
			{ 4, { 0x00f1eef6, 0x00bdc9e1, 0x0074a9cf, 0x000570b0, CLR_NONE } },
			{ 5, { 0x00f1eef6, 0x00bdc9e1, 0x0074a9cf, 0x002b8cbe, 0x00045a8d, CLR_NONE } },
			{ 6, { 0x00f1eef6, 0x00d0d1e6, 0x00a6bddb, 0x0074a9cf, 0x002b8cbe, 0x00045a8d, CLR_NONE } },
			{ 7, { 0x00f1eef6, 0x00d0d1e6, 0x00a6bddb, 0x0074a9cf, 0x003690c0, 0x000570b0, 0x00034e7b, CLR_NONE } },
			{ 8, { 0x00fff7fb, 0x00ece7f2, 0x00d0d1e6, 0x00a6bddb, 0x0074a9cf, 0x003690c0, 0x000570b0, 0x00034e7b, CLR_NONE } },
			{ 9, { 0x00fff7fb, 0x00ece7f2, 0x00d0d1e6, 0x00a6bddb, 0x0074a9cf, 0x003690c0, 0x000570b0, 0x00045a8d, 0x00023858, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Blue-Purple"), 7, 
		{
			{ 3, { 0x00e0ecf4, 0x009ebcda, 0x008856a7, CLR_NONE } },
			{ 4, { 0x00edf8fb, 0x00b3cde3, 0x008c96c6, 0x0088419d, CLR_NONE } },
			{ 5, { 0x00edf8fb, 0x00b3cde3, 0x008c96c6, 0x008856a7, 0x00810f7c, CLR_NONE } },
			{ 6, { 0x00edf8fb, 0x00bfd3e6, 0x009ebcda, 0x008c96c6, 0x008856a7, 0x00810f7c, CLR_NONE } },
			{ 7, { 0x00edf8fb, 0x00bfd3e6, 0x009ebcda, 0x008c96c6, 0x008c6bb1, 0x0088419d, 0x006e016b, CLR_NONE } },
			{ 8, { 0x00f7fcfd, 0x00e0ecf4, 0x00bfd3e6, 0x009ebcda, 0x008c96c6, 0x008c6bb1, 0x0088419d, 0x006e016b, CLR_NONE } },
			{ 9, { 0x00f7fcfd, 0x00e0ecf4, 0x00bfd3e6, 0x009ebcda, 0x008c96c6, 0x008c6bb1, 0x0088419d, 0x00810f7c, 0x004d004b, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Red-Purple"), 7,
		{
			{ 3, { 0x00fde0dd, 0x00fa9fb5, 0x00c51b8a, CLR_NONE } },
			{ 4, { 0x00feebe2, 0x00fbb4b9, 0x00f768a1, 0x00ae017e, CLR_NONE } },
			{ 5, { 0x00feebe2, 0x00fbb4b9, 0x00f768a1, 0x00c51b8a, 0x007a0177, CLR_NONE } },
			{ 6, { 0x00feebe2, 0x00fcc5c0, 0x00fa9fb5, 0x00f768a1, 0x00c51b8a, 0x007a0177, CLR_NONE } },
			{ 7, { 0x00feebe2, 0x00fcc5c0, 0x00fa9fb5, 0x00f768a1, 0x00dd3497, 0x00ae017e, 0x007a0177, CLR_NONE } },
			{ 8, { 0x00fff7f3, 0x00fde0dd, 0x00fcc5c0, 0x00fa9fb5, 0x00f768a1, 0x00dd3497, 0x00ae017e, 0x007a0177, CLR_NONE } },
			{ 9, { 0x00fff7f3, 0x00fde0dd, 0x00fcc5c0, 0x00fa9fb5, 0x00f768a1, 0x00dd3497, 0x00ae017e, 0x007a0177, 0x0049006a, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Purple-Red"), 7, 
		{ 
			{ 3, { 0x00e7e1ef, 0x00c994c7, 0x00dd1c77, CLR_NONE } },
			{ 4, { 0x00f1eef6, 0x00d7b5d8, 0x00df65b0, 0x00ce1256, CLR_NONE } },
			{ 5, { 0x00f1eef6, 0x00d7b5d8, 0x00df65b0, 0x00dd1c77, 0x00980043, CLR_NONE } },
			{ 6, { 0x00f1eef6, 0x00d4b9da, 0x00c994c7, 0x00df65b0, 0x00dd1c77, 0x00980043, CLR_NONE } },
			{ 7, { 0x00f1eef6, 0x00d4b9da, 0x00c994c7, 0x00df65b0, 0x00e7298a, 0x00ce1256, 0x0091003f, CLR_NONE } },
			{ 8, { 0x00f7f4f9, 0x00e7e1ef, 0x00d4b9da, 0x00c994c7, 0x00df65b0, 0x00e7298a, 0x00ce1256, 0x0091003f, CLR_NONE } },
			{ 9, { 0x00f7f4f9, 0x00e7e1ef, 0x00d4b9da, 0x00c994c7, 0x00df65b0, 0x00e7298a, 0x00ce1256, 0x00980043, 0x0067001f, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Orange-Red"), 7, 
		{ 
			{ 3, { 0x00fee8c8, 0x00fdbb84, 0x00e34a33, CLR_NONE } },
			{ 4, { 0x00fef0d9, 0x00fdcc8a, 0x00fc8d59, 0x00d7301f, CLR_NONE } },
			{ 5, { 0x00fef0d9, 0x00fdcc8a, 0x00fc8d59, 0x00e34a33, 0x00b30000, CLR_NONE } },
			{ 6, { 0x00fef0d9, 0x00fdd49e, 0x00fdbb84, 0x00fc8d59, 0x00e34a33, 0x00b30000, CLR_NONE } },
			{ 7, { 0x00fef0d9, 0x00fdd49e, 0x00fdbb84, 0x00fc8d59, 0x00ef6548, 0x00d7301f, 0x00990000, CLR_NONE } },
			{ 8, { 0x00fff7ec, 0x00fee8c8, 0x00fdd49e, 0x00fdbb84, 0x00fc8d59, 0x00ef6548, 0x00d7301f, 0x00990000, CLR_NONE } },
			{ 9, { 0x00fff7ec, 0x00fee8c8, 0x00fdd49e, 0x00fdbb84, 0x00fc8d59, 0x00ef6548, 0x00d7301f, 0x00b30000, 0x007f0000, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Yellow-Orange-Red"), 7,
		{
			{ 3, { 0x00ffeda0, 0x00feb24c, 0x00f03b20, CLR_NONE } },
			{ 4, { 0x00ffffb2, 0x00fecc5c, 0x00fd8d3c, 0x00e31a1c, CLR_NONE } },
			{ 5, { 0x00ffffb2, 0x00fecc5c, 0x00fd8d3c, 0x00f03b20, 0x00bd0026, CLR_NONE } },
			{ 6, { 0x00ffffb2, 0x00fed976, 0x00feb24c, 0x00fd8d3c, 0x00f03b20, 0x00bd0026, CLR_NONE } },
			{ 7, { 0x00ffffb2, 0x00fed976, 0x00feb24c, 0x00fd8d3c, 0x00fc4e2a, 0x00e31a1c, 0x00b10026, CLR_NONE } },
			{ 8, { 0x00ffffcc, 0x00ffeda0, 0x00fed976, 0x00feb24c, 0x00fd8d3c, 0x00fc4e2a, 0x00e31a1c, 0x00b10026, CLR_NONE } },
			{ 9, { 0x00ffffcc, 0x00ffeda0, 0x00fed976, 0x00feb24c, 0x00fd8d3c, 0x00fc4e2a, 0x00e31a1c, 0x00bd0026, 0x00800026, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Yellow-Orange-Brown"), 7,
		{
			{ 3, { 0x00fff7bc, 0x00fec44f, 0x00d95f0e, CLR_NONE } },
			{ 4, { 0x00ffffd4, 0x00fed98e, 0x00fe9929, 0x00cc4c02, CLR_NONE } },
			{ 5, { 0x00ffffd4, 0x00fed98e, 0x00fe9929, 0x00d95f0e, 0x00993404, CLR_NONE } },
			{ 6, { 0x00ffffd4, 0x00fee391, 0x00fec44f, 0x00fe9929, 0x00d95f0e, 0x00993404, CLR_NONE } },
			{ 7, { 0x00ffffd4, 0x00fee391, 0x00fec44f, 0x00fe9929, 0x00ec7014, 0x00cc4c02, 0x008c2d04, CLR_NONE } },
			{ 8, { 0x00ffffe5, 0x00fff7bc, 0x00fee391, 0x00fec44f, 0x00fe9929, 0x00ec7014, 0x00cc4c02, 0x008c2d04, CLR_NONE } },
			{ 9, { 0x00ffffe5, 0x00fff7bc, 0x00fee391, 0x00fec44f, 0x00fe9929, 0x00ec7014, 0x00cc4c02, 0x00993404, 0x00662506, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Purples"), 7,
		{
			{ 3, { 0x00efedf5, 0x00bcbddc, 0x00756bb1, CLR_NONE } },
			{ 4, { 0x00f2f0f7, 0x00cbc9e2, 0x009e9ac8, 0x006a51a3, CLR_NONE } },
			{ 5, { 0x00f2f0f7, 0x00cbc9e2, 0x009e9ac8, 0x00756bb1, 0x0054278f, CLR_NONE } },
			{ 6, { 0x00f2f0f7, 0x00dadaeb, 0x00bcbddc, 0x009e9ac8, 0x00756bb1, 0x0054278f, CLR_NONE } },
			{ 7, { 0x00f2f0f7, 0x00dadaeb, 0x00bcbddc, 0x009e9ac8, 0x00807dba, 0x006a51a3, 0x004a1486, CLR_NONE } },
			{ 8, { 0x00fcfbfd, 0x00efedf5, 0x00dadaeb, 0x00bcbddc, 0x009e9ac8, 0x00807dba, 0x006a51a3, 0x004a1486, CLR_NONE } },
			{ 9, { 0x00fcfbfd, 0x00efedf5, 0x00dadaeb, 0x00bcbddc, 0x009e9ac8, 0x00807dba, 0x006a51a3, 0x0054278f, 0x003f007d, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Blues"), 7, 
		{
			{ 3, { 0x00deebf7, 0x009ecae1, 0x003182bd, CLR_NONE } },
			{ 4, { 0x00eff3ff, 0x00bdd7e7, 0x006baed6, 0x002171b5, CLR_NONE } },
			{ 5, { 0x00eff3ff, 0x00bdd7e7, 0x006baed6, 0x003182bd, 0x0008519c, CLR_NONE } },
			{ 6, { 0x00eff3ff, 0x00c6dbef, 0x009ecae1, 0x006baed6, 0x003182bd, 0x0008519c, CLR_NONE } },
			{ 7, { 0x00eff3ff, 0x00c6dbef, 0x009ecae1, 0x006baed6, 0x004292c6, 0x002171b5, 0x00084594, CLR_NONE } },
			{ 8, { 0x00f7fbff, 0x00deebf7, 0x00c6dbef, 0x009ecae1, 0x006baed6, 0x004292c6, 0x002171b5, 0x00084594, CLR_NONE } },
			{ 9, { 0x00f7fbff, 0x00deebf7, 0x00c6dbef, 0x009ecae1, 0x006baed6, 0x004292c6, 0x002171b5, 0x0008519c, 0x0008306b, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Greens"), 7,
		{
			{ 3, { 0x00e5f5e0, 0x00a1d99b, 0x0031a354, CLR_NONE } },
			{ 4, { 0x00edf8e9, 0x00bae4b3, 0x0074c476, 0x00238b45, CLR_NONE } },
			{ 5, { 0x00edf8e9, 0x00bae4b3, 0x0074c476, 0x0031a354, 0x00006d2c, CLR_NONE } },
			{ 6, { 0x00edf8e9, 0x00c7e9c0, 0x00a1d99b, 0x0074c476, 0x0031a354, 0x00006d2c, CLR_NONE } },
			{ 7, { 0x00edf8e9, 0x00c7e9c0, 0x00a1d99b, 0x0074c476, 0x0041ab5d, 0x00238b45, 0x00005a32, CLR_NONE } },
			{ 8, { 0x00f7fcf5, 0x00e5f5e0, 0x00c7e9c0, 0x00a1d99b, 0x0074c476, 0x0041ab5d, 0x00238b45, 0x00005a32, CLR_NONE } },
			{ 9, { 0x00f7fcf5, 0x00e5f5e0, 0x00c7e9c0, 0x00a1d99b, 0x0074c476, 0x0041ab5d, 0x00238b45, 0x00006d2c, 0x0000441b, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Orange"), 7,
		{
			{ 3, { 0x00fee6ce, 0x00fdae6b, 0x00e6550d, CLR_NONE } },
			{ 4, { 0x00feedde, 0x00fdbe85, 0x00fd8d3c, 0x00d94701, CLR_NONE } },
			{ 5, { 0x00feedde, 0x00fdbe85, 0x00fd8d3c, 0x00e6550d, 0x00a63603, CLR_NONE } },
			{ 6, { 0x00feedde, 0x00fdd0a2, 0x00fdae6b, 0x00fd8d3c, 0x00e6550d, 0x00a63603, CLR_NONE } },
			{ 7, { 0x00feedde, 0x00fdd0a2, 0x00fdae6b, 0x00fd8d3c, 0x00f16913, 0x00d94801, 0x008c2d04, CLR_NONE } },
			{ 8, { 0x00fff5eb, 0x00fee6ce, 0x00fdd0a2, 0x00fdae6b, 0x00fd8d3c, 0x00f16913, 0x00d94801, 0x008c2d04, CLR_NONE } },
			{ 9, { 0x00fff5eb, 0x00fee6ce, 0x00fdd0a2, 0x00fdae6b, 0x00fd8d3c, 0x00f16913, 0x00d94801, 0x00a63603, 0x007f2704, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Red"), 7,
		{
			{ 3, { 0x00fee0d2, 0x00fc9272, 0x00de2d26, CLR_NONE } },
			{ 4, { 0x00fee5d9, 0x00fcae91, 0x00fb6a4a, 0x00cb181d, CLR_NONE } },
			{ 5, { 0x00fee5d9, 0x00fcae91, 0x00fb6a4a, 0x00de2d26, 0x00a50f15, CLR_NONE } },
			{ 6, { 0x00fee5d9, 0x00fcbba1, 0x00fc9272, 0x00fb6a4a, 0x00de2d26, 0x00a50f15, CLR_NONE } },
			{ 7, { 0x00fee5d9, 0x00fcbba1, 0x00fc9272, 0x00fb6a4a, 0x00ef3b2c, 0x00cb181d, 0x0099000d, CLR_NONE } },
			{ 8, { 0x00fff5f0, 0x00fee0d2, 0x00fcbba1, 0x00fc9272, 0x00fb6a4a, 0x00ef3b2c, 0x00cb181d, 0x0099000d, CLR_NONE } },
			{ 9, { 0x00fff5f0, 0x00fee0d2, 0x00fcbba1, 0x00fc9272, 0x00fb6a4a, 0x00ef3b2c, 0x00cb181d, 0x00a50f15, 0x0067000d, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_SEQUENTIAL, _T("Grey"), 7, 
		{
			{ 3, { 0x00f0f0f0, 0x00bdbdbd, 0x00636363, CLR_NONE } },
			{ 4, { 0x00f7f7f7, 0x00cccccc, 0x00969696, 0x00525252, CLR_NONE } },
			{ 5, { 0x00f7f7f7, 0x00cccccc, 0x00969696, 0x00636363, 0x00252525, CLR_NONE } },
			{ 6, { 0x00f7f7f7, 0x00d9d9d9, 0x00bdbdbd, 0x00969696, 0x00636363, 0x00252525, CLR_NONE } },
			{ 7, { 0x00f7f7f7, 0x00d9d9d9, 0x00bdbdbd, 0x00969696, 0x00737373, 0x00525252, 0x00252525, CLR_NONE } },
			{ 8, { 0x00ffffff, 0x00f0f0f0, 0x00d9d9d9, 0x00bdbdbd, 0x00969696, 0x00737373, 0x00525252, 0x00252525, CLR_NONE } },
			{ 9, { 0x00ffffff, 0x00f0f0f0, 0x00d9d9d9, 0x00bdbdbd, 0x00969696, 0x00737373, 0x00525252, 0x00252525, 0x00000000, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	// 9 diverging schemes
	{ 
		CBPT_DIVERGING, _T("Purple-Orange"), 9, 
		{
			{ 3, { 0x00f1a340, 0x00f7f7f7, 0x00998ec3, CLR_NONE } },
			{ 4, { 0x00e66101, 0x00fdb863, 0x00b2abd2, 0x005e3c99, CLR_NONE } },
			{ 5, { 0x00e66101, 0x00fdb863, 0x00f7f7f7, 0x00b2abd2, 0x005e3c99, CLR_NONE } },
			{ 6, { 0x00b35806, 0x00f1a340, 0x00fee0b6, 0x00d8daeb, 0x00998ec3, 0x00542788, CLR_NONE } },
			{ 7, { 0x00b35806, 0x00f1a340, 0x00fee0b6, 0x00f7f7f7, 0x00d8daeb, 0x00998ec3, 0x00542788, CLR_NONE } },
			{ 8, { 0x00b35806, 0x00e08214, 0x00fdb863, 0x00fee0b6, 0x00d8daeb, 0x00b2abd2, 0x008073ac, 0x00542788, CLR_NONE } },
			{ 9, { 0x00b35806, 0x00e08214, 0x00fdb863, 0x00fee0b6, 0x00f7f7f7, 0x00d8daeb, 0x00b2abd2, 0x008073ac, 0x00542788, CLR_NONE } },
			{ 10, { 0x007f3b08, 0x00b35806, 0x00e08214, 0x00fdb863, 0x00fee0b6, 0x00d8daeb, 0x00b2abd2, 0x008073ac, 0x00542788, 0x002d004b, CLR_NONE } },
			{ 11, { 0x007f3b08, 0x00b35806, 0x00e08214, 0x00fdb863, 0x00fee0b6, 0x00f7f7f7, 0x00d8daeb, 0x00b2abd2, 0x008073ac, 0x00542788, 0x002d004b, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_DIVERGING, _T("Brown-Blue-Green"), 9,
		{
			{ 3, { 0x00d8b365, 0x00f5f5f5, 0x005ab4ac, CLR_NONE } },
			{ 4, { 0x00a6611a, 0x00dfc27d, 0x0080cdc1, 0x00018571, CLR_NONE } },
			{ 5, { 0x00a6611a, 0x00dfc27d, 0x00f5f5f5, 0x0080cdc1, 0x00018571, CLR_NONE } },
			{ 6, { 0x008c510a, 0x00d8b365, 0x00f6e8c3, 0x00c7eae5, 0x005ab4ac, 0x0001665e, CLR_NONE } },
			{ 7, { 0x008c510a, 0x00d8b365, 0x00f6e8c3, 0x00f5f5f5, 0x00c7eae5, 0x005ab4ac, 0x0001665e, CLR_NONE } },
			{ 8, { 0x008c510a, 0x00bf812d, 0x00dfc27d, 0x00f6e8c3, 0x00c7eae5, 0x0080cdc1, 0x0035978f, 0x0001665e, CLR_NONE } },
			{ 9, { 0x008c510a, 0x00bf812d, 0x00dfc27d, 0x00f6e8c3, 0x00f5f5f5, 0x00c7eae5, 0x0080cdc1, 0x0035978f, 0x0001665e, CLR_NONE } },
			{ 10, { 0x00543005, 0x008c510a, 0x00bf812d, 0x00dfc27d, 0x00f6e8c3, 0x00c7eae5, 0x0080cdc1, 0x0035978f, 0x0001665e, 0x00003c30, CLR_NONE } },
			{ 11, { 0x00543005, 0x008c510a, 0x00bf812d, 0x00dfc27d, 0x00f6e8c3, 0x00f5f5f5, 0x00c7eae5, 0x0080cdc1, 0x0035978f, 0x0001665e, 0x00003c30, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_DIVERGING, _T("Purple-Red-Green"), 9,
		{
			{ 3, { 0x00af8dc3, 0x00f7f7f7, 0x007fbf7b, CLR_NONE } },
			{ 4, { 0x007b3294, 0x00c2a5cf, 0x00a6dba0, 0x00008837, CLR_NONE } },
			{ 5, { 0x007b3294, 0x00c2a5cf, 0x00f7f7f7, 0x00a6dba0, 0x00008837, CLR_NONE } },
			{ 6, { 0x00762a83, 0x00af8dc3, 0x00e7d4e8, 0x00d9f0d3, 0x007fbf7b, 0x001b7837, CLR_NONE } },
			{ 7, { 0x00762a83, 0x00af8dc3, 0x00e7d4e8, 0x00f7f7f7, 0x00d9f0d3, 0x007fbf7b, 0x001b7837, CLR_NONE } },
			{ 8, { 0x00762a83, 0x009970ab, 0x00c2a5cf, 0x00e7d4e8, 0x00d9f0d3, 0x00a6dba0, 0x005aae61, 0x001b7837, CLR_NONE } },
			{ 9, { 0x00762a83, 0x009970ab, 0x00c2a5cf, 0x00e7d4e8, 0x00f7f7f7, 0x00d9f0d3, 0x00a6dba0, 0x005aae61, 0x001b7837, CLR_NONE } },
			{ 10, { 0x0040004b, 0x00762a83, 0x009970ab, 0x00c2a5cf, 0x00e7d4e8, 0x00d9f0d3, 0x00a6dba0, 0x005aae61, 0x001b7837, 0x0000441b, CLR_NONE } },
			{ 11, { 0x0040004b, 0x00762a83, 0x009970ab, 0x00c2a5cf, 0x00e7d4e8, 0x00f7f7f7, 0x00d9f0d3, 0x00a6dba0, 0x005aae61, 0x001b7837, 0x0000441b, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_DIVERGING, _T("Pink-Yellow-Green"), 9,
		{
			{ 3, { 0x00e9a3c9, 0x00f7f7f7, 0x00a1d76a, CLR_NONE } },
			{ 4, { 0x00d01c8b, 0x00f1b6da, 0x00b8e186, 0x004dac26, CLR_NONE } },
			{ 5, { 0x00d01c8b, 0x00f1b6da, 0x00f7f7f7, 0x00b8e186, 0x004dac26, CLR_NONE } },
			{ 6, { 0x00c51b7d, 0x00e9a3c9, 0x00fde0ef, 0x00e6f5d0, 0x00a1d76a, 0x004d9221, CLR_NONE } },
			{ 7, { 0x00c51b7d, 0x00e9a3c9, 0x00fde0ef, 0x00f7f7f7, 0x00e6f5d0, 0x00a1d76a, 0x004d9221, CLR_NONE } },
			{ 8, { 0x00c51b7d, 0x00de77ae, 0x00f1b6da, 0x00fde0ef, 0x00e6f5d0, 0x00b8e186, 0x007fbc41, 0x004d9221, CLR_NONE } },
			{ 9, { 0x00c51b7d, 0x00de77ae, 0x00f1b6da, 0x00fde0ef, 0x00f7f7f7, 0x00e6f5d0, 0x00b8e186, 0x007fbc41, 0x004d9221, CLR_NONE } },
			{ 10, { 0x008e0152, 0x00c51b7d, 0x00de77ae, 0x00f1b6da, 0x00fde0ef, 0x00e6f5d0, 0x00b8e186, 0x007fbc41, 0x004d9221, 0x00276419, CLR_NONE } },
			{ 11, { 0x008e0152, 0x00c51b7d, 0x00de77ae, 0x00f1b6da, 0x00fde0ef, 0x00f7f7f7, 0x00e6f5d0, 0x00b8e186, 0x007fbc41, 0x004d9221, 0x00276419, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_DIVERGING, _T("Red-Blue"), 9,
		{
			{ 3, { 0x00ef8a62, 0x00f7f7f7, 0x0067a9cf, CLR_NONE } },
			{ 4, { 0x00ca0020, 0x00f4a582, 0x0092c5de, 0x000571b0, CLR_NONE } },
			{ 5, { 0x00ca0020, 0x00f4a582, 0x00f7f7f7, 0x0092c5de, 0x000571b0, CLR_NONE } },
			{ 6, { 0x00b2182b, 0x00ef8a62, 0x00fddbc7, 0x00d1e5f0, 0x0067a9cf, 0x002166ac, CLR_NONE } },
			{ 7, { 0x00b2182b, 0x00ef8a62, 0x00fddbc7, 0x00f7f7f7, 0x00d1e5f0, 0x0067a9cf, 0x002166ac, CLR_NONE } },
			{ 8, { 0x00b2182b, 0x00d6604d, 0x00f4a582, 0x00fddbc7, 0x00d1e5f0, 0x0092c5de, 0x004393c3, 0x002166ac, CLR_NONE } },
			{ 9, { 0x00b2182b, 0x00d6604d, 0x00f4a582, 0x00fddbc7, 0x00f7f7f7, 0x00d1e5f0, 0x0092c5de, 0x004393c3, 0x002166ac, CLR_NONE } },
			{ 10, { 0x0067001f, 0x00b2182b, 0x00d6604d, 0x00f4a582, 0x00fddbc7, 0x00d1e5f0, 0x0092c5de, 0x004393c3, 0x002166ac, 0x00053061, CLR_NONE } },
			{ 11, { 0x0067001f, 0x00b2182b, 0x00d6604d, 0x00f4a582, 0x00fddbc7, 0x00f7f7f7, 0x00d1e5f0, 0x0092c5de, 0x004393c3, 0x002166ac, 0x00053061, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_DIVERGING, _T("Red-Grey"), 9,
		{ 
			{ 3, { 0x00ef8a62, 0x00ffffff, 0x00999999, CLR_NONE } },
			{ 4, { 0x00ca0020, 0x00f4a582, 0x00bababa, 0x00404040, CLR_NONE } },
			{ 5, { 0x00ca0020, 0x00f4a582, 0x00ffffff, 0x00bababa, 0x00404040, CLR_NONE } },
			{ 6, { 0x00b2182b, 0x00ef8a62, 0x00fddbc7, 0x00e0e0e0, 0x00999999, 0x004d4d4d, CLR_NONE } },
			{ 7, { 0x00b2182b, 0x00ef8a62, 0x00fddbc7, 0x00ffffff, 0x00e0e0e0, 0x00999999, 0x004d4d4d, CLR_NONE } },
			{ 8, { 0x00b2182b, 0x00d6604d, 0x00f4a582, 0x00fddbc7, 0x00e0e0e0, 0x00bababa, 0x00878787, 0x004d4d4d, CLR_NONE } },
			{ 9, { 0x00b2182b, 0x00d6604d, 0x00f4a582, 0x00fddbc7, 0x00ffffff, 0x00e0e0e0, 0x00bababa, 0x00878787, 0x004d4d4d, CLR_NONE } },
			{ 10, { 0x0067001f, 0x00b2182b, 0x00d6604d, 0x00f4a582, 0x00fddbc7, 0x00e0e0e0, 0x00bababa, 0x00878787, 0x004d4d4d, 0x001a1a1a, CLR_NONE } },
			{ 11, { 0x0067001f, 0x00b2182b, 0x00d6604d, 0x00f4a582, 0x00fddbc7, 0x00ffffff, 0x00e0e0e0, 0x00bababa, 0x00878787, 0x004d4d4d, 0x001a1a1a, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_DIVERGING, _T("Red-Yellow-Blue"), 9,
		{
			{ 3, { 0x00fc8d59, 0x00ffffbf, 0x0091bfdb, CLR_NONE } },
			{ 4, { 0x00d7191c, 0x00fdae61, 0x00abd9e9, 0x002c7bb6, CLR_NONE } },
			{ 5, { 0x00d7191c, 0x00fdae61, 0x00ffffbf, 0x00abd9e9, 0x002c7bb6, CLR_NONE } },
			{ 6, { 0x00d73027, 0x00fc8d59, 0x00fee090, 0x00e0f3f8, 0x0091bfdb, 0x004575b4, CLR_NONE } },
			{ 7, { 0x00d73027, 0x00fc8d59, 0x00fee090, 0x00ffffbf, 0x00e0f3f8, 0x0091bfdb, 0x004575b4, CLR_NONE } },
			{ 8, { 0x00d73027, 0x00f46d43, 0x00fdae61, 0x00fee090, 0x00e0f3f8, 0x00abd9e9, 0x0074add1, 0x004575b4, CLR_NONE } },
			{ 9, { 0x00d73027, 0x00f46d43, 0x00fdae61, 0x00fee090, 0x00ffffbf, 0x00e0f3f8, 0x00abd9e9, 0x0074add1, 0x004575b4, CLR_NONE } },
			{ 10, { 0x00a50026, 0x00d73027, 0x00f46d43, 0x00fdae61, 0x00fee090, 0x00e0f3f8, 0x00abd9e9, 0x0074add1, 0x004575b4, 0x00313695, CLR_NONE } },
			{ 11, { 0x00a50026, 0x00d73027, 0x00f46d43, 0x00fdae61, 0x00fee090, 0x00ffffbf, 0x00e0f3f8, 0x00abd9e9, 0x0074add1, 0x004575b4, 0x00313695, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_DIVERGING, _T("Spectral"), 9,
		{ 
			{ 3, { 0x00fc8d59, 0x00ffffbf, 0x0099d594, CLR_NONE } },
			{ 4, { 0x00d7191c, 0x00fdae61, 0x00abdda4, 0x002b83ba, CLR_NONE } },
			{ 5, { 0x00d7191c, 0x00fdae61, 0x00ffffbf, 0x00abdda4, 0x002b83ba, CLR_NONE } },
			{ 6, { 0x00d53e4f, 0x00fc8d59, 0x00fee08b, 0x00e6f598, 0x0099d594, 0x003288bd, CLR_NONE } },
			{ 7, { 0x00d53e4f, 0x00fc8d59, 0x00fee08b, 0x00ffffbf, 0x00e6f598, 0x0099d594, 0x003288bd, CLR_NONE } },
			{ 8, { 0x00d53e4f, 0x00f46d43, 0x00fdae61, 0x00fee08b, 0x00e6f598, 0x00abdda4, 0x0066c2a5, 0x003288bd, CLR_NONE } },
			{ 9, { 0x00d53e4f, 0x00f46d43, 0x00fdae61, 0x00fee08b, 0x00ffffbf, 0x00e6f598, 0x00abdda4, 0x0066c2a5, 0x003288bd, CLR_NONE } },
			{ 10, { 0x009e0142, 0x00d53e4f, 0x00f46d43, 0x00fdae61, 0x00fee08b, 0x00e6f598, 0x00abdda4, 0x0066c2a5, 0x003288bd, 0x005e4fa2, CLR_NONE } },
			{ 11, { 0x009e0142, 0x00d53e4f, 0x00f46d43, 0x00fdae61, 0x00fee08b, 0x00ffffbf, 0x00e6f598, 0x00abdda4, 0x0066c2a5, 0x003288bd, 0x005e4fa2, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_DIVERGING, _T("Red-Yellow-Green"), 9,
		{
			{ 3, { 0x00fc8d59, 0x00ffffbf, 0x0091cf60, CLR_NONE } },
			{ 4, { 0x00d7191c, 0x00fdae61, 0x00a6d96a, 0x001a9641, CLR_NONE } },
			{ 5, { 0x00d7191c, 0x00fdae61, 0x00ffffbf, 0x00a6d96a, 0x001a9641, CLR_NONE } },
			{ 6, { 0x00d73027, 0x00fc8d59, 0x00fee08b, 0x00d9ef8b, 0x0091cf60, 0x001a9850, CLR_NONE } },
			{ 7, { 0x00d73027, 0x00fc8d59, 0x00fee08b, 0x00ffffbf, 0x00d9ef8b, 0x0091cf60, 0x001a9850, CLR_NONE } },
			{ 8, { 0x00d73027, 0x00f46d43, 0x00fdae61, 0x00fee08b, 0x00d9ef8b, 0x00a6d96a, 0x0066bd63, 0x001a9850, CLR_NONE } },
			{ 9, { 0x00d73027, 0x00f46d43, 0x00fdae61, 0x00fee08b, 0x00ffffbf, 0x00d9ef8b, 0x00a6d96a, 0x0066bd63, 0x001a9850, CLR_NONE } },
			{ 10, { 0x00a50026, 0x00d73027, 0x00f46d43, 0x00fdae61, 0x00fee08b, 0x00d9ef8b, 0x00a6d96a, 0x0066bd63, 0x001a9850, 0x00006837, CLR_NONE } },
			{ 11, { 0x00a50026, 0x00d73027, 0x00f46d43, 0x00fdae61, 0x00fee08b, 0x00ffffbf, 0x00d9ef8b, 0x00a6d96a, 0x0066bd63, 0x001a9850, 0x00006837, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	// 8 qualitative schemes
	{ 
		CBPT_QUALITATIVE, _T("Accent"), 6,
		{
			{ 3, { 0x007fc97f, 0x00beaed4, 0x00fdc086, CLR_NONE } },
			{ 4, { 0x007fc97f, 0x00beaed4, 0x00fdc086, 0x00ffff99, CLR_NONE } },
			{ 5, { 0x007fc97f, 0x00beaed4, 0x00fdc086, 0x00ffff99, 0x00386cb0, CLR_NONE } },
			{ 6, { 0x007fc97f, 0x00beaed4, 0x00fdc086, 0x00ffff99, 0x00386cb0, 0x00f0027f, CLR_NONE } },
			{ 7, { 0x007fc97f, 0x00beaed4, 0x00fdc086, 0x00ffff99, 0x00386cb0, 0x00f0027f, 0x00bf5b17, CLR_NONE } },
			{ 8, { 0x007fc97f, 0x00beaed4, 0x00fdc086, 0x00ffff99, 0x00386cb0, 0x00f0027f, 0x00bf5b17, 0x00666666, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_QUALITATIVE, _T("Dark2"), 6,
		{
			{ 3, { 0x001b9e77, 0x00d95f02, 0x007570b3, CLR_NONE } },
			{ 4, { 0x001b9e77, 0x00d95f02, 0x007570b3, 0x00e7298a, CLR_NONE } },
			{ 5, { 0x001b9e77, 0x00d95f02, 0x007570b3, 0x00e7298a, 0x0066a61e, CLR_NONE } },
			{ 6, { 0x001b9e77, 0x00d95f02, 0x007570b3, 0x00e7298a, 0x0066a61e, 0x00e6ab02, CLR_NONE } },
			{ 7, { 0x001b9e77, 0x00d95f02, 0x007570b3, 0x00e7298a, 0x0066a61e, 0x00e6ab02, 0x00a6761d, CLR_NONE } },
			{ 8, { 0x001b9e77, 0x00d95f02, 0x007570b3, 0x00e7298a, 0x0066a61e, 0x00e6ab02, 0x00a6761d, 0x00666666, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_QUALITATIVE, _T("Paired"), 10,
		{
			{ 3, { 0x00a6cee3, 0x001f78b4, 0x00b2df8a, CLR_NONE } },
			{ 4, { 0x00a6cee3, 0x001f78b4, 0x00b2df8a, 0x0033a02c, CLR_NONE } },
			{ 5, { 0x00a6cee3, 0x001f78b4, 0x00b2df8a, 0x0033a02c, 0x00fb9a99, CLR_NONE } },
			{ 6, { 0x00a6cee3, 0x001f78b4, 0x00b2df8a, 0x0033a02c, 0x00fb9a99, 0x00e31a1c, CLR_NONE } },
			{ 7, { 0x00a6cee3, 0x001f78b4, 0x00b2df8a, 0x0033a02c, 0x00fb9a99, 0x00e31a1c, 0x00fdbf6f, CLR_NONE } },
			{ 8, { 0x00a6cee3, 0x001f78b4, 0x00b2df8a, 0x0033a02c, 0x00fb9a99, 0x00e31a1c, 0x00fdbf6f, 0x00ff7f00, CLR_NONE } },
			{ 9, { 0x00a6cee3, 0x001f78b4, 0x00b2df8a, 0x0033a02c, 0x00fb9a99, 0x00e31a1c, 0x00fdbf6f, 0x00ff7f00, 0x00cab2d6, CLR_NONE } },
			{ 10, { 0x00a6cee3, 0x001f78b4, 0x00b2df8a, 0x0033a02c, 0x00fb9a99, 0x00e31a1c, 0x00fdbf6f, 0x00ff7f00, 0x00cab2d6, 0x006a3d9a, CLR_NONE } },
			{ 11, { 0x00a6cee3, 0x001f78b4, 0x00b2df8a, 0x0033a02c, 0x00fb9a99, 0x00e31a1c, 0x00fdbf6f, 0x00ff7f00, 0x00cab2d6, 0x006a3d9a, 0x00ffff99, CLR_NONE } },
			{ 12, { 0x00a6cee3, 0x001f78b4, 0x00b2df8a, 0x0033a02c, 0x00fb9a99, 0x00e31a1c, 0x00fdbf6f, 0x00ff7f00, 0x00cab2d6, 0x006a3d9a, 0x00ffff99, 0x00b15928 } },
		}
	},

	{ 
		CBPT_QUALITATIVE, _T("Pastel1"), 7,
		{
			{ 3, { 0x00fbb4ae, 0x00b3cde3, 0x00ccebc5, CLR_NONE } },
			{ 4, { 0x00fbb4ae, 0x00b3cde3, 0x00ccebc5, 0x00decbe4, CLR_NONE } },
			{ 5, { 0x00fbb4ae, 0x00b3cde3, 0x00ccebc5, 0x00decbe4, 0x00fed9a6, CLR_NONE } },
			{ 6, { 0x00fbb4ae, 0x00b3cde3, 0x00ccebc5, 0x00decbe4, 0x00fed9a6, 0x00ffffcc, CLR_NONE } },
			{ 7, { 0x00fbb4ae, 0x00b3cde3, 0x00ccebc5, 0x00decbe4, 0x00fed9a6, 0x00ffffcc, 0x00e5d8bd, CLR_NONE } },
			{ 8, { 0x00fbb4ae, 0x00b3cde3, 0x00ccebc5, 0x00decbe4, 0x00fed9a6, 0x00ffffcc, 0x00e5d8bd, 0x00fddaec, CLR_NONE } },
			{ 9, { 0x00fbb4ae, 0x00b3cde3, 0x00ccebc5, 0x00decbe4, 0x00fed9a6, 0x00ffffcc, 0x00e5d8bd, 0x00fddaec, 0x00f2f2f2, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_QUALITATIVE, _T("Pastel2"), 6,
		{
			{ 3, { 0x00b3e2cd, 0x00fdcdac, 0x00cbd5e8, CLR_NONE } },
			{ 4, { 0x00b3e2cd, 0x00fdcdac, 0x00cbd5e8, 0x00f4cae4, CLR_NONE } },
			{ 5, { 0x00b3e2cd, 0x00fdcdac, 0x00cbd5e8, 0x00f4cae4, 0x00e6f5c9, CLR_NONE } },
			{ 6, { 0x00b3e2cd, 0x00fdcdac, 0x00cbd5e8, 0x00f4cae4, 0x00e6f5c9, 0x00fff2ae, CLR_NONE } },
			{ 7, { 0x00b3e2cd, 0x00fdcdac, 0x00cbd5e8, 0x00f4cae4, 0x00e6f5c9, 0x00fff2ae, 0x00f1e2cc, CLR_NONE } },
			{ 8, { 0x00b3e2cd, 0x00fdcdac, 0x00cbd5e8, 0x00f4cae4, 0x00e6f5c9, 0x00fff2ae, 0x00f1e2cc, 0x00cccccc, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_QUALITATIVE, _T("Set1"), 7,
		{
			{ 3, { 0x00e41a1c, 0x00377eb8, 0x004daf4a, CLR_NONE } },
			{ 4, { 0x00e41a1c, 0x00377eb8, 0x004daf4a, 0x00984ea3, CLR_NONE } },
			{ 5, { 0x00e41a1c, 0x00377eb8, 0x004daf4a, 0x00984ea3, 0x00ff7f00, CLR_NONE } },
			{ 6, { 0x00e41a1c, 0x00377eb8, 0x004daf4a, 0x00984ea3, 0x00ff7f00, 0x00ffff33, CLR_NONE } },
			{ 7, { 0x00e41a1c, 0x00377eb8, 0x004daf4a, 0x00984ea3, 0x00ff7f00, 0x00ffff33, 0x00a65628, CLR_NONE } },
			{ 8, { 0x00e41a1c, 0x00377eb8, 0x004daf4a, 0x00984ea3, 0x00ff7f00, 0x00ffff33, 0x00a65628, 0x00f781bf, CLR_NONE } },
			{ 9, { 0x00e41a1c, 0x00377eb8, 0x004daf4a, 0x00984ea3, 0x00ff7f00, 0x00ffff33, 0x00a65628, 0x00f781bf, 0x00999999, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_QUALITATIVE, _T("Set2"), 6,
		{
			{ 3, { 0x0066c2a5, 0x00fc8d62, 0x008da0cb, CLR_NONE } },
			{ 4, { 0x0066c2a5, 0x00fc8d62, 0x008da0cb, 0x00e78ac3, CLR_NONE } },
			{ 5, { 0x0066c2a5, 0x00fc8d62, 0x008da0cb, 0x00e78ac3, 0x00a6d854, CLR_NONE } },
			{ 6, { 0x0066c2a5, 0x00fc8d62, 0x008da0cb, 0x00e78ac3, 0x00a6d854, 0x00ffd92f, CLR_NONE } },
			{ 7, { 0x0066c2a5, 0x00fc8d62, 0x008da0cb, 0x00e78ac3, 0x00a6d854, 0x00ffd92f, 0x00e5c494, CLR_NONE } },
			{ 8, { 0x0066c2a5, 0x00fc8d62, 0x008da0cb, 0x00e78ac3, 0x00a6d854, 0x00ffd92f, 0x00e5c494, 0x00b3b3b3, CLR_NONE } },
			{ 0, { CLR_NONE } }
		}
	},

	{ 
		CBPT_QUALITATIVE, _T("Set3"), 10, 
		{ 
			{ 3, { 0x008dd3c7, 0x00ffffb3, 0x00bebada, CLR_NONE } },
			{ 4, { 0x008dd3c7, 0x00ffffb3, 0x00bebada, 0x00fb8072, CLR_NONE } },
			{ 5, { 0x008dd3c7, 0x00ffffb3, 0x00bebada, 0x00fb8072, 0x0080b1d3, CLR_NONE } },
			{ 6, { 0x008dd3c7, 0x00ffffb3, 0x00bebada, 0x00fb8072, 0x0080b1d3, 0x00fdb462, CLR_NONE } },
			{ 7, { 0x008dd3c7, 0x00ffffb3, 0x00bebada, 0x00fb8072, 0x0080b1d3, 0x00fdb462, 0x00b3de69, CLR_NONE } },
			{ 8, { 0x008dd3c7, 0x00ffffb3, 0x00bebada, 0x00fb8072, 0x0080b1d3, 0x00fdb462, 0x00b3de69, 0x00fccde5, CLR_NONE } },
			{ 9, { 0x008dd3c7, 0x00ffffb3, 0x00bebada, 0x00fb8072, 0x0080b1d3, 0x00fdb462, 0x00b3de69, 0x00fccde5, 0x00d9d9d9, CLR_NONE } },
			{ 10, { 0x008dd3c7, 0x00ffffb3, 0x00bebada, 0x00fb8072, 0x0080b1d3, 0x00fdb462, 0x00b3de69, 0x00fccde5, 0x00d9d9d9, 0x00bc80bd, CLR_NONE } },
			{ 11, { 0x008dd3c7, 0x00ffffb3, 0x00bebada, 0x00fb8072, 0x0080b1d3, 0x00fdb462, 0x00b3de69, 0x00fccde5, 0x00d9d9d9, 0x00bc80bd, 0x00ccebc5, CLR_NONE } },
			{ 12, { 0x008dd3c7, 0x00ffffb3, 0x00bebada, 0x00fb8072, 0x0080b1d3, 0x00fdb462, 0x00b3de69, 0x00fccde5, 0x00d9d9d9, 0x00bc80bd, 0x00ccebc5, 0x00ffed6f } },
		}
	},

};

//////////////////////////////////////////////////////////////////////

static const int COLORBREWER_NUMGROUPS = (sizeof(COLORBREWER_GROUPS) / sizeof(COLORBREWER_PALETTEGROUP));

//////////////////////////////////////////////////////////////////////

