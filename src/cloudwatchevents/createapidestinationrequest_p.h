// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIDESTINATIONREQUEST_P_H
#define QTAWS_CREATEAPIDESTINATIONREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "createapidestinationrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class CreateApiDestinationRequest;

class CreateApiDestinationRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    CreateApiDestinationRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   CreateApiDestinationRequest * const q);
    CreateApiDestinationRequestPrivate(const CreateApiDestinationRequestPrivate &other,
                                   CreateApiDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApiDestinationRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
