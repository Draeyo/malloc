#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define getName(var)	#var 
#define TEST_CHAR		'1'


//Struct super utile !
struct rip
{
	void	**ptr;
	size_t	len;
	char 	test_char;
};

//Merci google LUL
void hexDump (char *desc, void *addr, int len) {
    int i;
    unsigned char buff[17];
    unsigned char *pc = (unsigned char*)addr;

    // Output description if given.
    if (desc != NULL)
        printf ("%s:\n", desc);

    if (len == 0) {
        printf("  ZERO LENGTH\n");
        return;
    }
    if (len < 0) {
        printf("  NEGATIVE LENGTH: %i\n",len);
        return;
    }

    // Process every byte in the data.
    for (i = 0; i < len; i++) {
        // Multiple of 16 means new line (with line offset).

        if ((i % 16) == 0) {
            // Just don't print ASCII for the zeroth line.
            if (i != 0)
                printf ("  %s\n", buff);

            // Output the offset.
            printf ("  %04x ", i);
        }

        // Now the hex code for the specific character.
        printf (" %02x", pc[i]);

        // And store a printable ASCII character for later.
        if ((pc[i] < 0x20) || (pc[i] > 0x7e))
            buff[i % 16] = '.';
        else
            buff[i % 16] = pc[i];
        buff[(i % 16) + 1] = '\0';
    }

    // Pad out last line if not exactly 16 characters.
    while ((i % 16) != 0) {
        printf ("   ");
        i++;
    }

    // And print the final ASCII bit.
    printf ("  %s\n", buff);
}

//init des void *
void *ptr_10c780020 = NULL;
void *ptr_10c780060 = NULL;
void *ptr_10c7800a0 = NULL;
void *ptr_10c780100 = NULL;
void *ptr_10c780160 = NULL;
void *ptr_10c7801c0 = NULL;
void *ptr_10c780220 = NULL;
void *ptr_10c780280 = NULL;
void *ptr_10c7802c0 = NULL;
void *ptr_10c780320 = NULL;
void *ptr_10c780380 = NULL;
void *ptr_10c7803e0 = NULL;
void *ptr_10c780440 = NULL;
void *ptr_10c7804a0 = NULL;
void *ptr_10c780500 = NULL;
void *ptr_10c780560 = NULL;
void *ptr_10c7805c0 = NULL;
void *ptr_10c780620 = NULL;
void *ptr_10c780680 = NULL;
void *ptr_10c7806e0 = NULL;
void *ptr_10c780740 = NULL;
void *ptr_10c7807a0 = NULL;
void *ptr_10c780800 = NULL;
void *ptr_10c780860 = NULL;
void *ptr_10c7808c0 = NULL;
void *ptr_10c780920 = NULL;
void *ptr_10c780980 = NULL;
void *ptr_10c7809e0 = NULL;
void *ptr_10c780a40 = NULL;
void *ptr_10c780aa0 = NULL;
void *ptr_10c780b00 = NULL;
void *ptr_10c780b60 = NULL;
void *ptr_10c780bc0 = NULL;
void *ptr_10c780c20 = NULL;
void *ptr_10c780c80 = NULL;
void *ptr_10c780ce0 = NULL;
void *ptr_10c780d40 = NULL;
void *ptr_10c780da0 = NULL;
void *ptr_10c780e00 = NULL;
void *ptr_10c780e60 = NULL;
void *ptr_10c780ec0 = NULL;
void *ptr_10c780f20 = NULL;
void *ptr_10c780f80 = NULL;
void *ptr_10c780fe0 = NULL;
void *ptr_10c781040 = NULL;
void *ptr_10c7810a0 = NULL;
void *ptr_10c781100 = NULL;
void *ptr_10c781160 = NULL;
void *ptr_10c7811c0 = NULL;
void *ptr_10c781220 = NULL;
void *ptr_10c781280 = NULL;
void *ptr_10c7812e0 = NULL;
void *ptr_10c781340 = NULL;
void *ptr_10c7813a0 = NULL;
void *ptr_10c781400 = NULL;
void *ptr_10c781460 = NULL;
void *ptr_10c7814c0 = NULL;
void *ptr_10c781520 = NULL;
void *ptr_10c781580 = NULL;
void *ptr_10c7815e0 = NULL;
void *ptr_10c781640 = NULL;
void *ptr_10c7816a0 = NULL;
void *ptr_10c781700 = NULL;
void *ptr_10c781760 = NULL;
void *ptr_10c7817c0 = NULL;
void *ptr_10c781820 = NULL;
void *ptr_10c781880 = NULL;
void *ptr_10c7818e0 = NULL;
void *ptr_10c781940 = NULL;
void *ptr_10c7819a0 = NULL;
void *ptr_10c781a00 = NULL;
void *ptr_10c781a60 = NULL;
void *ptr_10c781ac0 = NULL;
void *ptr_10c781b20 = NULL;
void *ptr_10c781b80 = NULL;
void *ptr_10c781be0 = NULL;
void *ptr_10c781c40 = NULL;
void *ptr_10c781ca0 = NULL;
void *ptr_10c781d00 = NULL;
void *ptr_10c781d60 = NULL;
void *ptr_10c781dc0 = NULL;
void *ptr_10c781e20 = NULL;
void *ptr_10c781e80 = NULL;
void *ptr_10c781ee0 = NULL;
void *ptr_10c781f40 = NULL;
void *ptr_10c781fa0 = NULL;
void *ptr_10c782000 = NULL;
void *ptr_10c782060 = NULL;
void *ptr_10c7820c0 = NULL;
void *ptr_10c782120 = NULL;
void *ptr_10c782180 = NULL;
void *ptr_10c7821e0 = NULL;
void *ptr_10c782240 = NULL;
void *ptr_10c7822a0 = NULL;
void *ptr_10c782300 = NULL;
void *ptr_10c782360 = NULL;
void *ptr_10c7823c0 = NULL;
void *ptr_10c782420 = NULL;
void *ptr_10c782480 = NULL;
void *ptr_10c7824e0 = NULL;
void *ptr_10c782540 = NULL;
void *ptr_10c7825a0 = NULL;
void *ptr_10c782600 = NULL;
void *ptr_10c782660 = NULL;
void *ptr_10c7826c0 = NULL;
void *ptr_10c782720 = NULL;
void *ptr_10c782780 = NULL;
void *ptr_10c7827e0 = NULL;
void *ptr_10c782840 = NULL;
void *ptr_10c7828a0 = NULL;
void *ptr_10c782900 = NULL;
void *ptr_10c782960 = NULL;
void *ptr_10c7829a8 = NULL;
void *ptr_10c782a08 = NULL;
void *ptr_10c782a60 = NULL;
void *ptr_10c782b30 = NULL;
void *ptr_10c782b60 = NULL;
void *ptr_10c782ba8 = NULL;
void *ptr_10c782bf5 = NULL;
void *ptr_10c782c62 = NULL;
void *ptr_10c782caa = NULL;
void *ptr_10c782cf7 = NULL;
void *ptr_10c782d49 = NULL;
void *ptr_10c782d91 = NULL;
void *ptr_10c782de0 = NULL;
void *ptr_10c782e0b = NULL;
void *ptr_10c782e53 = NULL;
void *ptr_10c782eb3 = NULL;
void *ptr_10c782f04 = NULL;
void *ptr_10c782f4c = NULL;
void *ptr_10c782faf = NULL;
void *ptr_10c783003 = NULL;
void *ptr_10c78304b = NULL;
void *ptr_10c7830a1 = NULL;
void *ptr_10c7830cd = NULL;
void *ptr_10c783115 = NULL;
void *ptr_10c783162 = NULL;
void *ptr_10c7831a2 = NULL;
void *ptr_10c783272 = NULL;
void *ptr_10c783300 = NULL;
void *ptr_10c783330 = NULL;
void *ptr_10c783390 = NULL;
void *ptr_10c7833be = NULL;
void *ptr_10c78345a = NULL;
void *ptr_10c78447a = NULL;
void *ptr_10c784d0a = NULL;
void *ptr_10c912020 = NULL;
void *ptr_10c78353a = NULL;
void *ptr_10c783588 = NULL;
void *ptr_10c7835d8 = NULL;
void *ptr_10c78360c = NULL;
void *ptr_10c783814 = NULL;
void *ptr_10c7839b9 = NULL;
void *ptr_10c783a11 = NULL;
void *ptr_10c783a4f = NULL;
void *ptr_10c783b56 = NULL;
void *ptr_10c783bbe = NULL;
void *ptr_10c7840de = NULL;
void *ptr_10c784205 = NULL;
void *ptr_10c78432d = NULL;
void *ptr_10c929020 = NULL;
void *ptr_10c784e3b = NULL;
void *ptr_10c784f67 = NULL;
void *ptr_10c785091 = NULL;
void *ptr_10c7851be = NULL;
void *ptr_10c7852ec = NULL;
void *ptr_10c78541b = NULL;
void *ptr_10c785545 = NULL;
void *ptr_10c785674 = NULL;
void *ptr_10c7857a4 = NULL;
void *ptr_10c7858d0 = NULL;
void *ptr_10c785a06 = NULL;
void *ptr_10c785b4a = NULL;
void *ptr_10c785c77 = NULL;
void *ptr_10c785da6 = NULL;
void *ptr_10c785ed7 = NULL;
void *ptr_10c786001 = NULL;
void *ptr_10c78612c = NULL;
void *ptr_10c786257 = NULL;
void *ptr_10c786384 = NULL;
void *ptr_10c7864af = NULL;
void *ptr_10c7865db = NULL;
void *ptr_10c786706 = NULL;
void *ptr_10c786833 = NULL;
void *ptr_10c786a53 = NULL;
void *ptr_10c786a87 = NULL;
void *ptr_10c786b1f = NULL;
void *ptr_10c786b53 = NULL;
void *ptr_10c786aeb = NULL;
void *ptr_10c786b27 = NULL;
void *ptr_10c786bbf = NULL;
void *ptr_10c786a9f = NULL;
void *ptr_10c786b37 = NULL;
void *ptr_10c786b83 = NULL;
void *ptr_10c786a8b = NULL;
void *ptr_10c786b23 = NULL;
void *ptr_10c786b5b = NULL;
void *ptr_10c786a83 = NULL;
void *ptr_10c786b1b = NULL;
void *ptr_10c786b4b = NULL;
void *ptr_10c786a8f = NULL;
void *ptr_10c786b63 = NULL;
void *ptr_10c786a93 = NULL;
void *ptr_10c786b2b = NULL;
void *ptr_10c786b6b = NULL;
void *ptr_10c786a97 = NULL;
void *ptr_10c786b2f = NULL;
void *ptr_10c786b73 = NULL;
void *ptr_10c786a9b = NULL;
void *ptr_10c786b33 = NULL;
void *ptr_10c786b7b = NULL;
void *ptr_10c786ab3 = NULL;
void *ptr_10c786bab = NULL;
void *ptr_10c786ac7 = NULL;
void *ptr_10c786b0b = NULL;
void *ptr_10c786ab7 = NULL;
void *ptr_10c786ae7 = NULL;
void *ptr_10c786acb = NULL;
void *ptr_10c786b0f = NULL;
void *ptr_10c786ad3 = NULL;
void *ptr_10c786abf = NULL;
void *ptr_10c786af7 = NULL;
void *ptr_10c786abb = NULL;
void *ptr_10c786aef = NULL;
void *ptr_10c786ac3 = NULL;
void *ptr_10c786aff = NULL;
void *ptr_10c786b47 = NULL;
void *ptr_10c786acf = NULL;
void *ptr_10c786b17 = NULL;
void *ptr_10c786b07 = NULL;
void *ptr_10c786ae3 = NULL;
void *ptr_10c786ad7 = NULL;
void *ptr_10c786b13 = NULL;
void *ptr_10c786b03 = NULL;
void *ptr_10c786b4f = NULL;
void *ptr_10c786adb = NULL;
void *ptr_10c786adf = NULL;
void *ptr_10c786af3 = NULL;
void *ptr_10c786afb = NULL;
void *ptr_10c786a7a = NULL;
void *ptr_10c786c52 = NULL;
void *ptr_10c786c92 = NULL;
void *ptr_10c786cc2 = NULL;
void *ptr_10c787dc2 = NULL;
void *ptr_10c787de8 = NULL;
void *ptr_10c787e0b = NULL;
void *ptr_10c787e3b = NULL;
void *ptr_10c787e6b = NULL;
void *ptr_10c78868b = NULL;
void *ptr_10c7886bb = NULL;
void *ptr_10c788edb = NULL;
void *ptr_10c788fab = NULL;
void *ptr_10c788feb = NULL;
void *ptr_10c789038 = NULL;
void *ptr_10c789078 = NULL;
void *ptr_10c7890c7 = NULL;
void *ptr_10c789107 = NULL;
void *ptr_10c78915b = NULL;
void *ptr_10c7891a0 = NULL;
void *ptr_10c7891e8 = NULL;
void *ptr_10c789235 = NULL;
void *ptr_10c789275 = NULL;
void *ptr_10c7892c7 = NULL;
void *ptr_10c78930f = NULL;
void *ptr_10c789360 = NULL;
void *ptr_10c7893a0 = NULL;
void *ptr_10c7893ee = NULL;
void *ptr_10c78942e = NULL;
void *ptr_10c789480 = NULL;
void *ptr_10c7894c0 = NULL;
void *ptr_10c789510 = NULL;
void *ptr_10c7895e0 = NULL;
void *ptr_10c78977c = NULL;
void *ptr_10c7897a8 = NULL;
void *ptr_10c7897cc = NULL;
void *ptr_10c78989c = NULL;
void *ptr_10c7898f4 = NULL;
void *ptr_10c789924 = NULL;
void *ptr_10c789964 = NULL;
void *ptr_10c7899d4 = NULL;
void *ptr_10c789534 = NULL;
void *ptr_10c789a1c = NULL;
void *ptr_10c789558 = NULL;
void *ptr_10c789aec = NULL;
void *ptr_10c789b39 = NULL;
void *ptr_10c789598 = NULL;
void *ptr_10c789608 = NULL;
void *ptr_10c789678 = NULL;
void *ptr_10c789ba9 = NULL;

