/* === S Y N F I G ========================================================= */
/*!	\file releases.h
**	\brief Define the synfig releases, for tying to features
**
**	$Id$
**
**	\legal
**	Copyright (c) 2008 Chris Moore
**
**	This package is free software; you can redistribute it and/or
**	modify it under the terms of the GNU General Public License as
**	published by the Free Software Foundation; either version 2 of
**	the License, or (at your option) any later version.
**
**	This package is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
**	General Public License for more details.
**	\endlegal
*/
/* ========================================================================= */

/* === S T A R T =========================================================== */

#ifndef __SYNFIG_RELEASE_VERSION_H
#define __SYNFIG_RELEASE_VERSION_H

/* === H E A D E R S ======================================================= */

/* === M A C R O S ========================================================= */

/* === C L A S S E S & S T R U C T S ======================================= */

namespace synfig {

	typedef enum
	{
		RELEASE_VERSION_0_61_06,
		RELEASE_VERSION_0_61_07,
		RELEASE_VERSION_0_61_08,
		RELEASE_VERSION_0_61_09,
		RELEASE_VERSION_0_61_10,

		RELEASE_VERSION_END
	} ReleaseVersion;

}; // END of namespace synfig

/* === E N D =============================================================== */

#endif