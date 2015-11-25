/**************************************************************************
 * AUTHOR     : Josh Gatmaitan
 * ASN #02    : Card Shuffle
 * CLASS      : CS1C
 * SECTION    : MW: 5:30am
 * DUE DATE   : 08/24/15
 * ***********************************************************************/

#include "Header.h"

/**************************************************************************
 * FUNCTION IntToString
 *_________________________________________________________________________
 *	This function gets an integer input and converts it to a string
 *
 *	RETURNS integer as a string
 *_________________________________________________________________________
 *************************************************************************/
string IntToString(const int NUMBER) // IN & OUT - Integer to be converted
{
	ostringstream output;

	output << NUMBER;

	return output.str();
}
