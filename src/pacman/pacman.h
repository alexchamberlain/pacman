/*
 *  pacman.h
 *
 *  Copyright (c) 2002-2007 by Judd Vinet <jvinet@zeroflux.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
 *  USA.
 */
#ifndef _PM_PACMAN_H
#define _PM_PACMAN_H

#include <alpm_list.h>

/* add.c, this should merge with upgrade.c */
int pacman_add(alpm_list_t *targets);
int pacman_upgrade(alpm_list_t *targets);
/* sync.c */
int pacman_sync(alpm_list_t *targets);
/* query.c */
int pacman_query(alpm_list_t *targets);
/* remove.c */
int pacman_remove(alpm_list_t *targets);

/* deptest.c */
int pacman_deptest(alpm_list_t *targets);

#endif /* _PM_PACMAN_H */

/* vim: set ts=2 sw=2 noet: */