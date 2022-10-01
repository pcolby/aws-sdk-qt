// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIDESTINATIONREQUEST_P_H
#define QTAWS_DELETEAPIDESTINATIONREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "deleteapidestinationrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeleteApiDestinationRequest;

class DeleteApiDestinationRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    DeleteApiDestinationRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   DeleteApiDestinationRequest * const q);
    DeleteApiDestinationRequestPrivate(const DeleteApiDestinationRequestPrivate &other,
                                   DeleteApiDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApiDestinationRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
