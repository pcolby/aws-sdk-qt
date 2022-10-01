// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTNEREVENTSOURCEREQUEST_P_H
#define QTAWS_DELETEPARTNEREVENTSOURCEREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "deletepartnereventsourcerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeletePartnerEventSourceRequest;

class DeletePartnerEventSourceRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    DeletePartnerEventSourceRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   DeletePartnerEventSourceRequest * const q);
    DeletePartnerEventSourceRequestPrivate(const DeletePartnerEventSourceRequestPrivate &other,
                                   DeletePartnerEventSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePartnerEventSourceRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
