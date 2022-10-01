// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSOURCESREQUEST_P_H
#define QTAWS_LISTEVENTSOURCESREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "listeventsourcesrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListEventSourcesRequest;

class ListEventSourcesRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    ListEventSourcesRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   ListEventSourcesRequest * const q);
    ListEventSourcesRequestPrivate(const ListEventSourcesRequestPrivate &other,
                                   ListEventSourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventSourcesRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
