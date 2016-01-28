/* Program name management.
   Copyright (C) 2001-2003, 2005-2011 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2001.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */


#include <config.h>

/* Specification.  */
#undef ENABLE_RELOCATABLE /* avoid defining set_program_name as a macro */
#include "progname.h"

#include <errno.h> /* get program_invocation_name declaration */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* String containing name the program is called with.
   To be initialized by main().  */
//char *program_name = "iconv";

/* Set program_name, based on argv[0].
   argv0 must be a string allocated with indefinite extent, and must not be
   modified after this call.  */
void
set_program_name (const char *argv0)
{}
