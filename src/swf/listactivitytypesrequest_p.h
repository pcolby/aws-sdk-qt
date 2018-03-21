/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_LISTACTIVITYTYPESREQUEST_P_H
#define QTAWS_LISTACTIVITYTYPESREQUEST_P_H

#include "swf_p.h"
#include "listactivitytypesrequest.h"

namespace AWS {

namespace SWF {

class ListActivityTypesRequest;

class QTAWS_EXPORT ListActivityTypesRequestPrivate : public SWFPrivate {

public:
    ListActivityTypesRequestPrivate(const SWF::Action action,
                                   ListActivityTypesRequest * const q);
    ListActivityTypesRequestPrivate(const ListActivityTypesRequestPrivate &other,
                                   ListActivityTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListActivityTypesRequest)

};

} // namespace SWF
} // namespace AWS

#endif
