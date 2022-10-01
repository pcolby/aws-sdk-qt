// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELREPLAYREQUEST_P_H
#define QTAWS_CANCELREPLAYREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "cancelreplayrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class CancelReplayRequest;

class CancelReplayRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    CancelReplayRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   CancelReplayRequest * const q);
    CancelReplayRequestPrivate(const CancelReplayRequestPrivate &other,
                                   CancelReplayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelReplayRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
