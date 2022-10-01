// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOSCALINGGROUPRECOMMENDATIONSRESPONSE_P_H
#define QTAWS_GETAUTOSCALINGGROUPRECOMMENDATIONSRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetAutoScalingGroupRecommendationsResponse;

class GetAutoScalingGroupRecommendationsResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit GetAutoScalingGroupRecommendationsResponsePrivate(GetAutoScalingGroupRecommendationsResponse * const q);

    void parseGetAutoScalingGroupRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAutoScalingGroupRecommendationsResponse)
    Q_DISABLE_COPY(GetAutoScalingGroupRecommendationsResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
