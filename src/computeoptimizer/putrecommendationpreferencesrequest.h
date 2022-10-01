// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECOMMENDATIONPREFERENCESREQUEST_H
#define QTAWS_PUTRECOMMENDATIONPREFERENCESREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class PutRecommendationPreferencesRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT PutRecommendationPreferencesRequest : public ComputeOptimizerRequest {

public:
    PutRecommendationPreferencesRequest(const PutRecommendationPreferencesRequest &other);
    PutRecommendationPreferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRecommendationPreferencesRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
