// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONSUMMARIESREQUEST_H
#define QTAWS_GETRECOMMENDATIONSUMMARIESREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetRecommendationSummariesRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetRecommendationSummariesRequest : public ComputeOptimizerRequest {

public:
    GetRecommendationSummariesRequest(const GetRecommendationSummariesRequest &other);
    GetRecommendationSummariesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecommendationSummariesRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
