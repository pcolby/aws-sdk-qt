// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEEVENTSOURCEREQUEST_P_H
#define QTAWS_ACTIVATEEVENTSOURCEREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "activateeventsourcerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ActivateEventSourceRequest;

class ActivateEventSourceRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    ActivateEventSourceRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   ActivateEventSourceRequest * const q);
    ActivateEventSourceRequestPrivate(const ActivateEventSourceRequestPrivate &other,
                                   ActivateEventSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ActivateEventSourceRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
