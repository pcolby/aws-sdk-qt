/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTPROXYSESSIONSREQUEST_P_H
#define QTAWS_LISTPROXYSESSIONSREQUEST_P_H

#include "chimerequest_p.h"
#include "listproxysessionsrequest.h"

namespace QtAws {
namespace Chime {

class ListProxySessionsRequest;

class ListProxySessionsRequestPrivate : public ChimeRequestPrivate {

public:
    ListProxySessionsRequestPrivate(const ChimeRequest::Action action,
                                   ListProxySessionsRequest * const q);
    ListProxySessionsRequestPrivate(const ListProxySessionsRequestPrivate &other,
                                   ListProxySessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProxySessionsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