int count_check = 0;
int count_free = 0;
int count_malloc_memset = 0;

struct rip truc[] = {
	{&ptr_10c780020, 0, -127},
{&ptr_10c780060, 0, -126},
{&ptr_10c7800a0, 0, -125},
{&ptr_10c780100, 0, -124},
{&ptr_10c780160, 0, -123},
{&ptr_10c7801c0, 0, -122},
{&ptr_10c780220, 0, -121},
{&ptr_10c780280, 0, -120},
{&ptr_10c7802c0, 0, -119},
{&ptr_10c780320, 0, -118},
{&ptr_10c780380, 0, -117},
{&ptr_10c7803e0, 0, -116},
{&ptr_10c780440, 0, -115},
{&ptr_10c7804a0, 0, -114},
{&ptr_10c780500, 0, -113},
{&ptr_10c780560, 0, -112},
{&ptr_10c7805c0, 0, -111},
{&ptr_10c780620, 0, -110},
{&ptr_10c780680, 0, -109},
{&ptr_10c7806e0, 0, -108},
{&ptr_10c780740, 0, -107},
{&ptr_10c7807a0, 0, -106},
{&ptr_10c780800, 0, -105},
{&ptr_10c780860, 0, -104},
{&ptr_10c7808c0, 0, -103},
{&ptr_10c780920, 0, -102},
{&ptr_10c780980, 0, -101},
{&ptr_10c7809e0, 0, -100},
{&ptr_10c780a40, 0, -99},
{&ptr_10c780aa0, 0, -98},
{&ptr_10c780b00, 0, -97},
{&ptr_10c780b60, 0, -96},
{&ptr_10c780bc0, 0, -95},
{&ptr_10c780c20, 0, -94},
{&ptr_10c780c80, 0, -93},
{&ptr_10c780ce0, 0, -92},
{&ptr_10c780d40, 0, -91},
{&ptr_10c780da0, 0, -90},
{&ptr_10c780e00, 0, -89},
{&ptr_10c780e60, 0, -88},
{&ptr_10c780ec0, 0, -87},
{&ptr_10c780f20, 0, -86},
{&ptr_10c780f80, 0, -85},
{&ptr_10c780fe0, 0, -84},
{&ptr_10c781040, 0, -83},
{&ptr_10c7810a0, 0, -82},
{&ptr_10c781100, 0, -81},
{&ptr_10c781160, 0, -80},
{&ptr_10c7811c0, 0, -79},
{&ptr_10c781220, 0, -78},
{&ptr_10c781280, 0, -77},
{&ptr_10c7812e0, 0, -76},
{&ptr_10c781340, 0, -75},
{&ptr_10c7813a0, 0, -74},
{&ptr_10c781400, 0, -73},
{&ptr_10c781460, 0, -72},
{&ptr_10c7814c0, 0, -71},
{&ptr_10c781520, 0, -70},
{&ptr_10c781580, 0, -69},
{&ptr_10c7815e0, 0, -68},
{&ptr_10c781640, 0, -67},
{&ptr_10c7816a0, 0, -66},
{&ptr_10c781700, 0, -65},
{&ptr_10c781760, 0, -64},
{&ptr_10c7817c0, 0, -63},
{&ptr_10c781820, 0, -62},
{&ptr_10c781880, 0, -61},
{&ptr_10c7818e0, 0, -60},
{&ptr_10c781940, 0, -59},
{&ptr_10c7819a0, 0, -58},
{&ptr_10c781a00, 0, -57},
{&ptr_10c781a60, 0, -56},
{&ptr_10c781ac0, 0, -55},
{&ptr_10c781b20, 0, -54},
{&ptr_10c781b80, 0, -53},
{&ptr_10c781be0, 0, -52},
{&ptr_10c781c40, 0, -51},
{&ptr_10c781ca0, 0, -50},
{&ptr_10c781d00, 0, -49},
{&ptr_10c781d60, 0, -48},
{&ptr_10c781dc0, 0, -47},
{&ptr_10c781e20, 0, -46},
{&ptr_10c781e80, 0, -45},
{&ptr_10c781ee0, 0, -44},
{&ptr_10c781f40, 0, -43},
{&ptr_10c781fa0, 0, -42},
{&ptr_10c782000, 0, -41},
{&ptr_10c782060, 0, -40},
{&ptr_10c7820c0, 0, -39},
{&ptr_10c782120, 0, -38},
{&ptr_10c782180, 0, -37},
{&ptr_10c7821e0, 0, -36},
{&ptr_10c782240, 0, -35},
{&ptr_10c7822a0, 0, -34},
{&ptr_10c782300, 0, -33},
{&ptr_10c782360, 0, -32},
{&ptr_10c7823c0, 0, -31},
{&ptr_10c782420, 0, -30},
{&ptr_10c782480, 0, -29},
{&ptr_10c7824e0, 0, -28},
{&ptr_10c782540, 0, -27},
{&ptr_10c7825a0, 0, -26},
{&ptr_10c782600, 0, -25},
{&ptr_10c782660, 0, -24},
{&ptr_10c7826c0, 0, -23},
{&ptr_10c782720, 0, -22},
{&ptr_10c782780, 0, -21},
{&ptr_10c7827e0, 0, -20},
{&ptr_10c782840, 0, -19},
{&ptr_10c7828a0, 0, -18},
{&ptr_10c782900, 0, -17},
{&ptr_10c782960, 0, -16},
{&ptr_10c7829a8, 0, -15},
{&ptr_10c782a08, 0, -14},
{&ptr_10c782a60, 0, -13},
{&ptr_10c782b30, 0, -12},
{&ptr_10c782b60, 0, -11},
{&ptr_10c782ba8, 0, -10},
{&ptr_10c782bf5, 0, -9},
{&ptr_10c782c62, 0, -8},
{&ptr_10c782caa, 0, -7},
{&ptr_10c782cf7, 0, -6},
{&ptr_10c782d49, 0, -5},
{&ptr_10c782d91, 0, -4},
{&ptr_10c782de0, 0, -3},
{&ptr_10c782e0b, 0, -2},
{&ptr_10c782e53, 0, -1},
{&ptr_10c782eb3, 0, 0},
{&ptr_10c782f04, 0, 1},
{&ptr_10c782f4c, 0, 2},
{&ptr_10c782faf, 0, 3},
{&ptr_10c783003, 0, 4},
{&ptr_10c78304b, 0, 5},
{&ptr_10c7830a1, 0, 6},
{&ptr_10c7830cd, 0, 7},
{&ptr_10c783115, 0, 8},
{&ptr_10c783162, 0, 9},
{&ptr_10c7831a2, 0, 10},
{&ptr_10c783272, 0, 11},
{&ptr_10c783300, 0, 12},
{&ptr_10c783330, 0, 13},
{&ptr_10c783390, 0, 14},
{&ptr_10c7833be, 0, 15},
{&ptr_10c78345a, 0, 16},
{&ptr_10c78447a, 0, 17},
{&ptr_10c784d0a, 0, 18},
{&ptr_10c912020, 0, 19},
{&ptr_10c78353a, 0, 20},
{&ptr_10c783588, 0, 21},
{&ptr_10c7835d8, 0, 22},
{&ptr_10c78360c, 0, 23},
{&ptr_10c783814, 0, 24},
{&ptr_10c7839b9, 0, 25},
{&ptr_10c783a11, 0, 26},
{&ptr_10c783a4f, 0, 27},
{&ptr_10c783b56, 0, 28},
{&ptr_10c783bbe, 0, 29},
{&ptr_10c7840de, 0, 30},
{&ptr_10c784205, 0, 31},
{&ptr_10c78432d, 0, 32},
{&ptr_10c929020, 0, 33},
{&ptr_10c784e3b, 0, 34},
{&ptr_10c784f67, 0, 35},
{&ptr_10c785091, 0, 36},
{&ptr_10c7851be, 0, 37},
{&ptr_10c7852ec, 0, 38},
{&ptr_10c78541b, 0, 39},
{&ptr_10c785545, 0, 40},
{&ptr_10c785674, 0, 41},
{&ptr_10c7857a4, 0, 42},
{&ptr_10c7858d0, 0, 43},
{&ptr_10c785a06, 0, 44},
{&ptr_10c785b4a, 0, 45},
{&ptr_10c785c77, 0, 46},
{&ptr_10c785da6, 0, 47},
{&ptr_10c785ed7, 0, 48},
{&ptr_10c786001, 0, 49},
{&ptr_10c78612c, 0, 50},
{&ptr_10c786257, 0, 51},
{&ptr_10c786384, 0, 52},
{&ptr_10c7864af, 0, 53},
{&ptr_10c7865db, 0, 54},
{&ptr_10c786706, 0, 55},
{&ptr_10c786833, 0, 56},
{&ptr_10c786a53, 0, 57},
{&ptr_10c786a87, 0, 58},
{&ptr_10c786b1f, 0, 59},
{&ptr_10c786b53, 0, 60},
{&ptr_10c786aeb, 0, 61},
{&ptr_10c786b27, 0, 62},
{&ptr_10c786bbf, 0, 63},
{&ptr_10c786a9f, 0, 64},
{&ptr_10c786b37, 0, 65},
{&ptr_10c786b83, 0, 66},
{&ptr_10c786a8b, 0, 67},
{&ptr_10c786b23, 0, 68},
{&ptr_10c786b5b, 0, 69},
{&ptr_10c786a83, 0, 70},
{&ptr_10c786b1b, 0, 71},
{&ptr_10c786b4b, 0, 72},
{&ptr_10c786a8f, 0, 73},
{&ptr_10c786b63, 0, 74},
{&ptr_10c786a93, 0, 75},
{&ptr_10c786b2b, 0, 76},
{&ptr_10c786b6b, 0, 77},
{&ptr_10c786a97, 0, 78},
{&ptr_10c786b2f, 0, 79},
{&ptr_10c786b73, 0, 80},
{&ptr_10c786a9b, 0, 81},
{&ptr_10c786b33, 0, 82},
{&ptr_10c786b7b, 0, 83},
{&ptr_10c786ab3, 0, 84},
{&ptr_10c786bab, 0, 85},
{&ptr_10c786ac7, 0, 86},
{&ptr_10c786b0b, 0, 87},
{&ptr_10c786ab7, 0, 88},
{&ptr_10c786ae7, 0, 89},
{&ptr_10c786acb, 0, 90},
{&ptr_10c786b0f, 0, 91},
{&ptr_10c786ad3, 0, 92},
{&ptr_10c786abf, 0, 93},
{&ptr_10c786af7, 0, 94},
{&ptr_10c786abb, 0, 95},
{&ptr_10c786aef, 0, 96},
{&ptr_10c786ac3, 0, 97},
{&ptr_10c786aff, 0, 98},
{&ptr_10c786b47, 0, 99},
{&ptr_10c786acf, 0, 100},
{&ptr_10c786b17, 0, 101},
{&ptr_10c786b07, 0, 102},
{&ptr_10c786ae3, 0, 103},
{&ptr_10c786ad7, 0, 104},
{&ptr_10c786b13, 0, 105},
{&ptr_10c786b03, 0, 106},
{&ptr_10c786b4f, 0, 107},
{&ptr_10c786adb, 0, 108},
{&ptr_10c786adf, 0, 109},
{&ptr_10c786af3, 0, 110},
{&ptr_10c786afb, 0, 111},
{&ptr_10c786a7a, 0, 112},
{&ptr_10c786c52, 0, 113},
{&ptr_10c786c92, 0, 114},
{&ptr_10c786cc2, 0, 115},
{&ptr_10c787dc2, 0, 116},
{&ptr_10c787de8, 0, 117},
{&ptr_10c787e0b, 0, 118},
{&ptr_10c787e3b, 0, 119},
{&ptr_10c787e6b, 0, 120},
{&ptr_10c78868b, 0, 121},
{&ptr_10c7886bb, 0, 122},
{&ptr_10c788edb, 0, 123},
{&ptr_10c788fab, 0, 124},
{&ptr_10c788feb, 0, 125},
{&ptr_10c789038, 0, 126},
{&ptr_10c789078, 0, 127},
{&ptr_10c7890c7, 0, 1},
{&ptr_10c789107, 0, 2},
{&ptr_10c78915b, 0, 3},
{&ptr_10c7891a0, 0, 4},
{&ptr_10c7891e8, 0, 5},
{&ptr_10c789235, 0, 6},
{&ptr_10c789275, 0, 7},
{&ptr_10c7892c7, 0, 8},
{&ptr_10c78930f, 0, 9},
{&ptr_10c789360, 0, 10},
{&ptr_10c7893a0, 0, 11},
{&ptr_10c7893ee, 0, 12},
{&ptr_10c78942e, 0, 13},
{&ptr_10c789480, 0, 14},
{&ptr_10c7894c0, 0, 15},
{&ptr_10c789510, 0, 16},
{&ptr_10c7895e0, 0, 17},
{&ptr_10c78977c, 0, 18},
{&ptr_10c7897a8, 0, 19},
{&ptr_10c7897cc, 0, 20},
{&ptr_10c78989c, 0, 21},
{&ptr_10c7898f4, 0, 22},
{&ptr_10c789924, 0, 23},
{&ptr_10c789964, 0, 24},
{&ptr_10c7899d4, 0, 25},
{&ptr_10c789534, 0, 26},
{&ptr_10c789a1c, 0, 27},
{&ptr_10c789558, 0, 28},
{&ptr_10c789aec, 0, 29},
{&ptr_10c789b39, 0, 30},
{&ptr_10c789598, 0, 31},
{&ptr_10c789608, 0, 32},
{&ptr_10c789678, 0, 33},
{&ptr_10c789ba9, 0, 34},
{NULL, 0, 35}
};

