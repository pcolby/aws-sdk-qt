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

#ifndef QTAWS_LISTMULTIREGIONACCESSPOINTSREQUEST_P_H
#define QTAWS_LISTMULTIREGIONACCESSPOINTSREQUEST_P_H

#include "s3controlrequest_p.h"
#include "listmultiregionaccesspointsrequest.h"

namespace QtAws {
namespace S3Control {

class ListMultiRegionAccessPointsRequest;

class ListMultiRegionAccessPointsRequestPrivate : public S3ControlRequestPrivate {

public:
    ListMultiRegionAccessPointsRequestPrivate(const S3ControlRequest::Action action,
                                   ListMultiRegionAccessPointsRequest * const q);
    ListMultiRegionAccessPointsRequestPrivate(const ListMultiRegionAccessPointsRequestPrivate &other,
                                   ListMultiRegionAccessPointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMultiRegionAccessPointsRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
