// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEC2RECOMMENDATIONPROJECTEDMETRICSRESPONSE_P_H
#define QTAWS_GETEC2RECOMMENDATIONPROJECTEDMETRICSRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEC2RecommendationProjectedMetricsResponse;

class GetEC2RecommendationProjectedMetricsResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit GetEC2RecommendationProjectedMetricsResponsePrivate(GetEC2RecommendationProjectedMetricsResponse * const q);

    void parseGetEC2RecommendationProjectedMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEC2RecommendationProjectedMetricsResponse)
    Q_DISABLE_COPY(GetEC2RecommendationProjectedMetricsResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
