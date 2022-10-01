// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELREPLAYREQUEST_P_H
#define QTAWS_CANCELREPLAYREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "cancelreplayrequest.h"

namespace QtAws {
namespace EventBridge {

class CancelReplayRequest;

class CancelReplayRequestPrivate : public EventBridgeRequestPrivate {

public:
    CancelReplayRequestPrivate(const EventBridgeRequest::Action action,
                                   CancelReplayRequest * const q);
    CancelReplayRequestPrivate(const CancelReplayRequestPrivate &other,
                                   CancelReplayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelReplayRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
