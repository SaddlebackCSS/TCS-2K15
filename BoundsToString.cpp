/**************************************************************************
 * AUTHOR     : Josh Gatmaitan
 * ASN #02    : Card Shuffle
 * CLASS      : CS1C
 * SECTION    : MW: 5:30am
 * DUE DATE   : 08/24/15
 * ***********************************************************************/

#include "Header.h"

/**************************************************************************
 * FUNCTION BoundsToString
 *_________________________________________________________________________
 *	This function receives integer boundary values and converts the
 *	whole error message into a string, ready to easily be formatted
 *	as desired.
 *
 *	RETURNS message as string
 *_________________________________________________________________________
 *************************************************************************/
string BoundsToString(const int LOW_BOUND,  // IN & OUT - Low boundary
		              const int HIGH_BOUND) // IN & OUT - High boundary
{
	ostringstream output;

	output << "\n**** Please enter a number "
		   << "between " << LOW_BOUND
		   << " and "   << HIGH_BOUND;

	return output.str();
}
