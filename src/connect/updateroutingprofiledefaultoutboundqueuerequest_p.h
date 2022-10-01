// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILEDEFAULTOUTBOUNDQUEUEREQUEST_P_H
#define QTAWS_UPDATEROUTINGPROFILEDEFAULTOUTBOUNDQUEUEREQUEST_P_H

#include "connectrequest_p.h"
#include "updateroutingprofiledefaultoutboundqueuerequest.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileDefaultOutboundQueueRequest;

class UpdateRoutingProfileDefaultOutboundQueueRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateRoutingProfileDefaultOutboundQueueRequestPrivate(const ConnectRequest::Action action,
                                   UpdateRoutingProfileDefaultOutboundQueueRequest * const q);
    UpdateRoutingProfileDefaultOutboundQueueRequestPrivate(const UpdateRoutingProfileDefaultOutboundQueueRequestPrivate &other,
                                   UpdateRoutingProfileDefaultOutboundQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingProfileDefaultOutboundQueueRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