int		check_integrity_ptr(char *ptr, size_t n, char test_char)
{
	count_check++;
	while(ptr && n)
	{
		if (*ptr != test_char)
			return (-1);
		ptr++;
		--n;
	}
	return (0);
}

void	check_integrity(void)
{
	struct rip	*rip_ptr;
	int			i;

	i = 0;
	rip_ptr = truc;
	while (rip_ptr && rip_ptr->ptr)
	{
		if (*(rip_ptr->ptr) && rip_ptr->len != 0)
		{
			if (check_integrity_ptr(*(rip_ptr->ptr), rip_ptr->len, rip_ptr->test_char))
			{
				printf("Integrity check failed on %p (number %d in the struct).\n", *(rip_ptr->ptr), i);
				hexDump(getName(rip_ptr->ptr), *(rip_ptr->ptr), rip_ptr->len);
			}
		}
		rip_ptr++;
		i++;
	}
}

void	mdr(void)
{
	struct rip	*rip_ptr;
	int			i;

	i = 0;
	rip_ptr = truc;
	while (rip_ptr && rip_ptr->ptr)
	{
		if (*(rip_ptr->ptr))
		{
			hexDump(getName(rip_ptr->ptr), *(rip_ptr->ptr), rip_ptr->len);
		}
		rip_ptr++;
		i++;
	}
}

void	update_rip(void *b, size_t len)
{
	struct rip *rip_ptr;

	rip_ptr = truc;
	while (rip_ptr && rip_ptr->ptr)
	{
		if (*(rip_ptr->ptr) == b)
		{
			// printf("UPDATED\n");
			rip_ptr->len = len;
			break;
		}
		rip_ptr++;
	}
}

char	get_char_from_rip(void *b)
{
	struct rip *rip_ptr;

	rip_ptr = truc;
	while (rip_ptr && rip_ptr->ptr)
	{
		if (*(rip_ptr->ptr) == b)
		{
			return (rip_ptr->test_char);
		}
		rip_ptr++;
	}
	return (-127);
}

void	cust_memset(void *b, int c, size_t len)
{
	count_malloc_memset++;
	c = get_char_from_rip(b);
	memset(b, c, len);
	update_rip(b, len);
	check_integrity();
}

void	cust_free(void *ptr)
{
	count_free++;
	free(ptr);
	update_rip(ptr, 0);
	check_integrity();
}

