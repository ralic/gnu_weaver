/*
  Copyright (C) 2009 Thiago Leucz Astrizi

 This file is part of Weaver API.

 Weaver API is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Weaver API is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Weaver API.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _FONT_H_
#include "weaver.h"
#include <ft2build.h>
#include FT_FREETYPE_H

extern FT_Library _library;
extern FT_Face _face;
extern int _dpi_h, _dpi_v;
extern int letter_spacing;
extern int word_spacing;
extern int line_spacing;

int _initialize_font(void);
int load_font(char *);
int draw_text(char *, surface *, unsigned, unsigned, int, unsigned);
unsigned long _unicode_index(char **);

#endif
