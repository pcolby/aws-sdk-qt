// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEFFECTIVERECOMMENDATIONPREFERENCESREQUEST_H
#define QTAWS_GETEFFECTIVERECOMMENDATIONPREFERENCESREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEffectiveRecommendationPreferencesRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetEffectiveRecommendationPreferencesRequest : public ComputeOptimizerRequest {

public:
    GetEffectiveRecommendationPreferencesRequest(const GetEffectiveRecommendationPreferencesRequest &other);
    GetEffectiveRecommendationPreferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEffectiveRecommendationPreferencesRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
