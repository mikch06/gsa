/* Greenbone Security Assistant
 * $Id$
 * Description: Headers/structs used generally in GSA
 *
 * Authors:
 * Matthew Mundell <matthew.mundell@intevation.de>
 * Jan-Oliver Wagner <jan-oliver.wagner@greenbone.net>
 *
 * Copyright:
 * Copyright (C) 2009 Greenbone Networks GmbH
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2,
 * or, at your option, any later version as published by the Free
 * Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

/**
 * @file gsad_base.h
 * @brief Headers/structs used generally in GSA.
 */

#ifndef _GSAD_BASE_H
#define _GSAD_BASE_H

/** @brief Answer for invalid input. */
#define GSAD_MESSAGE_INVALID_PARAM(op)                                            \
  "<gsad_msg status_text=\"Invalid parameter\" operation=\"" op "\">"             \
  "At least one entered value contains invalid characters or exceeds"             \
  " a size limit.  You may use the Back button of your browser to adjust"         \
  " the entered values.  If in doubt, the online help of the respective section"  \
  " will lead you to the appropriate help page."                                  \
  "</gsad_msg>"

/**
 *  @brief Structure that combines username and password
 */
typedef struct
{
  char *username;  ///< Name of user.
  char *password;  ///< User's password.
} credentials_t;

char * xsl_transform (const char *);
char * gsad_message (const char *, const char *, const char *);

#endif /* not _GSAD_BASE_H */
