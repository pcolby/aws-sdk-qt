// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECHANNELFLOWREQUEST_P_H
#define QTAWS_ASSOCIATECHANNELFLOWREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "associatechannelflowrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class AssociateChannelFlowRequest;

class AssociateChannelFlowRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    AssociateChannelFlowRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   AssociateChannelFlowRequest * const q);
    AssociateChannelFlowRequestPrivate(const AssociateChannelFlowRequestPrivate &other,
                                   AssociateChannelFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
