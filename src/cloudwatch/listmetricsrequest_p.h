// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICSREQUEST_P_H
#define QTAWS_LISTMETRICSREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "listmetricsrequest.h"

namespace QtAws {
namespace CloudWatch {

class ListMetricsRequest;

class ListMetricsRequestPrivate : public CloudWatchRequestPrivate {

public:
    ListMetricsRequestPrivate(const CloudWatchRequest::Action action,
                                   ListMetricsRequest * const q);
    ListMetricsRequestPrivate(const ListMetricsRequestPrivate &other,
                                   ListMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMetricsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
