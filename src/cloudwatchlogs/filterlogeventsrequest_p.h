// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FILTERLOGEVENTSREQUEST_P_H
#define QTAWS_FILTERLOGEVENTSREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "filterlogeventsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class FilterLogEventsRequest;

class FilterLogEventsRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    FilterLogEventsRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   FilterLogEventsRequest * const q);
    FilterLogEventsRequestPrivate(const FilterLogEventsRequestPrivate &other,
                                   FilterLogEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(FilterLogEventsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
