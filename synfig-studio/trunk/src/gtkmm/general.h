/* === S Y N F I G ========================================================= */
/*!	\file synfigstudio/src/gtkmm/general.h
**	\brief General header file for synfigstudio
**
**	$Id$
**
**	\legal
**	Copyright 2007 Paul Wise
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

#ifndef __SYNFIGSTUDIO_GENERAL_H
#define __SYNFIGSTUDIO_GENERAL_H

/* === H E A D E R S ======================================================= */

#include <libintl.h>

/* === M A C R O S ========================================================= */

#undef _
#undef gettext_noop
#undef N_
#define _(x) gettext(x)
#define gettext_noop(x) x
#define N_(x) gettext_noop(x)

/* === T Y P E D E F S ===================================================== */

/* === C L A S S E S & S T R U C T S ======================================= */

/* === E N D =============================================================== */

#endif