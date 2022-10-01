// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTCONFIGURATIONRECOMMENDATIONRESPONSE_P_H
#define QTAWS_DESCRIBECOMPONENTCONFIGURATIONRECOMMENDATIONRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeComponentConfigurationRecommendationResponse;

class DescribeComponentConfigurationRecommendationResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit DescribeComponentConfigurationRecommendationResponsePrivate(DescribeComponentConfigurationRecommendationResponse * const q);

    void parseDescribeComponentConfigurationRecommendationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeComponentConfigurationRecommendationResponse)
    Q_DISABLE_COPY(DescribeComponentConfigurationRecommendationResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
