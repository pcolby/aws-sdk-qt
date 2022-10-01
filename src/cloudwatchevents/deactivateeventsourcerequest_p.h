// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEEVENTSOURCEREQUEST_P_H
#define QTAWS_DEACTIVATEEVENTSOURCEREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "deactivateeventsourcerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeactivateEventSourceRequest;

class DeactivateEventSourceRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    DeactivateEventSourceRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   DeactivateEventSourceRequest * const q);
    DeactivateEventSourceRequestPrivate(const DeactivateEventSourceRequestPrivate &other,
                                   DeactivateEventSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeactivateEventSourceRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
