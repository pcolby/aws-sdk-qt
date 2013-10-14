/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWSGLOBAL_H
#define QTAWSGLOBAL_H


// Export declaration macros.
#if defined QTAWS_LIBRARY
#  define QTAWS_EXPORT Q_DECL_EXPORT
#else
#  define QTAWS_EXPORT Q_DECL_IMPORT
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
