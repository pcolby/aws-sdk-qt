// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOMMENDATIONEXPORTJOBSREQUEST_P_H
#define QTAWS_DESCRIBERECOMMENDATIONEXPORTJOBSREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "describerecommendationexportjobsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class DescribeRecommendationExportJobsRequest;

class DescribeRecommendationExportJobsRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    DescribeRecommendationExportJobsRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   DescribeRecommendationExportJobsRequest * const q);
    DescribeRecommendationExportJobsRequestPrivate(const DescribeRecommendationExportJobsRequestPrivate &other,
                                   DescribeRecommendationExportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRecommendationExportJobsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
