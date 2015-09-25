/*
 * bitMask - Generate a mask consisting of all 1's
 *   lowbit and highbit
 *   Examples: bitMask(5,3) = 0x38
 *   Assume 0 <= lowbit <= 31, and 0 <= highbit <= 31
 *   If lowbit > highbit, then mask should be all 0's
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 16
 *   Rating: 3
 */
int bitMask(int highbit, int lowbit) {
	/* create mask where all bits <= highbit are 1's
	 * create mask where all bits >= lowbit are 1's
	 * & the two masks.
	 */
	int allones = ~0;
	int highmask = ~(allones << highbit << 1);
	int lowmask = allones << lowbit;
	return highmask & lowmask;
}