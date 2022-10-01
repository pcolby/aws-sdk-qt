// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDHEARTBEATREQUEST_P_H
#define QTAWS_SENDHEARTBEATREQUEST_P_H

#include "sagemakeredgerequest_p.h"
#include "sendheartbeatrequest.h"

namespace QtAws {
namespace SagemakerEdge {

class SendHeartbeatRequest;

class SendHeartbeatRequestPrivate : public SagemakerEdgeRequestPrivate {

public:
    SendHeartbeatRequestPrivate(const SagemakerEdgeRequest::Action action,
                                   SendHeartbeatRequest * const q);
    SendHeartbeatRequestPrivate(const SendHeartbeatRequestPrivate &other,
                                   SendHeartbeatRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendHeartbeatRequest)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
