/*
 * $Id: exit_code.c,v 1.3 2004/06/06 18:11:35 calrissian Exp $
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

#include <stdlib.h>
#include <stdio.h>
#include "exit_code.h"

enum exit_modes exit_mode = EM_DEFAULT;

void exit_code(int code)
{

	switch(exit_mode) {
		case EM_DEFAULT:	
			if (code == 4) {
				exit(0);
			}
			else {
				exit(code);
			}
		case EM_NAGIOS:		
			if (code == 0) {
				printf("SIP ok\n");
				exit(0);
			}
			else if (code == 4) {
				printf("SIP warning\n");
				exit(1);
			}
			else {
				printf("SIP failure\n");
				exit(2);
			}
		default:		
			fprintf(stderr, "ERROR: unknown exit code\n");
			exit(1);
	}
}
