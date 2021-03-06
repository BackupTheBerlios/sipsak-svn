/*
 * $Id: exit_code.h,v 1.1 2004/05/16 16:45:03 jiri Exp $
 *
 * Copyright (C) 2002-2004 Fhg Fokus
 *
 * This file belongs to sipsak, a free sip testing tool.
 *
 * sipsak is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * sipsak is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef SIPSAK_EXITCODE_H
#define SIPSAK_EXITCODE_H

enum exit_modes { EM_DEFAULT, EM_NAGIOS };

extern enum exit_modes exit_mode;

void exit_code( int code );

#endif
