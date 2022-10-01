// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOMMENDATIONEXPORTJOBSRESPONSE_P_H
#define QTAWS_DESCRIBERECOMMENDATIONEXPORTJOBSRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class DescribeRecommendationExportJobsResponse;

class DescribeRecommendationExportJobsResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit DescribeRecommendationExportJobsResponsePrivate(DescribeRecommendationExportJobsResponse * const q);

    void parseDescribeRecommendationExportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRecommendationExportJobsResponse)
    Q_DISABLE_COPY(DescribeRecommendationExportJobsResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
