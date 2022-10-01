// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEC2RECOMMENDATIONPROJECTEDMETRICSRESPONSE_H
#define QTAWS_GETEC2RECOMMENDATIONPROJECTEDMETRICSRESPONSE_H

#include "computeoptimizerresponse.h"
#include "getec2recommendationprojectedmetricsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEC2RecommendationProjectedMetricsResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetEC2RecommendationProjectedMetricsResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    GetEC2RecommendationProjectedMetricsResponse(const GetEC2RecommendationProjectedMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEC2RecommendationProjectedMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEC2RecommendationProjectedMetricsResponse)
    Q_DISABLE_COPY(GetEC2RecommendationProjectedMetricsResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
