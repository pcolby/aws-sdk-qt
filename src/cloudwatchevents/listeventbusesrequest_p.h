// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTBUSESREQUEST_P_H
#define QTAWS_LISTEVENTBUSESREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "listeventbusesrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListEventBusesRequest;

class ListEventBusesRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    ListEventBusesRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   ListEventBusesRequest * const q);
    ListEventBusesRequestPrivate(const ListEventBusesRequestPrivate &other,
                                   ListEventBusesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventBusesRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
