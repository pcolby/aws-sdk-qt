// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTAUTOSCALINGGROUPRECOMMENDATIONSRESPONSE_H
#define QTAWS_EXPORTAUTOSCALINGGROUPRECOMMENDATIONSRESPONSE_H

#include "computeoptimizerresponse.h"
#include "exportautoscalinggrouprecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportAutoScalingGroupRecommendationsResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT ExportAutoScalingGroupRecommendationsResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    ExportAutoScalingGroupRecommendationsResponse(const ExportAutoScalingGroupRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportAutoScalingGroupRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportAutoScalingGroupRecommendationsResponse)
    Q_DISABLE_COPY(ExportAutoScalingGroupRecommendationsResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
