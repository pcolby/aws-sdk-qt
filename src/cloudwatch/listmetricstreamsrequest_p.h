// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICSTREAMSREQUEST_P_H
#define QTAWS_LISTMETRICSTREAMSREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "listmetricstreamsrequest.h"

namespace QtAws {
namespace CloudWatch {

class ListMetricStreamsRequest;

class ListMetricStreamsRequestPrivate : public CloudWatchRequestPrivate {

public:
    ListMetricStreamsRequestPrivate(const CloudWatchRequest::Action action,
                                   ListMetricStreamsRequest * const q);
    ListMetricStreamsRequestPrivate(const ListMetricStreamsRequestPrivate &other,
                                   ListMetricStreamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMetricStreamsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
