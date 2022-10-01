// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECHANNELFLOWREQUEST_P_H
#define QTAWS_DISASSOCIATECHANNELFLOWREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "disassociatechannelflowrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DisassociateChannelFlowRequest;

class DisassociateChannelFlowRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    DisassociateChannelFlowRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   DisassociateChannelFlowRequest * const q);
    DisassociateChannelFlowRequestPrivate(const DisassociateChannelFlowRequestPrivate &other,
                                   DisassociateChannelFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
