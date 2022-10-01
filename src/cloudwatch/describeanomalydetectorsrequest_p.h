// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYDETECTORSREQUEST_P_H
#define QTAWS_DESCRIBEANOMALYDETECTORSREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "describeanomalydetectorsrequest.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAnomalyDetectorsRequest;

class DescribeAnomalyDetectorsRequestPrivate : public CloudWatchRequestPrivate {

public:
    DescribeAnomalyDetectorsRequestPrivate(const CloudWatchRequest::Action action,
                                   DescribeAnomalyDetectorsRequest * const q);
    DescribeAnomalyDetectorsRequestPrivate(const DescribeAnomalyDetectorsRequestPrivate &other,
                                   DescribeAnomalyDetectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAnomalyDetectorsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
