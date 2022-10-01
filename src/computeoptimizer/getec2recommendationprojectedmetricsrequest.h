// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEC2RECOMMENDATIONPROJECTEDMETRICSREQUEST_H
#define QTAWS_GETEC2RECOMMENDATIONPROJECTEDMETRICSREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEC2RecommendationProjectedMetricsRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetEC2RecommendationProjectedMetricsRequest : public ComputeOptimizerRequest {

public:
    GetEC2RecommendationProjectedMetricsRequest(const GetEC2RecommendationProjectedMetricsRequest &other);
    GetEC2RecommendationProjectedMetricsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEC2RecommendationProjectedMetricsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
