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

#ifndef QTAWS_LISTENDPOINTSREQUEST_P_H
#define QTAWS_LISTENDPOINTSREQUEST_P_H

#include "s3outpostsrequest_p.h"
#include "listendpointsrequest.h"

namespace QtAws {
namespace S3Outposts {

class ListEndpointsRequest;

class QTAWS_EXPORT ListEndpointsRequestPrivate : public S3OutpostsRequestPrivate {

public:
    ListEndpointsRequestPrivate(const S3OutpostsRequest::Action action,
                                   ListEndpointsRequest * const q);
    ListEndpointsRequestPrivate(const ListEndpointsRequestPrivate &other,
                                   ListEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEndpointsRequest)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
