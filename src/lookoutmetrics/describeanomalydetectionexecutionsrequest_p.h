// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYDETECTIONEXECUTIONSREQUEST_P_H
#define QTAWS_DESCRIBEANOMALYDETECTIONEXECUTIONSREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "describeanomalydetectionexecutionsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeAnomalyDetectionExecutionsRequest;

class DescribeAnomalyDetectionExecutionsRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    DescribeAnomalyDetectionExecutionsRequestPrivate(const LookoutMetricsRequest::Action action,
                                   DescribeAnomalyDetectionExecutionsRequest * const q);
    DescribeAnomalyDetectionExecutionsRequestPrivate(const DescribeAnomalyDetectionExecutionsRequestPrivate &other,
                                   DescribeAnomalyDetectionExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAnomalyDetectionExecutionsRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
