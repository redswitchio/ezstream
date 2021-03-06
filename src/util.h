/*
 *  ezstream - source client for Icecast with external en-/decoder support
 *  Copyright (C) 2003, 2004, 2005, 2006  Ed Zaleski <oddsock@oddsock.org>
 *  Copyright (C) 2007                    Moritz Grimm <mgrimm@mrsserver.net>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 */

#ifndef __UTIL_H__
#define __UTIL_H__

#define ICONV_REPLACE		0
#define ICONV_TRANSLIT		1
#define ICONV_IGNORE		2

int		strrcmp(const char *, const char *);
int		strrcasecmp(const char *, const char *);
char *		CHARtoUTF8(const char *, int);
char *		UTF8toCHAR(const char *, int);
char *		replaceString(const char *, const char *, const char *);
char *		shellQuote(const char *);
int		urlParse(const char *, char **, unsigned short *, char **);

#endif /* __UTIL_H__ */
