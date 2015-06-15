/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWSGLOBAL_H
#define QTAWSGLOBAL_H


// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWS_LIBRARY
#    define QTAWS_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWS_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWS_EXPORT
#endif

// Custom namespace wrapper macros.
#ifdef QTAWS_NAMESPACE
# define QTAWS_BEGIN_NAMESPACE namespace QTAWS_NAMESPACE {
# define QTAWS_END_NAMESPACE }
#else
# define QTAWS_BEGIN_NAMESPACE
# define QTAWS_END_NAMESPACE
#endif


#endif // QTAWSGLOBAL_H
