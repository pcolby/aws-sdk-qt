// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTCONFIGURATIONRECOMMENDATIONREQUEST_P_H
#define QTAWS_DESCRIBECOMPONENTCONFIGURATIONRECOMMENDATIONREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "describecomponentconfigurationrecommendationrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeComponentConfigurationRecommendationRequest;

class DescribeComponentConfigurationRecommendationRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    DescribeComponentConfigurationRecommendationRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   DescribeComponentConfigurationRecommendationRequest * const q);
    DescribeComponentConfigurationRecommendationRequestPrivate(const DescribeComponentConfigurationRecommendationRequestPrivate &other,
                                   DescribeComponentConfigurationRecommendationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeComponentConfigurationRecommendationRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
