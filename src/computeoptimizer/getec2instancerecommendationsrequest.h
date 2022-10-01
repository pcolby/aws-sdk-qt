// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEC2INSTANCERECOMMENDATIONSREQUEST_H
#define QTAWS_GETEC2INSTANCERECOMMENDATIONSREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEC2InstanceRecommendationsRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetEC2InstanceRecommendationsRequest : public ComputeOptimizerRequest {

public:
    GetEC2InstanceRecommendationsRequest(const GetEC2InstanceRecommendationsRequest &other);
    GetEC2InstanceRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEC2InstanceRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
