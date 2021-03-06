/*
CmdLine plugin for Miranda IM

Copyright � 2007-2010 Cristian Libotean

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef M_CMDLINE_VERSION_H
#define M_CMDLINE_VERSION_H

#define __MAJOR_VERSION   0
#define __MINOR_VERSION   0
#define __RELEASE_NUM     4
#define __BUILD_NUM       1

#define VERSION PLUGIN_MAKE_VERSION(__MAJOR_VERSION, __MINOR_VERSION, __RELEASE_NUM, __BUILD_NUM)

#define __PLUGINVERSION_STRING      __MAJOR_VERSION,__MINOR_VERSION,__RELEASE_NUM,__BUILD_NUM
#define __PLUGINVERSION_STRING_DOTS	__MAJOR_VERSION.__MINOR_VERSION.__RELEASE_NUM.__BUILD_NUM
#define __STRINGIFY_(x) #x
#define __STRINGIFY(x) __STRINGIFY_(x)
#define __VERSION_STRING            __STRINGIFY(__PLUGINVERSION_STRING_DOTS)

#define __DESC                  "This plugin lets you control Miranda from the command line."
#define __AUTHOR                "Cristian Libotean"
#define __AUTHOREMAIL           "eblis102@yahoo.com"
#define __COPYRIGHT             "� 2007-2011 Cristian Libotean"
#define __AUTHORWEB             "http://www.miranda-im.org/"

#if defined(WIN64) || defined(_WIN64)
#define __PLUGIN_DISPLAY_NAME   "Command Line (x64)"
#else
#define __PLUGIN_DISPLAY_NAME   "Command Line"
#endif

#endif //M_CMDLINE_VERSION_H
