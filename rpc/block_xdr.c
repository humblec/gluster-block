/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "block.h"

bool_t
xdr_blockTrans (XDR *xdrs, blockTrans *objp)
{
	 if (!xdr_int (xdrs, &objp->exit))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->out, ~0))
		 return FALSE;
	return TRUE;
}