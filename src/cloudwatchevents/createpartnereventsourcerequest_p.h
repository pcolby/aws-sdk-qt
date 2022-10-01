// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTNEREVENTSOURCEREQUEST_P_H
#define QTAWS_CREATEPARTNEREVENTSOURCEREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "createpartnereventsourcerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class CreatePartnerEventSourceRequest;

class CreatePartnerEventSourceRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    CreatePartnerEventSourceRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   CreatePartnerEventSourceRequest * const q);
    CreatePartnerEventSourceRequestPrivate(const CreatePartnerEventSourceRequestPrivate &other,
                                   CreatePartnerEventSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePartnerEventSourceRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