int main(void)
{
	ptr_10c780020 = malloc(32);
cust_memset(ptr_10c780020, 0, 32);
ptr_10c780060 = malloc(32);
cust_memset(ptr_10c780060, 0, 32);
ptr_10c7800a0 = malloc(64);
cust_memset(ptr_10c7800a0, 0, 64);
ptr_10c780100 = malloc(64);
cust_memset(ptr_10c780100, 0, 64);
ptr_10c780160 = malloc(64);
cust_memset(ptr_10c780160, 0, 64);
ptr_10c7801c0 = malloc(64);
cust_memset(ptr_10c7801c0, 0, 64);
ptr_10c780220 = malloc(64);
cust_memset(ptr_10c780220, 0, 64);
ptr_10c780280 = malloc(32);
cust_memset(ptr_10c780280, 0, 32);
ptr_10c7802c0 = malloc(64);
cust_memset(ptr_10c7802c0, 0, 64);
ptr_10c780320 = malloc(64);
cust_memset(ptr_10c780320, 0, 64);
ptr_10c780380 = malloc(64);
cust_memset(ptr_10c780380, 0, 64);
ptr_10c7803e0 = malloc(64);
cust_memset(ptr_10c7803e0, 0, 64);
ptr_10c780440 = malloc(64);
cust_memset(ptr_10c780440, 0, 64);
ptr_10c7804a0 = malloc(64);
cust_memset(ptr_10c7804a0, 0, 64);
ptr_10c780500 = malloc(64);
cust_memset(ptr_10c780500, 0, 64);
ptr_10c780560 = malloc(64);
cust_memset(ptr_10c780560, 0, 64);
ptr_10c7805c0 = malloc(64);
cust_memset(ptr_10c7805c0, 0, 64);
ptr_10c780620 = malloc(64);
cust_memset(ptr_10c780620, 0, 64);
ptr_10c780680 = malloc(64);
cust_memset(ptr_10c780680, 0, 64);
ptr_10c7806e0 = malloc(64);
cust_memset(ptr_10c7806e0, 0, 64);
ptr_10c780740 = malloc(64);
cust_memset(ptr_10c780740, 0, 64);
ptr_10c7807a0 = malloc(64);
cust_memset(ptr_10c7807a0, 0, 64);
ptr_10c780800 = malloc(64);
cust_memset(ptr_10c780800, 0, 64);
ptr_10c780860 = malloc(64);
cust_memset(ptr_10c780860, 0, 64);
ptr_10c7808c0 = malloc(64);
cust_memset(ptr_10c7808c0, 0, 64);
ptr_10c780920 = malloc(64);
cust_memset(ptr_10c780920, 0, 64);
ptr_10c780980 = malloc(64);
cust_memset(ptr_10c780980, 0, 64);
ptr_10c7809e0 = malloc(64);
cust_memset(ptr_10c7809e0, 0, 64);
ptr_10c780a40 = malloc(64);
cust_memset(ptr_10c780a40, 0, 64);
ptr_10c780aa0 = malloc(64);
cust_memset(ptr_10c780aa0, 0, 64);
ptr_10c780b00 = malloc(64);
cust_memset(ptr_10c780b00, 0, 64);
ptr_10c780b60 = malloc(64);
cust_memset(ptr_10c780b60, 0, 64);
ptr_10c780bc0 = malloc(64);
cust_memset(ptr_10c780bc0, 0, 64);
ptr_10c780c20 = malloc(64);
cust_memset(ptr_10c780c20, 0, 64);
ptr_10c780c80 = malloc(64);
cust_memset(ptr_10c780c80, 0, 64);
ptr_10c780ce0 = malloc(64);
cust_memset(ptr_10c780ce0, 0, 64);
ptr_10c780d40 = malloc(64);
cust_memset(ptr_10c780d40, 0, 64);
ptr_10c780da0 = malloc(64);
cust_memset(ptr_10c780da0, 0, 64);
ptr_10c780e00 = malloc(64);
cust_memset(ptr_10c780e00, 0, 64);
ptr_10c780e60 = malloc(64);
cust_memset(ptr_10c780e60, 0, 64);
ptr_10c780ec0 = malloc(64);
cust_memset(ptr_10c780ec0, 0, 64);
ptr_10c780f20 = malloc(64);
cust_memset(ptr_10c780f20, 0, 64);
ptr_10c780f80 = malloc(64);
cust_memset(ptr_10c780f80, 0, 64);
ptr_10c780fe0 = malloc(64);
cust_memset(ptr_10c780fe0, 0, 64);
ptr_10c781040 = malloc(64);
cust_memset(ptr_10c781040, 0, 64);
ptr_10c7810a0 = malloc(64);
cust_memset(ptr_10c7810a0, 0, 64);
ptr_10c781100 = malloc(64);
cust_memset(ptr_10c781100, 0, 64);
ptr_10c781160 = malloc(64);
cust_memset(ptr_10c781160, 0, 64);
ptr_10c7811c0 = malloc(64);
cust_memset(ptr_10c7811c0, 0, 64);
ptr_10c781220 = malloc(64);
cust_memset(ptr_10c781220, 0, 64);
ptr_10c781280 = malloc(64);
cust_memset(ptr_10c781280, 0, 64);
ptr_10c7812e0 = malloc(64);
cust_memset(ptr_10c7812e0, 0, 64);
ptr_10c781340 = malloc(64);
cust_memset(ptr_10c781340, 0, 64);
ptr_10c7813a0 = malloc(64);
cust_memset(ptr_10c7813a0, 0, 64);
ptr_10c781400 = malloc(64);
cust_memset(ptr_10c781400, 0, 64);
ptr_10c781460 = malloc(64);
cust_memset(ptr_10c781460, 0, 64);
ptr_10c7814c0 = malloc(64);
cust_memset(ptr_10c7814c0, 0, 64);
ptr_10c781520 = malloc(64);
cust_memset(ptr_10c781520, 0, 64);
ptr_10c781580 = malloc(64);
cust_memset(ptr_10c781580, 0, 64);
ptr_10c7815e0 = malloc(64);
cust_memset(ptr_10c7815e0, 0, 64);
ptr_10c781640 = malloc(64);
cust_memset(ptr_10c781640, 0, 64);
ptr_10c7816a0 = malloc(64);
cust_memset(ptr_10c7816a0, 0, 64);
ptr_10c781700 = malloc(64);
cust_memset(ptr_10c781700, 0, 64);
ptr_10c781760 = malloc(64);
cust_memset(ptr_10c781760, 0, 64);
ptr_10c7817c0 = malloc(64);
cust_memset(ptr_10c7817c0, 0, 64);
ptr_10c781820 = malloc(64);
cust_memset(ptr_10c781820, 0, 64);
ptr_10c781880 = malloc(64);
cust_memset(ptr_10c781880, 0, 64);
ptr_10c7818e0 = malloc(64);
cust_memset(ptr_10c7818e0, 0, 64);
ptr_10c781940 = malloc(64);
cust_memset(ptr_10c781940, 0, 64);
ptr_10c7819a0 = malloc(64);
cust_memset(ptr_10c7819a0, 0, 64);
ptr_10c781a00 = malloc(64);
cust_memset(ptr_10c781a00, 0, 64);
ptr_10c781a60 = malloc(64);
cust_memset(ptr_10c781a60, 0, 64);
ptr_10c781ac0 = malloc(64);
cust_memset(ptr_10c781ac0, 0, 64);
ptr_10c781b20 = malloc(64);
cust_memset(ptr_10c781b20, 0, 64);
ptr_10c781b80 = malloc(64);
cust_memset(ptr_10c781b80, 0, 64);
ptr_10c781be0 = malloc(64);
cust_memset(ptr_10c781be0, 0, 64);
ptr_10c781c40 = malloc(64);
cust_memset(ptr_10c781c40, 0, 64);
ptr_10c781ca0 = malloc(64);
cust_memset(ptr_10c781ca0, 0, 64);
ptr_10c781d00 = malloc(64);
cust_memset(ptr_10c781d00, 0, 64);
ptr_10c781d60 = malloc(64);
cust_memset(ptr_10c781d60, 0, 64);
ptr_10c781dc0 = malloc(64);
cust_memset(ptr_10c781dc0, 0, 64);
ptr_10c781e20 = malloc(64);
cust_memset(ptr_10c781e20, 0, 64);
ptr_10c781e80 = malloc(64);
cust_memset(ptr_10c781e80, 0, 64);
ptr_10c781ee0 = malloc(64);
cust_memset(ptr_10c781ee0, 0, 64);
ptr_10c781f40 = malloc(64);
cust_memset(ptr_10c781f40, 0, 64);
ptr_10c781fa0 = malloc(64);
cust_memset(ptr_10c781fa0, 0, 64);
ptr_10c782000 = malloc(64);
cust_memset(ptr_10c782000, 0, 64);
ptr_10c782060 = malloc(64);
cust_memset(ptr_10c782060, 0, 64);
ptr_10c7820c0 = malloc(64);
cust_memset(ptr_10c7820c0, 0, 64);
ptr_10c782120 = malloc(64);
cust_memset(ptr_10c782120, 0, 64);
ptr_10c782180 = malloc(64);
cust_memset(ptr_10c782180, 0, 64);
ptr_10c7821e0 = malloc(64);
cust_memset(ptr_10c7821e0, 0, 64);
ptr_10c782240 = malloc(64);
cust_memset(ptr_10c782240, 0, 64);
ptr_10c7822a0 = malloc(64);
cust_memset(ptr_10c7822a0, 0, 64);
ptr_10c782300 = malloc(64);
cust_memset(ptr_10c782300, 0, 64);
ptr_10c782360 = malloc(64);
cust_memset(ptr_10c782360, 0, 64);
ptr_10c7823c0 = malloc(64);
cust_memset(ptr_10c7823c0, 0, 64);
ptr_10c782420 = malloc(64);
cust_memset(ptr_10c782420, 0, 64);
ptr_10c782480 = malloc(64);
cust_memset(ptr_10c782480, 0, 64);
ptr_10c7824e0 = malloc(64);
cust_memset(ptr_10c7824e0, 0, 64);
ptr_10c782540 = malloc(64);
cust_memset(ptr_10c782540, 0, 64);
ptr_10c7825a0 = malloc(64);
cust_memset(ptr_10c7825a0, 0, 64);
ptr_10c782600 = malloc(64);
cust_memset(ptr_10c782600, 0, 64);
ptr_10c782660 = malloc(64);
cust_memset(ptr_10c782660, 0, 64);
ptr_10c7826c0 = malloc(64);
cust_memset(ptr_10c7826c0, 0, 64);
ptr_10c782720 = malloc(64);
cust_memset(ptr_10c782720, 0, 64);
ptr_10c782780 = malloc(64);
cust_memset(ptr_10c782780, 0, 64);
ptr_10c7827e0 = malloc(64);
cust_memset(ptr_10c7827e0, 0, 64);
ptr_10c782840 = malloc(64);
cust_memset(ptr_10c782840, 0, 64);
ptr_10c7828a0 = malloc(64);
cust_memset(ptr_10c7828a0, 0, 64);
ptr_10c782900 = malloc(64);
cust_memset(ptr_10c782900, 0, 64);
ptr_10c782960 = malloc(40);
cust_memset(ptr_10c782960, 0, 40);
ptr_10c7829a8 = malloc(64);
cust_memset(ptr_10c7829a8, 0, 64);
ptr_10c782a08 = malloc(56);
cust_memset(ptr_10c782a08, 0, 56);
ptr_10c782a60 = malloc(176);
cust_memset(ptr_10c782a60, 0, 176);
ptr_10c782b30 = malloc(16);
cust_memset(ptr_10c782b30, 0, 16);
ptr_10c782b60 = malloc(40);
cust_memset(ptr_10c782b60, 0, 40);
ptr_10c782ba8 = malloc(45);
cust_memset(ptr_10c782ba8, 0, 45);
ptr_10c782bf5 = malloc(77);
cust_memset(ptr_10c782bf5, 0, 77);
ptr_10c782c62 = malloc(40);
cust_memset(ptr_10c782c62, 0, 40);
ptr_10c782caa = malloc(45);
cust_memset(ptr_10c782caa, 0, 45);
ptr_10c782cf7 = malloc(50);
cust_memset(ptr_10c782cf7, 0, 50);
ptr_10c782d49 = malloc(40);
cust_memset(ptr_10c782d49, 0, 40);
ptr_10c782d91 = malloc(47);
cust_memset(ptr_10c782d91, 0, 47);
ptr_10c782de0 = malloc(11);
cust_memset(ptr_10c782de0, 0, 11);
ptr_10c782e0b = malloc(40);
cust_memset(ptr_10c782e0b, 0, 40);
ptr_10c782e53 = malloc(64);
cust_memset(ptr_10c782e53, 0, 64);
ptr_10c782eb3 = malloc(49);
cust_memset(ptr_10c782eb3, 0, 49);
ptr_10c782f04 = malloc(40);
cust_memset(ptr_10c782f04, 0, 40);
ptr_10c782f4c = malloc(67);
cust_memset(ptr_10c782f4c, 0, 67);
ptr_10c782faf = malloc(52);
cust_memset(ptr_10c782faf, 0, 52);
ptr_10c783003 = malloc(40);
cust_memset(ptr_10c783003, 0, 40);
ptr_10c78304b = malloc(54);
cust_memset(ptr_10c78304b, 0, 54);
ptr_10c7830a1 = malloc(12);
cust_memset(ptr_10c7830a1, 0, 12);
ptr_10c7830cd = malloc(40);
cust_memset(ptr_10c7830cd, 0, 40);
ptr_10c783115 = malloc(45);
cust_memset(ptr_10c783115, 0, 45);
ptr_10c783162 = malloc(32);
cust_memset(ptr_10c783162, 0, 32);
ptr_10c7831a2 = malloc(176);
cust_memset(ptr_10c7831a2, 0, 176);
ptr_10c783272 = malloc(110);
cust_memset(ptr_10c783272, 0, 110);
ptr_10c783300 = malloc(16);
cust_memset(ptr_10c783300, 0, 16);
ptr_10c783330 = malloc(64);
cust_memset(ptr_10c783330, 0, 64);
ptr_10c783390 = malloc(14);
cust_memset(ptr_10c783390, 0, 14);
ptr_10c7833be = malloc(124);
cust_memset(ptr_10c7833be, 0, 124);
ptr_10c78345a = malloc(256);
cust_memset(ptr_10c78345a, 0, 256);
cust_free(ptr_10c78345a);
ptr_10c78345a = NULL;
ptr_10c78345a = malloc(4096);
cust_memset(ptr_10c78345a, 0, 4096);
ptr_10c78447a = malloc(2160);
cust_memset(ptr_10c78447a, 0, 2160);
cust_free(ptr_10c78345a);
ptr_10c78345a = NULL;
ptr_10c78345a = malloc(3312);
cust_memset(ptr_10c78345a, 0, 3312);
ptr_10c784d0a = malloc(4096);
cust_memset(ptr_10c784d0a, 0, 4096);
//DEBUT REALLCOC
ptr_10c912020 = realloc(ptr_10c78345a, 91556);
//ptr_10c912020 = malloc(91556);
cust_memset(ptr_10c912020, 0, 91556);
//0x10c912020
//FIN REALLOC
cust_free(ptr_10c784d0a);
ptr_10c784d0a = NULL;
ptr_10c78345a = malloc(192);
cust_memset(ptr_10c78345a, 0, 192);
ptr_10c78353a = malloc(46);
cust_memset(ptr_10c78353a, 0, 46);
ptr_10c783588 = malloc(48);
cust_memset(ptr_10c783588, 0, 48);
ptr_10c7835d8 = malloc(20);
cust_memset(ptr_10c7835d8, 0, 20);
ptr_10c78360c = malloc(488);
cust_memset(ptr_10c78360c, 0, 488);
ptr_10c783814 = malloc(389);
cust_memset(ptr_10c783814, 0, 389);
ptr_10c7839b9 = malloc(56);
cust_memset(ptr_10c7839b9, 0, 56);
ptr_10c783a11 = malloc(30);
cust_memset(ptr_10c783a11, 0, 30);
ptr_10c783a4f = malloc(231);
cust_memset(ptr_10c783a4f, 0, 231);
ptr_10c783b56 = malloc(72);
cust_memset(ptr_10c783b56, 0, 72);
ptr_10c783bbe = malloc(1280);
cust_memset(ptr_10c783bbe, 0, 1280);
ptr_10c7840de = malloc(263);
cust_memset(ptr_10c7840de, 0, 263);
ptr_10c784205 = malloc(264);
cust_memset(ptr_10c784205, 0, 264);
ptr_10c78432d = malloc(263);
cust_memset(ptr_10c78432d, 0, 263);
cust_free(ptr_10c78432d);
ptr_10c78432d = NULL;
ptr_10c929020 = malloc(32768);
cust_memset(ptr_10c929020, 0, 32768);
ptr_10c78432d = malloc(267);
cust_memset(ptr_10c78432d, 0, 267);
ptr_10c784d0a = malloc(273);
cust_memset(ptr_10c784d0a, 0, 273);
ptr_10c784e3b = malloc(268);
cust_memset(ptr_10c784e3b, 0, 268);
ptr_10c784f67 = malloc(266);
cust_memset(ptr_10c784f67, 0, 266);
ptr_10c785091 = malloc(269);
cust_memset(ptr_10c785091, 0, 269);
ptr_10c7851be = malloc(270);
cust_memset(ptr_10c7851be, 0, 270);
ptr_10c7852ec = malloc(271);
cust_memset(ptr_10c7852ec, 0, 271);
ptr_10c78541b = malloc(266);
cust_memset(ptr_10c78541b, 0, 266);
ptr_10c785545 = malloc(271);
cust_memset(ptr_10c785545, 0, 271);
ptr_10c785674 = malloc(272);
cust_memset(ptr_10c785674, 0, 272);
ptr_10c7857a4 = malloc(268);
cust_memset(ptr_10c7857a4, 0, 268);
ptr_10c7858d0 = malloc(278);
cust_memset(ptr_10c7858d0, 0, 278);
ptr_10c785a06 = malloc(292);
cust_memset(ptr_10c785a06, 0, 292);
ptr_10c785b4a = malloc(269);
cust_memset(ptr_10c785b4a, 0, 269);
ptr_10c785c77 = malloc(271);
cust_memset(ptr_10c785c77, 0, 271);
ptr_10c785da6 = malloc(273);
cust_memset(ptr_10c785da6, 0, 273);
ptr_10c785ed7 = malloc(266);
cust_memset(ptr_10c785ed7, 0, 266);
ptr_10c786001 = malloc(267);
cust_memset(ptr_10c786001, 0, 267);
ptr_10c78612c = malloc(267);
cust_memset(ptr_10c78612c, 0, 267);
ptr_10c786257 = malloc(269);
cust_memset(ptr_10c786257, 0, 269);
ptr_10c786384 = malloc(267);
cust_memset(ptr_10c786384, 0, 267);
ptr_10c7864af = malloc(268);
cust_memset(ptr_10c7864af, 0, 268);
ptr_10c7865db = malloc(267);
cust_memset(ptr_10c7865db, 0, 267);
ptr_10c786706 = malloc(269);
cust_memset(ptr_10c786706, 0, 269);
cust_free(ptr_10c929020);
ptr_10c929020 = NULL;
ptr_10c786833 = malloc(512);
cust_memset(ptr_10c786833, 0, 512);
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(120);
cust_memset(ptr_10c786a87, 0, 120);
ptr_10c786b1f = malloc(20);
cust_memset(ptr_10c786b1f, 0, 20);
ptr_10c786b53 = malloc(120);
cust_memset(ptr_10c786b53, 0, 120);
cust_free(ptr_10c786b1f);
ptr_10c786b1f = NULL;
cust_free(ptr_10c786b53);
ptr_10c786b53 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(120);
cust_memset(ptr_10c786a53, 0, 120);
ptr_10c786aeb = malloc(28);
cust_memset(ptr_10c786aeb, 0, 28);
ptr_10c786b27 = malloc(120);
cust_memset(ptr_10c786b27, 0, 120);
ptr_10c786bbf = malloc(28);
cust_memset(ptr_10c786bbf, 0, 28);
cust_free(ptr_10c786b27);
ptr_10c786b27 = NULL;
cust_free(ptr_10c786bbf);
ptr_10c786bbf = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786aeb);
ptr_10c786aeb = NULL;
ptr_10c786a53 = malloc(44);
cust_memset(ptr_10c786a53, 0, 44);
ptr_10c786a9f = malloc(120);
cust_memset(ptr_10c786a9f, 0, 120);
ptr_10c786b37 = malloc(44);
cust_memset(ptr_10c786b37, 0, 44);
ptr_10c786b83 = malloc(120);
cust_memset(ptr_10c786b83, 0, 120);
cust_free(ptr_10c786b37);
ptr_10c786b37 = NULL;
cust_free(ptr_10c786b83);
ptr_10c786b83 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9f);
ptr_10c786a9f = NULL;
ptr_10c786a53 = malloc(24);
cust_memset(ptr_10c786a53, 0, 24);
ptr_10c786a8b = malloc(120);
cust_memset(ptr_10c786a8b, 0, 120);
ptr_10c786b23 = malloc(24);
cust_memset(ptr_10c786b23, 0, 24);
ptr_10c786b5b = malloc(120);
cust_memset(ptr_10c786b5b, 0, 120);
cust_free(ptr_10c786b23);
ptr_10c786b23 = NULL;
cust_free(ptr_10c786b5b);
ptr_10c786b5b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8b);
ptr_10c786a8b = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(120);
cust_memset(ptr_10c786a83, 0, 120);
ptr_10c786b1b = malloc(16);
cust_memset(ptr_10c786b1b, 0, 16);
ptr_10c786b4b = malloc(120);
cust_memset(ptr_10c786b4b, 0, 120);
cust_free(ptr_10c786b1b);
ptr_10c786b1b = NULL;
cust_free(ptr_10c786b4b);
ptr_10c786b4b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(28);
cust_memset(ptr_10c786a53, 0, 28);
ptr_10c786a8f = malloc(120);
cust_memset(ptr_10c786a8f, 0, 120);
ptr_10c786b27 = malloc(28);
cust_memset(ptr_10c786b27, 0, 28);
ptr_10c786b63 = malloc(120);
cust_memset(ptr_10c786b63, 0, 120);
cust_free(ptr_10c786b27);
ptr_10c786b27 = NULL;
cust_free(ptr_10c786b63);
ptr_10c786b63 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8f);
ptr_10c786a8f = NULL;
ptr_10c786a53 = malloc(32);
cust_memset(ptr_10c786a53, 0, 32);
ptr_10c786a93 = malloc(120);
cust_memset(ptr_10c786a93, 0, 120);
ptr_10c786b2b = malloc(32);
cust_memset(ptr_10c786b2b, 0, 32);
ptr_10c786b6b = malloc(120);
cust_memset(ptr_10c786b6b, 0, 120);
cust_free(ptr_10c786b2b);
ptr_10c786b2b = NULL;
cust_free(ptr_10c786b6b);
ptr_10c786b6b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a93);
ptr_10c786a93 = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(120);
cust_memset(ptr_10c786a97, 0, 120);
ptr_10c786b2f = malloc(36);
cust_memset(ptr_10c786b2f, 0, 36);
ptr_10c786b73 = malloc(120);
cust_memset(ptr_10c786b73, 0, 120);
cust_free(ptr_10c786b2f);
ptr_10c786b2f = NULL;
cust_free(ptr_10c786b73);
ptr_10c786b73 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(120);
cust_memset(ptr_10c786a83, 0, 120);
ptr_10c786b1b = malloc(16);
cust_memset(ptr_10c786b1b, 0, 16);
ptr_10c786b4b = malloc(120);
cust_memset(ptr_10c786b4b, 0, 120);
cust_free(ptr_10c786b1b);
ptr_10c786b1b = NULL;
cust_free(ptr_10c786b4b);
ptr_10c786b4b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(120);
cust_memset(ptr_10c786a97, 0, 120);
ptr_10c786b2f = malloc(36);
cust_memset(ptr_10c786b2f, 0, 36);
ptr_10c786b73 = malloc(120);
cust_memset(ptr_10c786b73, 0, 120);
cust_free(ptr_10c786b2f);
ptr_10c786b2f = NULL;
cust_free(ptr_10c786b73);
ptr_10c786b73 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(40);
cust_memset(ptr_10c786a53, 0, 40);
ptr_10c786a9b = malloc(120);
cust_memset(ptr_10c786a9b, 0, 120);
ptr_10c786b33 = malloc(40);
cust_memset(ptr_10c786b33, 0, 40);
ptr_10c786b7b = malloc(120);
cust_memset(ptr_10c786b7b, 0, 120);
cust_free(ptr_10c786b33);
ptr_10c786b33 = NULL;
cust_free(ptr_10c786b7b);
ptr_10c786b7b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9b);
ptr_10c786a9b = NULL;
ptr_10c786a53 = malloc(24);
cust_memset(ptr_10c786a53, 0, 24);
ptr_10c786a8b = malloc(120);
cust_memset(ptr_10c786a8b, 0, 120);
ptr_10c786b23 = malloc(24);
cust_memset(ptr_10c786b23, 0, 24);
ptr_10c786b5b = malloc(120);
cust_memset(ptr_10c786b5b, 0, 120);
cust_free(ptr_10c786b23);
ptr_10c786b23 = NULL;
cust_free(ptr_10c786b5b);
ptr_10c786b5b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8b);
ptr_10c786a8b = NULL;
ptr_10c786a53 = malloc(64);
cust_memset(ptr_10c786a53, 0, 64);
ptr_10c786ab3 = malloc(120);
cust_memset(ptr_10c786ab3, 0, 120);
ptr_10c786b4b = malloc(64);
cust_memset(ptr_10c786b4b, 0, 64);
ptr_10c786bab = malloc(120);
cust_memset(ptr_10c786bab, 0, 120);
cust_free(ptr_10c786b4b);
ptr_10c786b4b = NULL;
cust_free(ptr_10c786bab);
ptr_10c786bab = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786ab3);
ptr_10c786ab3 = NULL;
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(120);
cust_memset(ptr_10c786a87, 0, 120);
ptr_10c786b1f = malloc(20);
cust_memset(ptr_10c786b1f, 0, 20);
ptr_10c786b53 = malloc(120);
cust_memset(ptr_10c786b53, 0, 120);
cust_free(ptr_10c786b1f);
ptr_10c786b1f = NULL;
cust_free(ptr_10c786b53);
ptr_10c786b53 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(28);
cust_memset(ptr_10c786a53, 0, 28);
ptr_10c786a8f = malloc(120);
cust_memset(ptr_10c786a8f, 0, 120);
ptr_10c786b27 = malloc(28);
cust_memset(ptr_10c786b27, 0, 28);
ptr_10c786b63 = malloc(120);
cust_memset(ptr_10c786b63, 0, 120);
cust_free(ptr_10c786b27);
ptr_10c786b27 = NULL;
cust_free(ptr_10c786b63);
ptr_10c786b63 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8f);
ptr_10c786a8f = NULL;
ptr_10c786a53 = malloc(28);
cust_memset(ptr_10c786a53, 0, 28);
ptr_10c786a8f = malloc(120);
cust_memset(ptr_10c786a8f, 0, 120);
ptr_10c786b27 = malloc(28);
cust_memset(ptr_10c786b27, 0, 28);
ptr_10c786b63 = malloc(120);
cust_memset(ptr_10c786b63, 0, 120);
cust_free(ptr_10c786b27);
ptr_10c786b27 = NULL;
cust_free(ptr_10c786b63);
ptr_10c786b63 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8f);
ptr_10c786a8f = NULL;
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(120);
cust_memset(ptr_10c786a87, 0, 120);
ptr_10c786b1f = malloc(20);
cust_memset(ptr_10c786b1f, 0, 20);
ptr_10c786b53 = malloc(120);
cust_memset(ptr_10c786b53, 0, 120);
cust_free(ptr_10c786b1f);
ptr_10c786b1f = NULL;
cust_free(ptr_10c786b53);
ptr_10c786b53 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(120);
cust_memset(ptr_10c786a97, 0, 120);
ptr_10c786b2f = malloc(36);
cust_memset(ptr_10c786b2f, 0, 36);
ptr_10c786b73 = malloc(120);
cust_memset(ptr_10c786b73, 0, 120);
cust_free(ptr_10c786b2f);
ptr_10c786b2f = NULL;
cust_free(ptr_10c786b73);
ptr_10c786b73 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(44);
cust_memset(ptr_10c786a53, 0, 44);
ptr_10c786a9f = malloc(120);
cust_memset(ptr_10c786a9f, 0, 120);
ptr_10c786b37 = malloc(44);
cust_memset(ptr_10c786b37, 0, 44);
ptr_10c786b83 = malloc(120);
cust_memset(ptr_10c786b83, 0, 120);
cust_free(ptr_10c786b37);
ptr_10c786b37 = NULL;
cust_free(ptr_10c786b83);
ptr_10c786b83 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9f);
ptr_10c786a9f = NULL;
ptr_10c786a53 = malloc(24);
cust_memset(ptr_10c786a53, 0, 24);
ptr_10c786a8b = malloc(120);
cust_memset(ptr_10c786a8b, 0, 120);
ptr_10c786b23 = malloc(24);
cust_memset(ptr_10c786b23, 0, 24);
ptr_10c786b5b = malloc(120);
cust_memset(ptr_10c786b5b, 0, 120);
cust_free(ptr_10c786b23);
ptr_10c786b23 = NULL;
cust_free(ptr_10c786b5b);
ptr_10c786b5b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8b);
ptr_10c786a8b = NULL;
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(120);
cust_memset(ptr_10c786a87, 0, 120);
ptr_10c786b1f = malloc(20);
cust_memset(ptr_10c786b1f, 0, 20);
ptr_10c786b53 = malloc(120);
cust_memset(ptr_10c786b53, 0, 120);
cust_free(ptr_10c786b1f);
ptr_10c786b1f = NULL;
cust_free(ptr_10c786b53);
ptr_10c786b53 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(28);
cust_memset(ptr_10c786a53, 0, 28);
ptr_10c786a8f = malloc(120);
cust_memset(ptr_10c786a8f, 0, 120);
ptr_10c786b27 = malloc(28);
cust_memset(ptr_10c786b27, 0, 28);
ptr_10c786b63 = malloc(120);
cust_memset(ptr_10c786b63, 0, 120);
cust_free(ptr_10c786b27);
ptr_10c786b27 = NULL;
cust_free(ptr_10c786b63);
ptr_10c786b63 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8f);
ptr_10c786a8f = NULL;
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(120);
cust_memset(ptr_10c786a87, 0, 120);
ptr_10c786b1f = malloc(20);
cust_memset(ptr_10c786b1f, 0, 20);
ptr_10c786b53 = malloc(120);
cust_memset(ptr_10c786b53, 0, 120);
cust_free(ptr_10c786b1f);
ptr_10c786b1f = NULL;
cust_free(ptr_10c786b53);
ptr_10c786b53 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(120);
cust_memset(ptr_10c786a87, 0, 120);
ptr_10c786b1f = malloc(20);
cust_memset(ptr_10c786b1f, 0, 20);
ptr_10c786b53 = malloc(120);
cust_memset(ptr_10c786b53, 0, 120);
cust_free(ptr_10c786b1f);
ptr_10c786b1f = NULL;
cust_free(ptr_10c786b53);
ptr_10c786b53 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(120);
cust_memset(ptr_10c786a83, 0, 120);
ptr_10c786b1b = malloc(16);
cust_memset(ptr_10c786b1b, 0, 16);
ptr_10c786b4b = malloc(120);
cust_memset(ptr_10c786b4b, 0, 120);
cust_free(ptr_10c786b1b);
ptr_10c786b1b = NULL;
cust_free(ptr_10c786b4b);
ptr_10c786b4b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(44);
cust_memset(ptr_10c786a53, 0, 44);
ptr_10c786a9f = malloc(120);
cust_memset(ptr_10c786a9f, 0, 120);
ptr_10c786b37 = malloc(44);
cust_memset(ptr_10c786b37, 0, 44);
ptr_10c786b83 = malloc(120);
cust_memset(ptr_10c786b83, 0, 120);
cust_free(ptr_10c786b37);
ptr_10c786b37 = NULL;
cust_free(ptr_10c786b83);
ptr_10c786b83 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9f);
ptr_10c786a9f = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(16);
cust_memset(ptr_10c786a97, 0, 16);
ptr_10c786ac7 = malloc(36);
cust_memset(ptr_10c786ac7, 0, 36);
ptr_10c786b0b = malloc(16);
cust_memset(ptr_10c786b0b, 0, 16);
cust_free(ptr_10c786ac7);
ptr_10c786ac7 = NULL;
cust_free(ptr_10c786b0b);
ptr_10c786b0b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(20);
cust_memset(ptr_10c786a83, 0, 20);
ptr_10c786ab7 = malloc(16);
cust_memset(ptr_10c786ab7, 0, 16);
ptr_10c786ae7 = malloc(20);
cust_memset(ptr_10c786ae7, 0, 20);
cust_free(ptr_10c786ab7);
ptr_10c786ab7 = NULL;
cust_free(ptr_10c786ae7);
ptr_10c786ae7 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(20);
cust_memset(ptr_10c786a97, 0, 20);
ptr_10c786acb = malloc(36);
cust_memset(ptr_10c786acb, 0, 36);
ptr_10c786b0f = malloc(20);
cust_memset(ptr_10c786b0f, 0, 20);
cust_free(ptr_10c786acb);
ptr_10c786acb = NULL;
cust_free(ptr_10c786b0f);
ptr_10c786b0f = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(44);
cust_memset(ptr_10c786a53, 0, 44);
ptr_10c786a9f = malloc(20);
cust_memset(ptr_10c786a9f, 0, 20);
ptr_10c786ad3 = malloc(44);
cust_memset(ptr_10c786ad3, 0, 44);
ptr_10c786b1f = malloc(20);
cust_memset(ptr_10c786b1f, 0, 20);
cust_free(ptr_10c786ad3);
ptr_10c786ad3 = NULL;
cust_free(ptr_10c786b1f);
ptr_10c786b1f = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9f);
ptr_10c786a9f = NULL;
ptr_10c786a53 = malloc(24);
cust_memset(ptr_10c786a53, 0, 24);
ptr_10c786a8b = malloc(20);
cust_memset(ptr_10c786a8b, 0, 20);
ptr_10c786abf = malloc(24);
cust_memset(ptr_10c786abf, 0, 24);
ptr_10c786af7 = malloc(20);
cust_memset(ptr_10c786af7, 0, 20);
cust_free(ptr_10c786abf);
ptr_10c786abf = NULL;
cust_free(ptr_10c786af7);
ptr_10c786af7 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8b);
ptr_10c786a8b = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(20);
cust_memset(ptr_10c786a97, 0, 20);
ptr_10c786acb = malloc(36);
cust_memset(ptr_10c786acb, 0, 36);
ptr_10c786b0f = malloc(20);
cust_memset(ptr_10c786b0f, 0, 20);
cust_free(ptr_10c786acb);
ptr_10c786acb = NULL;
cust_free(ptr_10c786b0f);
ptr_10c786b0f = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(20);
cust_memset(ptr_10c786a83, 0, 20);
ptr_10c786ab7 = malloc(16);
cust_memset(ptr_10c786ab7, 0, 16);
ptr_10c786ae7 = malloc(20);
cust_memset(ptr_10c786ae7, 0, 20);
cust_free(ptr_10c786ab7);
ptr_10c786ab7 = NULL;
cust_free(ptr_10c786ae7);
ptr_10c786ae7 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(20);
cust_memset(ptr_10c786a87, 0, 20);
ptr_10c786abb = malloc(20);
cust_memset(ptr_10c786abb, 0, 20);
ptr_10c786aef = malloc(20);
cust_memset(ptr_10c786aef, 0, 20);
cust_free(ptr_10c786abb);
ptr_10c786abb = NULL;
cust_free(ptr_10c786aef);
ptr_10c786aef = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(28);
cust_memset(ptr_10c786a53, 0, 28);
ptr_10c786a8f = malloc(20);
cust_memset(ptr_10c786a8f, 0, 20);
ptr_10c786ac3 = malloc(28);
cust_memset(ptr_10c786ac3, 0, 28);
ptr_10c786aff = malloc(20);
cust_memset(ptr_10c786aff, 0, 20);
cust_free(ptr_10c786ac3);
ptr_10c786ac3 = NULL;
cust_free(ptr_10c786aff);
ptr_10c786aff = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8f);
ptr_10c786a8f = NULL;
ptr_10c786a53 = malloc(64);
cust_memset(ptr_10c786a53, 0, 64);
ptr_10c786ab3 = malloc(20);
cust_memset(ptr_10c786ab3, 0, 20);
ptr_10c786ae7 = malloc(64);
cust_memset(ptr_10c786ae7, 0, 64);
ptr_10c786b47 = malloc(20);
cust_memset(ptr_10c786b47, 0, 20);
cust_free(ptr_10c786ae7);
ptr_10c786ae7 = NULL;
cust_free(ptr_10c786b47);
ptr_10c786b47 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786ab3);
ptr_10c786ab3 = NULL;
ptr_10c786a53 = malloc(24);
cust_memset(ptr_10c786a53, 0, 24);
ptr_10c786a8b = malloc(20);
cust_memset(ptr_10c786a8b, 0, 20);
ptr_10c786abf = malloc(24);
cust_memset(ptr_10c786abf, 0, 24);
ptr_10c786af7 = malloc(20);
cust_memset(ptr_10c786af7, 0, 20);
cust_free(ptr_10c786abf);
ptr_10c786abf = NULL;
cust_free(ptr_10c786af7);
ptr_10c786af7 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8b);
ptr_10c786a8b = NULL;
ptr_10c786a53 = malloc(40);
cust_memset(ptr_10c786a53, 0, 40);
ptr_10c786a9b = malloc(20);
cust_memset(ptr_10c786a9b, 0, 20);
ptr_10c786acf = malloc(40);
cust_memset(ptr_10c786acf, 0, 40);
ptr_10c786b17 = malloc(20);
cust_memset(ptr_10c786b17, 0, 20);
cust_free(ptr_10c786acf);
ptr_10c786acf = NULL;
cust_free(ptr_10c786b17);
ptr_10c786b17 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9b);
ptr_10c786a9b = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(20);
cust_memset(ptr_10c786a97, 0, 20);
ptr_10c786acb = malloc(36);
cust_memset(ptr_10c786acb, 0, 36);
ptr_10c786b0f = malloc(20);
cust_memset(ptr_10c786b0f, 0, 20);
cust_free(ptr_10c786acb);
ptr_10c786acb = NULL;
cust_free(ptr_10c786b0f);
ptr_10c786b0f = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(20);
cust_memset(ptr_10c786a83, 0, 20);
ptr_10c786ab7 = malloc(16);
cust_memset(ptr_10c786ab7, 0, 16);
ptr_10c786ae7 = malloc(20);
cust_memset(ptr_10c786ae7, 0, 20);
cust_free(ptr_10c786ab7);
ptr_10c786ab7 = NULL;
cust_free(ptr_10c786ae7);
ptr_10c786ae7 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(20);
cust_memset(ptr_10c786a97, 0, 20);
ptr_10c786acb = malloc(36);
cust_memset(ptr_10c786acb, 0, 36);
ptr_10c786b0f = malloc(20);
cust_memset(ptr_10c786b0f, 0, 20);
cust_free(ptr_10c786acb);
ptr_10c786acb = NULL;
cust_free(ptr_10c786b0f);
ptr_10c786b0f = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(32);
cust_memset(ptr_10c786a53, 0, 32);
ptr_10c786a93 = malloc(20);
cust_memset(ptr_10c786a93, 0, 20);
ptr_10c786ac7 = malloc(32);
cust_memset(ptr_10c786ac7, 0, 32);
ptr_10c786b07 = malloc(20);
cust_memset(ptr_10c786b07, 0, 20);
cust_free(ptr_10c786ac7);
ptr_10c786ac7 = NULL;
cust_free(ptr_10c786b07);
ptr_10c786b07 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a93);
ptr_10c786a93 = NULL;
ptr_10c786a53 = malloc(28);
cust_memset(ptr_10c786a53, 0, 28);
ptr_10c786a8f = malloc(20);
cust_memset(ptr_10c786a8f, 0, 20);
ptr_10c786ac3 = malloc(28);
cust_memset(ptr_10c786ac3, 0, 28);
ptr_10c786aff = malloc(20);
cust_memset(ptr_10c786aff, 0, 20);
cust_free(ptr_10c786ac3);
ptr_10c786ac3 = NULL;
cust_free(ptr_10c786aff);
ptr_10c786aff = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8f);
ptr_10c786a8f = NULL;
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(44);
cust_memset(ptr_10c786a87, 0, 44);
ptr_10c786ad3 = malloc(20);
cust_memset(ptr_10c786ad3, 0, 20);
ptr_10c786b07 = malloc(44);
cust_memset(ptr_10c786b07, 0, 44);
cust_free(ptr_10c786ad3);
ptr_10c786ad3 = NULL;
cust_free(ptr_10c786b07);
ptr_10c786b07 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(44);
cust_memset(ptr_10c786a53, 0, 44);
ptr_10c786a9f = malloc(36);
cust_memset(ptr_10c786a9f, 0, 36);
ptr_10c786ae3 = malloc(44);
cust_memset(ptr_10c786ae3, 0, 44);
ptr_10c786b2f = malloc(36);
cust_memset(ptr_10c786b2f, 0, 36);
cust_free(ptr_10c786ae3);
ptr_10c786ae3 = NULL;
cust_free(ptr_10c786b2f);
ptr_10c786b2f = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9f);
ptr_10c786a9f = NULL;
ptr_10c786a53 = malloc(28);
cust_memset(ptr_10c786a53, 0, 28);
ptr_10c786a8f = malloc(40);
cust_memset(ptr_10c786a8f, 0, 40);
ptr_10c786ad7 = malloc(28);
cust_memset(ptr_10c786ad7, 0, 28);
ptr_10c786b13 = malloc(40);
cust_memset(ptr_10c786b13, 0, 40);
cust_free(ptr_10c786ad7);
ptr_10c786ad7 = NULL;
cust_free(ptr_10c786b13);
ptr_10c786b13 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8f);
ptr_10c786a8f = NULL;
ptr_10c786a53 = malloc(40);
cust_memset(ptr_10c786a53, 0, 40);
ptr_10c786a9b = malloc(24);
cust_memset(ptr_10c786a9b, 0, 24);
ptr_10c786ad3 = malloc(40);
cust_memset(ptr_10c786ad3, 0, 40);
ptr_10c786b1b = malloc(24);
cust_memset(ptr_10c786b1b, 0, 24);
cust_free(ptr_10c786ad3);
ptr_10c786ad3 = NULL;
cust_free(ptr_10c786b1b);
ptr_10c786b1b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9b);
ptr_10c786a9b = NULL;
ptr_10c786a53 = malloc(28);
cust_memset(ptr_10c786a53, 0, 28);
ptr_10c786a8f = malloc(24);
cust_memset(ptr_10c786a8f, 0, 24);
ptr_10c786ac7 = malloc(28);
cust_memset(ptr_10c786ac7, 0, 28);
ptr_10c786b03 = malloc(24);
cust_memset(ptr_10c786b03, 0, 24);
cust_free(ptr_10c786ac7);
ptr_10c786ac7 = NULL;
cust_free(ptr_10c786b03);
ptr_10c786b03 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8f);
ptr_10c786a8f = NULL;
ptr_10c786a53 = malloc(32);
cust_memset(ptr_10c786a53, 0, 32);
ptr_10c786a93 = malloc(28);
cust_memset(ptr_10c786a93, 0, 28);
ptr_10c786acf = malloc(32);
cust_memset(ptr_10c786acf, 0, 32);
ptr_10c786b0f = malloc(28);
cust_memset(ptr_10c786b0f, 0, 28);
cust_free(ptr_10c786acf);
ptr_10c786acf = NULL;
cust_free(ptr_10c786b0f);
ptr_10c786b0f = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a93);
ptr_10c786a93 = NULL;
ptr_10c786a53 = malloc(24);
cust_memset(ptr_10c786a53, 0, 24);
ptr_10c786a8b = malloc(28);
cust_memset(ptr_10c786a8b, 0, 28);
ptr_10c786ac7 = malloc(24);
cust_memset(ptr_10c786ac7, 0, 24);
ptr_10c786aff = malloc(28);
cust_memset(ptr_10c786aff, 0, 28);
cust_free(ptr_10c786ac7);
ptr_10c786ac7 = NULL;
cust_free(ptr_10c786aff);
ptr_10c786aff = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8b);
ptr_10c786a8b = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(28);
cust_memset(ptr_10c786a97, 0, 28);
ptr_10c786ad3 = malloc(36);
cust_memset(ptr_10c786ad3, 0, 36);
ptr_10c786b17 = malloc(28);
cust_memset(ptr_10c786b17, 0, 28);
cust_free(ptr_10c786ad3);
ptr_10c786ad3 = NULL;
cust_free(ptr_10c786b17);
ptr_10c786b17 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(28);
cust_memset(ptr_10c786a83, 0, 28);
ptr_10c786abf = malloc(16);
cust_memset(ptr_10c786abf, 0, 16);
ptr_10c786aef = malloc(28);
cust_memset(ptr_10c786aef, 0, 28);
cust_free(ptr_10c786abf);
ptr_10c786abf = NULL;
cust_free(ptr_10c786aef);
ptr_10c786aef = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(28);
cust_memset(ptr_10c786a83, 0, 28);
ptr_10c786abf = malloc(16);
cust_memset(ptr_10c786abf, 0, 16);
ptr_10c786aef = malloc(28);
cust_memset(ptr_10c786aef, 0, 28);
cust_free(ptr_10c786abf);
ptr_10c786abf = NULL;
cust_free(ptr_10c786aef);
ptr_10c786aef = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(64);
cust_memset(ptr_10c786a53, 0, 64);
ptr_10c786ab3 = malloc(28);
cust_memset(ptr_10c786ab3, 0, 28);
ptr_10c786aef = malloc(64);
cust_memset(ptr_10c786aef, 0, 64);
ptr_10c786b4f = malloc(28);
cust_memset(ptr_10c786b4f, 0, 28);
cust_free(ptr_10c786aef);
ptr_10c786aef = NULL;
cust_free(ptr_10c786b4f);
ptr_10c786b4f = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786ab3);
ptr_10c786ab3 = NULL;
ptr_10c786a53 = malloc(24);
cust_memset(ptr_10c786a53, 0, 24);
ptr_10c786a8b = malloc(28);
cust_memset(ptr_10c786a8b, 0, 28);
ptr_10c786ac7 = malloc(24);
cust_memset(ptr_10c786ac7, 0, 24);
ptr_10c786aff = malloc(28);
cust_memset(ptr_10c786aff, 0, 28);
cust_free(ptr_10c786ac7);
ptr_10c786ac7 = NULL;
cust_free(ptr_10c786aff);
ptr_10c786aff = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8b);
ptr_10c786a8b = NULL;
ptr_10c786a53 = malloc(40);
cust_memset(ptr_10c786a53, 0, 40);
ptr_10c786a9b = malloc(28);
cust_memset(ptr_10c786a9b, 0, 28);
ptr_10c786ad7 = malloc(40);
cust_memset(ptr_10c786ad7, 0, 40);
ptr_10c786b1f = malloc(28);
cust_memset(ptr_10c786b1f, 0, 28);
cust_free(ptr_10c786ad7);
ptr_10c786ad7 = NULL;
cust_free(ptr_10c786b1f);
ptr_10c786b1f = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9b);
ptr_10c786a9b = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(28);
cust_memset(ptr_10c786a97, 0, 28);
ptr_10c786ad3 = malloc(36);
cust_memset(ptr_10c786ad3, 0, 36);
ptr_10c786b17 = malloc(28);
cust_memset(ptr_10c786b17, 0, 28);
cust_free(ptr_10c786ad3);
ptr_10c786ad3 = NULL;
cust_free(ptr_10c786b17);
ptr_10c786b17 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(28);
cust_memset(ptr_10c786a83, 0, 28);
ptr_10c786abf = malloc(16);
cust_memset(ptr_10c786abf, 0, 16);
ptr_10c786aef = malloc(28);
cust_memset(ptr_10c786aef, 0, 28);
cust_free(ptr_10c786abf);
ptr_10c786abf = NULL;
cust_free(ptr_10c786aef);
ptr_10c786aef = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(24);
cust_memset(ptr_10c786a83, 0, 24);
ptr_10c786abb = malloc(16);
cust_memset(ptr_10c786abb, 0, 16);
ptr_10c786aeb = malloc(24);
cust_memset(ptr_10c786aeb, 0, 24);
cust_free(ptr_10c786abb);
ptr_10c786abb = NULL;
cust_free(ptr_10c786aeb);
ptr_10c786aeb = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(24);
cust_memset(ptr_10c786a97, 0, 24);
ptr_10c786acf = malloc(36);
cust_memset(ptr_10c786acf, 0, 36);
ptr_10c786b13 = malloc(24);
cust_memset(ptr_10c786b13, 0, 24);
cust_free(ptr_10c786acf);
ptr_10c786acf = NULL;
cust_free(ptr_10c786b13);
ptr_10c786b13 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(40);
cust_memset(ptr_10c786a53, 0, 40);
ptr_10c786a9b = malloc(24);
cust_memset(ptr_10c786a9b, 0, 24);
ptr_10c786ad3 = malloc(40);
cust_memset(ptr_10c786ad3, 0, 40);
ptr_10c786b1b = malloc(24);
cust_memset(ptr_10c786b1b, 0, 24);
cust_free(ptr_10c786ad3);
ptr_10c786ad3 = NULL;
cust_free(ptr_10c786b1b);
ptr_10c786b1b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9b);
ptr_10c786a9b = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(24);
cust_memset(ptr_10c786a83, 0, 24);
ptr_10c786abb = malloc(16);
cust_memset(ptr_10c786abb, 0, 16);
ptr_10c786aeb = malloc(24);
cust_memset(ptr_10c786aeb, 0, 24);
cust_free(ptr_10c786abb);
ptr_10c786abb = NULL;
cust_free(ptr_10c786aeb);
ptr_10c786aeb = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(64);
cust_memset(ptr_10c786a53, 0, 64);
ptr_10c786ab3 = malloc(24);
cust_memset(ptr_10c786ab3, 0, 24);
ptr_10c786aeb = malloc(64);
cust_memset(ptr_10c786aeb, 0, 64);
ptr_10c786b4b = malloc(24);
cust_memset(ptr_10c786b4b, 0, 24);
cust_free(ptr_10c786aeb);
ptr_10c786aeb = NULL;
cust_free(ptr_10c786b4b);
ptr_10c786b4b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786ab3);
ptr_10c786ab3 = NULL;
ptr_10c786a53 = malloc(32);
cust_memset(ptr_10c786a53, 0, 32);
ptr_10c786a93 = malloc(24);
cust_memset(ptr_10c786a93, 0, 24);
ptr_10c786acb = malloc(32);
cust_memset(ptr_10c786acb, 0, 32);
ptr_10c786b0b = malloc(24);
cust_memset(ptr_10c786b0b, 0, 24);
cust_free(ptr_10c786acb);
ptr_10c786acb = NULL;
cust_free(ptr_10c786b0b);
ptr_10c786b0b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a93);
ptr_10c786a93 = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(24);
cust_memset(ptr_10c786a97, 0, 24);
ptr_10c786acf = malloc(36);
cust_memset(ptr_10c786acf, 0, 36);
ptr_10c786b13 = malloc(24);
cust_memset(ptr_10c786b13, 0, 24);
cust_free(ptr_10c786acf);
ptr_10c786acf = NULL;
cust_free(ptr_10c786b13);
ptr_10c786b13 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(36);
cust_memset(ptr_10c786a97, 0, 36);
ptr_10c786adb = malloc(36);
cust_memset(ptr_10c786adb, 0, 36);
ptr_10c786b1f = malloc(36);
cust_memset(ptr_10c786b1f, 0, 36);
cust_free(ptr_10c786adb);
ptr_10c786adb = NULL;
cust_free(ptr_10c786b1f);
ptr_10c786b1f = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(40);
cust_memset(ptr_10c786a97, 0, 40);
ptr_10c786adf = malloc(36);
cust_memset(ptr_10c786adf, 0, 36);
ptr_10c786b23 = malloc(40);
cust_memset(ptr_10c786b23, 0, 40);
cust_free(ptr_10c786adf);
ptr_10c786adf = NULL;
cust_free(ptr_10c786b23);
ptr_10c786b23 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(40);
cust_memset(ptr_10c786a53, 0, 40);
ptr_10c786a9b = malloc(16);
cust_memset(ptr_10c786a9b, 0, 16);
ptr_10c786acb = malloc(40);
cust_memset(ptr_10c786acb, 0, 40);
ptr_10c786b13 = malloc(16);
cust_memset(ptr_10c786b13, 0, 16);
cust_free(ptr_10c786acb);
ptr_10c786acb = NULL;
cust_free(ptr_10c786b13);
ptr_10c786b13 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9b);
ptr_10c786a9b = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(16);
cust_memset(ptr_10c786a97, 0, 16);
ptr_10c786ac7 = malloc(36);
cust_memset(ptr_10c786ac7, 0, 36);
ptr_10c786b0b = malloc(16);
cust_memset(ptr_10c786b0b, 0, 16);
cust_free(ptr_10c786ac7);
ptr_10c786ac7 = NULL;
cust_free(ptr_10c786b0b);
ptr_10c786b0b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(16);
cust_memset(ptr_10c786a97, 0, 16);
ptr_10c786ac7 = malloc(36);
cust_memset(ptr_10c786ac7, 0, 36);
ptr_10c786b0b = malloc(16);
cust_memset(ptr_10c786b0b, 0, 16);
cust_free(ptr_10c786ac7);
ptr_10c786ac7 = NULL;
cust_free(ptr_10c786b0b);
ptr_10c786b0b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(40);
cust_memset(ptr_10c786a53, 0, 40);
ptr_10c786a9b = malloc(32);
cust_memset(ptr_10c786a9b, 0, 32);
ptr_10c786adb = malloc(40);
cust_memset(ptr_10c786adb, 0, 40);
ptr_10c786b23 = malloc(32);
cust_memset(ptr_10c786b23, 0, 32);
cust_free(ptr_10c786adb);
ptr_10c786adb = NULL;
cust_free(ptr_10c786b23);
ptr_10c786b23 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9b);
ptr_10c786a9b = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(32);
cust_memset(ptr_10c786a97, 0, 32);
ptr_10c786ad7 = malloc(36);
cust_memset(ptr_10c786ad7, 0, 36);
ptr_10c786b1b = malloc(32);
cust_memset(ptr_10c786b1b, 0, 32);
cust_free(ptr_10c786ad7);
ptr_10c786ad7 = NULL;
cust_free(ptr_10c786b1b);
ptr_10c786b1b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(32);
cust_memset(ptr_10c786a83, 0, 32);
ptr_10c786ac3 = malloc(16);
cust_memset(ptr_10c786ac3, 0, 16);
ptr_10c786af3 = malloc(32);
cust_memset(ptr_10c786af3, 0, 32);
cust_free(ptr_10c786ac3);
ptr_10c786ac3 = NULL;
cust_free(ptr_10c786af3);
ptr_10c786af3 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(36);
cust_memset(ptr_10c786a53, 0, 36);
ptr_10c786a97 = malloc(32);
cust_memset(ptr_10c786a97, 0, 32);
ptr_10c786ad7 = malloc(36);
cust_memset(ptr_10c786ad7, 0, 36);
ptr_10c786b1b = malloc(32);
cust_memset(ptr_10c786b1b, 0, 32);
cust_free(ptr_10c786ad7);
ptr_10c786ad7 = NULL;
cust_free(ptr_10c786b1b);
ptr_10c786b1b = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a97);
ptr_10c786a97 = NULL;
ptr_10c786a53 = malloc(44);
cust_memset(ptr_10c786a53, 0, 44);
ptr_10c786a9f = malloc(28);
cust_memset(ptr_10c786a9f, 0, 28);
ptr_10c786adb = malloc(44);
cust_memset(ptr_10c786adb, 0, 44);
ptr_10c786b27 = malloc(28);
cust_memset(ptr_10c786b27, 0, 28);
cust_free(ptr_10c786adb);
ptr_10c786adb = NULL;
cust_free(ptr_10c786b27);
ptr_10c786b27 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9f);
ptr_10c786a9f = NULL;
ptr_10c786a53 = malloc(28);
cust_memset(ptr_10c786a53, 0, 28);
ptr_10c786a8f = malloc(28);
cust_memset(ptr_10c786a8f, 0, 28);
ptr_10c786acb = malloc(28);
cust_memset(ptr_10c786acb, 0, 28);
ptr_10c786b07 = malloc(28);
cust_memset(ptr_10c786b07, 0, 28);
cust_free(ptr_10c786acb);
ptr_10c786acb = NULL;
cust_free(ptr_10c786b07);
ptr_10c786b07 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8f);
ptr_10c786a8f = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(28);
cust_memset(ptr_10c786a83, 0, 28);
ptr_10c786abf = malloc(16);
cust_memset(ptr_10c786abf, 0, 16);
ptr_10c786aef = malloc(28);
cust_memset(ptr_10c786aef, 0, 28);
cust_free(ptr_10c786abf);
ptr_10c786abf = NULL;
cust_free(ptr_10c786aef);
ptr_10c786aef = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(28);
cust_memset(ptr_10c786a87, 0, 28);
ptr_10c786ac3 = malloc(20);
cust_memset(ptr_10c786ac3, 0, 20);
ptr_10c786af7 = malloc(28);
cust_memset(ptr_10c786af7, 0, 28);
cust_free(ptr_10c786ac3);
ptr_10c786ac3 = NULL;
cust_free(ptr_10c786af7);
ptr_10c786af7 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(28);
cust_memset(ptr_10c786a87, 0, 28);
ptr_10c786ac3 = malloc(20);
cust_memset(ptr_10c786ac3, 0, 20);
ptr_10c786af7 = malloc(28);
cust_memset(ptr_10c786af7, 0, 28);
cust_free(ptr_10c786ac3);
ptr_10c786ac3 = NULL;
cust_free(ptr_10c786af7);
ptr_10c786af7 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(44);
cust_memset(ptr_10c786a53, 0, 44);
ptr_10c786a9f = malloc(28);
cust_memset(ptr_10c786a9f, 0, 28);
ptr_10c786adb = malloc(44);
cust_memset(ptr_10c786adb, 0, 44);
ptr_10c786b27 = malloc(28);
cust_memset(ptr_10c786b27, 0, 28);
cust_free(ptr_10c786adb);
ptr_10c786adb = NULL;
cust_free(ptr_10c786b27);
ptr_10c786b27 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a9f);
ptr_10c786a9f = NULL;
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(28);
cust_memset(ptr_10c786a87, 0, 28);
ptr_10c786ac3 = malloc(20);
cust_memset(ptr_10c786ac3, 0, 20);
ptr_10c786af7 = malloc(28);
cust_memset(ptr_10c786af7, 0, 28);
cust_free(ptr_10c786ac3);
ptr_10c786ac3 = NULL;
cust_free(ptr_10c786af7);
ptr_10c786af7 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(28);
cust_memset(ptr_10c786a53, 0, 28);
ptr_10c786a8f = malloc(28);
cust_memset(ptr_10c786a8f, 0, 28);
ptr_10c786acb = malloc(28);
cust_memset(ptr_10c786acb, 0, 28);
ptr_10c786b07 = malloc(28);
cust_memset(ptr_10c786b07, 0, 28);
cust_free(ptr_10c786acb);
ptr_10c786acb = NULL;
cust_free(ptr_10c786b07);
ptr_10c786b07 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8f);
ptr_10c786a8f = NULL;
ptr_10c786a53 = malloc(28);
cust_memset(ptr_10c786a53, 0, 28);
ptr_10c786a8f = malloc(28);
cust_memset(ptr_10c786a8f, 0, 28);
ptr_10c786acb = malloc(28);
cust_memset(ptr_10c786acb, 0, 28);
ptr_10c786b07 = malloc(28);
cust_memset(ptr_10c786b07, 0, 28);
cust_free(ptr_10c786acb);
ptr_10c786acb = NULL;
cust_free(ptr_10c786b07);
ptr_10c786b07 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8f);
ptr_10c786a8f = NULL;
ptr_10c786a53 = malloc(24);
cust_memset(ptr_10c786a53, 0, 24);
ptr_10c786a8b = malloc(28);
cust_memset(ptr_10c786a8b, 0, 28);
ptr_10c786ac7 = malloc(24);
cust_memset(ptr_10c786ac7, 0, 24);
ptr_10c786aff = malloc(28);
cust_memset(ptr_10c786aff, 0, 28);
cust_free(ptr_10c786ac7);
ptr_10c786ac7 = NULL;
cust_free(ptr_10c786aff);
ptr_10c786aff = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8b);
ptr_10c786a8b = NULL;
ptr_10c786a53 = malloc(24);
cust_memset(ptr_10c786a53, 0, 24);
ptr_10c786a8b = malloc(28);
cust_memset(ptr_10c786a8b, 0, 28);
ptr_10c786ac7 = malloc(24);
cust_memset(ptr_10c786ac7, 0, 24);
ptr_10c786aff = malloc(28);
cust_memset(ptr_10c786aff, 0, 28);
cust_free(ptr_10c786ac7);
ptr_10c786ac7 = NULL;
cust_free(ptr_10c786aff);
ptr_10c786aff = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8b);
ptr_10c786a8b = NULL;
ptr_10c786a53 = malloc(28);
cust_memset(ptr_10c786a53, 0, 28);
ptr_10c786a8f = malloc(16);
cust_memset(ptr_10c786a8f, 0, 16);
ptr_10c786abf = malloc(28);
cust_memset(ptr_10c786abf, 0, 28);
ptr_10c786afb = malloc(16);
cust_memset(ptr_10c786afb, 0, 16);
cust_free(ptr_10c786abf);
ptr_10c786abf = NULL;
cust_free(ptr_10c786afb);
ptr_10c786afb = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8f);
ptr_10c786a8f = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(20);
cust_memset(ptr_10c786a83, 0, 20);
ptr_10c786ab7 = malloc(16);
cust_memset(ptr_10c786ab7, 0, 16);
ptr_10c786ae7 = malloc(20);
cust_memset(ptr_10c786ae7, 0, 20);
cust_free(ptr_10c786ab7);
ptr_10c786ab7 = NULL;
cust_free(ptr_10c786ae7);
ptr_10c786ae7 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(20);
cust_memset(ptr_10c786a87, 0, 20);
ptr_10c786abb = malloc(20);
cust_memset(ptr_10c786abb, 0, 20);
ptr_10c786aef = malloc(20);
cust_memset(ptr_10c786aef, 0, 20);
cust_free(ptr_10c786abb);
ptr_10c786abb = NULL;
cust_free(ptr_10c786aef);
ptr_10c786aef = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(44);
cust_memset(ptr_10c786a87, 0, 44);
ptr_10c786ad3 = malloc(20);
cust_memset(ptr_10c786ad3, 0, 20);
ptr_10c786b07 = malloc(44);
cust_memset(ptr_10c786b07, 0, 44);
cust_free(ptr_10c786ad3);
ptr_10c786ad3 = NULL;
cust_free(ptr_10c786b07);
ptr_10c786b07 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(20);
cust_memset(ptr_10c786a53, 0, 20);
ptr_10c786a87 = malloc(44);
cust_memset(ptr_10c786a87, 0, 44);
ptr_10c786ad3 = malloc(20);
cust_memset(ptr_10c786ad3, 0, 20);
ptr_10c786b07 = malloc(44);
cust_memset(ptr_10c786b07, 0, 44);
cust_free(ptr_10c786ad3);
ptr_10c786ad3 = NULL;
cust_free(ptr_10c786b07);
ptr_10c786b07 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a87);
ptr_10c786a87 = NULL;
ptr_10c786a53 = malloc(16);
cust_memset(ptr_10c786a53, 0, 16);
ptr_10c786a83 = malloc(44);
cust_memset(ptr_10c786a83, 0, 44);
ptr_10c786acf = malloc(16);
cust_memset(ptr_10c786acf, 0, 16);
ptr_10c786aff = malloc(44);
cust_memset(ptr_10c786aff, 0, 44);
cust_free(ptr_10c786acf);
ptr_10c786acf = NULL;
cust_free(ptr_10c786aff);
ptr_10c786aff = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a83);
ptr_10c786a83 = NULL;
ptr_10c786a53 = malloc(28);
cust_memset(ptr_10c786a53, 0, 28);
ptr_10c786a8f = malloc(44);
cust_memset(ptr_10c786a8f, 0, 44);
ptr_10c786adb = malloc(28);
cust_memset(ptr_10c786adb, 0, 28);
ptr_10c786b17 = malloc(44);
cust_memset(ptr_10c786b17, 0, 44);
cust_free(ptr_10c786adb);
ptr_10c786adb = NULL;
cust_free(ptr_10c786b17);
ptr_10c786b17 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8f);
ptr_10c786a8f = NULL;
ptr_10c786a53 = malloc(24);
cust_memset(ptr_10c786a53, 0, 24);
ptr_10c786a8b = malloc(20);
cust_memset(ptr_10c786a8b, 0, 20);
ptr_10c786abf = malloc(24);
cust_memset(ptr_10c786abf, 0, 24);
ptr_10c786af7 = malloc(20);
cust_memset(ptr_10c786af7, 0, 20);
cust_free(ptr_10c786abf);
ptr_10c786abf = NULL;
cust_free(ptr_10c786af7);
ptr_10c786af7 = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8b);
ptr_10c786a8b = NULL;
ptr_10c786a53 = malloc(24);
cust_memset(ptr_10c786a53, 0, 24);
ptr_10c786a8b = malloc(28);
cust_memset(ptr_10c786a8b, 0, 28);
ptr_10c786ac7 = malloc(24);
cust_memset(ptr_10c786ac7, 0, 24);
ptr_10c786aff = malloc(28);
cust_memset(ptr_10c786aff, 0, 28);
cust_free(ptr_10c786ac7);
ptr_10c786ac7 = NULL;
cust_free(ptr_10c786aff);
ptr_10c786aff = NULL;
cust_free(ptr_10c786a53);
ptr_10c786a53 = NULL;
cust_free(ptr_10c786a8b);
ptr_10c786a8b = NULL;
ptr_10c786a53 = malloc(7);
cust_memset(ptr_10c786a53, 0, 7);
ptr_10c786a7a = malloc(440);
cust_memset(ptr_10c786a7a, 0, 440);
ptr_10c786c52 = malloc(32);
cust_memset(ptr_10c786c52, 0, 32);
ptr_10c786c92 = malloc(16);
cust_memset(ptr_10c786c92, 0, 16);
ptr_10c786cc2 = malloc(4320);
cust_memset(ptr_10c786cc2, 0, 4320);
ptr_10c787dc2 = malloc(6);
cust_memset(ptr_10c787dc2, 0, 6);
ptr_10c787de8 = malloc(3);
cust_memset(ptr_10c787de8, 0, 3);
ptr_10c787e0b = malloc(16);
cust_memset(ptr_10c787e0b, 0, 16);
ptr_10c787e3b = malloc(16);
cust_memset(ptr_10c787e3b, 0, 16);
ptr_10c787e6b = malloc(2048);
cust_memset(ptr_10c787e6b, 0, 2048);
ptr_10c78868b = malloc(16);
cust_memset(ptr_10c78868b, 0, 16);
ptr_10c7886bb = malloc(2048);
cust_memset(ptr_10c7886bb, 0, 2048);
ptr_10c788edb = malloc(176);
cust_memset(ptr_10c788edb, 0, 176);
ptr_10c788fab = malloc(32);
cust_memset(ptr_10c788fab, 0, 32);
ptr_10c788feb = malloc(45);
cust_memset(ptr_10c788feb, 0, 45);
ptr_10c789038 = malloc(32);
cust_memset(ptr_10c789038, 0, 32);
ptr_10c789078 = malloc(47);
cust_memset(ptr_10c789078, 0, 47);
ptr_10c7890c7 = malloc(32);
cust_memset(ptr_10c7890c7, 0, 32);
ptr_10c789107 = malloc(52);
cust_memset(ptr_10c789107, 0, 52);
ptr_10c78915b = malloc(37);
cust_memset(ptr_10c78915b, 0, 37);
ptr_10c7891a0 = malloc(40);
cust_memset(ptr_10c7891a0, 0, 40);
ptr_10c7891e8 = malloc(45);
cust_memset(ptr_10c7891e8, 0, 45);
ptr_10c789235 = malloc(32);
cust_memset(ptr_10c789235, 0, 32);
ptr_10c789275 = malloc(50);
cust_memset(ptr_10c789275, 0, 50);
ptr_10c7892c7 = malloc(40);
cust_memset(ptr_10c7892c7, 0, 40);
ptr_10c78930f = malloc(49);
cust_memset(ptr_10c78930f, 0, 49);
ptr_10c789360 = malloc(32);
cust_memset(ptr_10c789360, 0, 32);
ptr_10c7893a0 = malloc(46);
cust_memset(ptr_10c7893a0, 0, 46);
ptr_10c7893ee = malloc(32);
cust_memset(ptr_10c7893ee, 0, 32);
ptr_10c78942e = malloc(50);
cust_memset(ptr_10c78942e, 0, 50);
ptr_10c789480 = malloc(32);
cust_memset(ptr_10c789480, 0, 32);
ptr_10c7894c0 = malloc(48);
cust_memset(ptr_10c7894c0, 0, 48);
ptr_10c789510 = malloc(176);
cust_memset(ptr_10c789510, 0, 176);
ptr_10c7895e0 = malloc(380);
cust_memset(ptr_10c7895e0, 0, 380);
ptr_10c78977c = malloc(12);
cust_memset(ptr_10c78977c, 0, 12);
ptr_10c7897a8 = malloc(4);
cust_memset(ptr_10c7897a8, 0, 4);
ptr_10c7897cc = malloc(176);
cust_memset(ptr_10c7897cc, 0, 176);
ptr_10c78989c = malloc(56);
cust_memset(ptr_10c78989c, 0, 56);
ptr_10c7898f4 = malloc(16);
cust_memset(ptr_10c7898f4, 0, 16);
ptr_10c789924 = malloc(32);
cust_memset(ptr_10c789924, 0, 32);
ptr_10c789964 = malloc(80);
cust_memset(ptr_10c789964, 0, 80);
cust_free(ptr_10c78977c);
ptr_10c78977c = NULL;
cust_free(ptr_10c7897a8);
ptr_10c7897a8 = NULL;
ptr_10c7899d4 = malloc(40);
cust_memset(ptr_10c7899d4, 0, 40);
cust_free(ptr_10c789510);
ptr_10c789510 = NULL;
ptr_10c789510 = malloc(4);
cust_memset(ptr_10c789510, 0, 4);
ptr_10c789534 = malloc(4);
cust_memset(ptr_10c789534, 0, 4);
ptr_10c789a1c = malloc(176);
cust_memset(ptr_10c789a1c, 0, 176);
ptr_10c789558 = malloc(32);
cust_memset(ptr_10c789558, 0, 32);
ptr_10c789aec = malloc(45);
cust_memset(ptr_10c789aec, 0, 45);
cust_free(ptr_10c789510);
ptr_10c789510 = NULL;
cust_free(ptr_10c789534);
ptr_10c789534 = NULL;
ptr_10c789b39 = malloc(80);
cust_memset(ptr_10c789b39, 0, 80);
cust_free(ptr_10c7895e0);
ptr_10c7895e0 = NULL;
cust_free(ptr_10c7897cc);
ptr_10c7897cc = NULL;
ptr_10c789598 = malloc(80);
cust_memset(ptr_10c789598, 0, 80);
ptr_10c789608 = malloc(80);
cust_memset(ptr_10c789608, 0, 80);
cust_free(ptr_10c789558);
ptr_10c789558 = NULL;
cust_free(ptr_10c789aec);
ptr_10c789aec = NULL;
cust_free(ptr_10c789a1c);
ptr_10c789a1c = NULL;
ptr_10c789678 = malloc(320);
cust_memset(ptr_10c789678, 0, 320);
ptr_10c789ba9 = malloc(1107);
cust_memset(ptr_10c789ba9, 0, 1107);
cust_free(ptr_10c789678);
ptr_10c789678 = NULL;
cust_free(ptr_10c789ba9);
ptr_10c789ba9 = NULL;
printf("Nombre de checks %d.\nNombre de free %d.\nNombre de malloc/memset %d.\nOai, y'a beaucoup trop de checks :D\nDONE\n", count_check, count_free, count_malloc_memset);
mdr();
}
