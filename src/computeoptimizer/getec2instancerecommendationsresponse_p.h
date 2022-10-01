// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEC2INSTANCERECOMMENDATIONSRESPONSE_P_H
#define QTAWS_GETEC2INSTANCERECOMMENDATIONSRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEC2InstanceRecommendationsResponse;

class GetEC2InstanceRecommendationsResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit GetEC2InstanceRecommendationsResponsePrivate(GetEC2InstanceRecommendationsResponse * const q);

    void parseGetEC2InstanceRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEC2InstanceRecommendationsResponse)
    Q_DISABLE_COPY(GetEC2InstanceRecommendationsResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
