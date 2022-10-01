// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSREQUEST_P_H
#define QTAWS_PUTEVENTSREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "puteventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class PutEventsRequest;

class PutEventsRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    PutEventsRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   PutEventsRequest * const q);
    PutEventsRequestPrivate(const PutEventsRequestPrivate &other,
                                   PutEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEventsRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
