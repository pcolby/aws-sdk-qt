// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINENDPOINTSREQUEST_P_H
#define QTAWS_LISTORIGINENDPOINTSREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "listoriginendpointsrequest.h"

namespace QtAws {
namespace MediaPackage {

class ListOriginEndpointsRequest;

class ListOriginEndpointsRequestPrivate : public MediaPackageRequestPrivate {

public:
    ListOriginEndpointsRequestPrivate(const MediaPackageRequest::Action action,
                                   ListOriginEndpointsRequest * const q);
    ListOriginEndpointsRequestPrivate(const ListOriginEndpointsRequestPrivate &other,
                                   ListOriginEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOriginEndpointsRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
