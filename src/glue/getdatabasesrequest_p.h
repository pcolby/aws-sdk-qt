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

#ifndef QTAWS_GETDATABASESREQUEST_P_H
#define QTAWS_GETDATABASESREQUEST_P_H

#include "glue_p.h"
#include "getdatabasesrequest.h"

namespace AWS {

namespace Glue {

class GetDatabasesRequest;

class QTAWS_EXPORT GetDatabasesRequestPrivate : public GluePrivate {

public:
    GetDatabasesRequestPrivate(const Glue::Action action,
                                   GetDatabasesRequest * const q);
    GetDatabasesRequestPrivate(const GetDatabasesRequestPrivate &other,
                                   GetDatabasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDatabasesRequest)

};

} // namespace Glue
} // namespace AWS

#endif
