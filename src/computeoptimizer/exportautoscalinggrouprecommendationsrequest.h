// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTAUTOSCALINGGROUPRECOMMENDATIONSREQUEST_H
#define QTAWS_EXPORTAUTOSCALINGGROUPRECOMMENDATIONSREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportAutoScalingGroupRecommendationsRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT ExportAutoScalingGroupRecommendationsRequest : public ComputeOptimizerRequest {

public:
    ExportAutoScalingGroupRecommendationsRequest(const ExportAutoScalingGroupRecommendationsRequest &other);
    ExportAutoScalingGroupRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportAutoScalingGroupRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
