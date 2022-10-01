// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOMMENDATIONEXPORTJOBSREQUEST_H
#define QTAWS_DESCRIBERECOMMENDATIONEXPORTJOBSREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class DescribeRecommendationExportJobsRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT DescribeRecommendationExportJobsRequest : public ComputeOptimizerRequest {

public:
    DescribeRecommendationExportJobsRequest(const DescribeRecommendationExportJobsRequest &other);
    DescribeRecommendationExportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecommendationExportJobsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
