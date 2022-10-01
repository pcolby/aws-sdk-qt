// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEAUTHORIZECONNECTIONREQUEST_P_H
#define QTAWS_DEAUTHORIZECONNECTIONREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "deauthorizeconnectionrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeauthorizeConnectionRequest;

class DeauthorizeConnectionRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    DeauthorizeConnectionRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   DeauthorizeConnectionRequest * const q);
    DeauthorizeConnectionRequestPrivate(const DeauthorizeConnectionRequestPrivate &other,
                                   DeauthorizeConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeauthorizeConnectionRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
