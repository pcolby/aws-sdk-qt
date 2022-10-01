// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLAYREQUEST_P_H
#define QTAWS_STARTREPLAYREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "startreplayrequest.h"

namespace QtAws {
namespace EventBridge {

class StartReplayRequest;

class StartReplayRequestPrivate : public EventBridgeRequestPrivate {

public:
    StartReplayRequestPrivate(const EventBridgeRequest::Action action,
                                   StartReplayRequest * const q);
    StartReplayRequestPrivate(const StartReplayRequestPrivate &other,
                                   StartReplayRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartReplayRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
