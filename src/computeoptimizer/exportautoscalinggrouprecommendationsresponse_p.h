// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTAUTOSCALINGGROUPRECOMMENDATIONSRESPONSE_P_H
#define QTAWS_EXPORTAUTOSCALINGGROUPRECOMMENDATIONSRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportAutoScalingGroupRecommendationsResponse;

class ExportAutoScalingGroupRecommendationsResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit ExportAutoScalingGroupRecommendationsResponsePrivate(ExportAutoScalingGroupRecommendationsResponse * const q);

    void parseExportAutoScalingGroupRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportAutoScalingGroupRecommendationsResponse)
    Q_DISABLE_COPY(ExportAutoScalingGroupRecommendationsResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
