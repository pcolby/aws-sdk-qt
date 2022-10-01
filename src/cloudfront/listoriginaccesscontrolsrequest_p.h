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

#ifndef QTAWS_LISTORIGINACCESSCONTROLSREQUEST_P_H
#define QTAWS_LISTORIGINACCESSCONTROLSREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listoriginaccesscontrolsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListOriginAccessControlsRequest;

class ListOriginAccessControlsRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListOriginAccessControlsRequestPrivate(const CloudFrontRequest::Action action,
                                   ListOriginAccessControlsRequest * const q);
    ListOriginAccessControlsRequestPrivate(const ListOriginAccessControlsRequestPrivate &other,
                                   ListOriginAccessControlsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOriginAccessControlsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
