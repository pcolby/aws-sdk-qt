// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTCONFIGURATIONRECOMMENDATIONREQUEST_H
#define QTAWS_DESCRIBECOMPONENTCONFIGURATIONRECOMMENDATIONREQUEST_H

#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeComponentConfigurationRecommendationRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DescribeComponentConfigurationRecommendationRequest : public ApplicationInsightsRequest {

public:
    DescribeComponentConfigurationRecommendationRequest(const DescribeComponentConfigurationRecommendationRequest &other);
    DescribeComponentConfigurationRecommendationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeComponentConfigurationRecommendationRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
