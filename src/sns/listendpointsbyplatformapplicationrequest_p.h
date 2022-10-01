// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTSBYPLATFORMAPPLICATIONREQUEST_P_H
#define QTAWS_LISTENDPOINTSBYPLATFORMAPPLICATIONREQUEST_P_H

#include "snsrequest_p.h"
#include "listendpointsbyplatformapplicationrequest.h"

namespace QtAws {
namespace Sns {

class ListEndpointsByPlatformApplicationRequest;

class ListEndpointsByPlatformApplicationRequestPrivate : public SnsRequestPrivate {

public:
    ListEndpointsByPlatformApplicationRequestPrivate(const SnsRequest::Action action,
                                   ListEndpointsByPlatformApplicationRequest * const q);
    ListEndpointsByPlatformApplicationRequestPrivate(const ListEndpointsByPlatformApplicationRequestPrivate &other,
                                   ListEndpointsByPlatformApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEndpointsByPlatformApplicationRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
