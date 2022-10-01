// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOSCALINGGROUPRECOMMENDATIONSRESPONSE_H
#define QTAWS_GETAUTOSCALINGGROUPRECOMMENDATIONSRESPONSE_H

#include "computeoptimizerresponse.h"
#include "getautoscalinggrouprecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetAutoScalingGroupRecommendationsResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetAutoScalingGroupRecommendationsResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    GetAutoScalingGroupRecommendationsResponse(const GetAutoScalingGroupRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAutoScalingGroupRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAutoScalingGroupRecommendationsResponse)
    Q_DISABLE_COPY(GetAutoScalingGroupRecommendationsResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
