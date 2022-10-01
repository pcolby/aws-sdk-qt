// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYDETECTORREQUEST_P_H
#define QTAWS_DESCRIBEANOMALYDETECTORREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "describeanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeAnomalyDetectorRequest;

class DescribeAnomalyDetectorRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    DescribeAnomalyDetectorRequestPrivate(const LookoutMetricsRequest::Action action,
                                   DescribeAnomalyDetectorRequest * const q);
    DescribeAnomalyDetectorRequestPrivate(const DescribeAnomalyDetectorRequestPrivate &other,
                                   DescribeAnomalyDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAnomalyDetectorRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
