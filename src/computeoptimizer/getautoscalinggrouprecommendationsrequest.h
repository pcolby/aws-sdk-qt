// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOSCALINGGROUPRECOMMENDATIONSREQUEST_H
#define QTAWS_GETAUTOSCALINGGROUPRECOMMENDATIONSREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetAutoScalingGroupRecommendationsRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetAutoScalingGroupRecommendationsRequest : public ComputeOptimizerRequest {

public:
    GetAutoScalingGroupRecommendationsRequest(const GetAutoScalingGroupRecommendationsRequest &other);
    GetAutoScalingGroupRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAutoScalingGroupRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
