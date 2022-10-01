// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTCONFIGURATIONRECOMMENDATIONRESPONSE_H
#define QTAWS_DESCRIBECOMPONENTCONFIGURATIONRECOMMENDATIONRESPONSE_H

#include "applicationinsightsresponse.h"
#include "describecomponentconfigurationrecommendationrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeComponentConfigurationRecommendationResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DescribeComponentConfigurationRecommendationResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    DescribeComponentConfigurationRecommendationResponse(const DescribeComponentConfigurationRecommendationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeComponentConfigurationRecommendationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeComponentConfigurationRecommendationResponse)
    Q_DISABLE_COPY(DescribeComponentConfigurationRecommendationResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
