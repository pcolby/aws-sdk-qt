// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOMMENDATIONEXPORTJOBSRESPONSE_H
#define QTAWS_DESCRIBERECOMMENDATIONEXPORTJOBSRESPONSE_H

#include "computeoptimizerresponse.h"
#include "describerecommendationexportjobsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class DescribeRecommendationExportJobsResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT DescribeRecommendationExportJobsResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    DescribeRecommendationExportJobsResponse(const DescribeRecommendationExportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRecommendationExportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecommendationExportJobsResponse)
    Q_DISABLE_COPY(DescribeRecommendationExportJobsResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
