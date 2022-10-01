// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMETRICSETREQUEST_P_H
#define QTAWS_DESCRIBEMETRICSETREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "describemetricsetrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeMetricSetRequest;

class DescribeMetricSetRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    DescribeMetricSetRequestPrivate(const LookoutMetricsRequest::Action action,
                                   DescribeMetricSetRequest * const q);
    DescribeMetricSetRequestPrivate(const DescribeMetricSetRequestPrivate &other,
                                   DescribeMetricSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMetricSetRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
