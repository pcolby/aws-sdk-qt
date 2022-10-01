// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPARTNEREVENTSREQUEST_P_H
#define QTAWS_PUTPARTNEREVENTSREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "putpartnereventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class PutPartnerEventsRequest;

class PutPartnerEventsRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    PutPartnerEventsRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   PutPartnerEventsRequest * const q);
    PutPartnerEventsRequestPrivate(const PutPartnerEventsRequestPrivate &other,
                                   PutPartnerEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPartnerEventsRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
