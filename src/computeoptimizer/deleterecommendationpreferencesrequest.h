// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDATIONPREFERENCESREQUEST_H
#define QTAWS_DELETERECOMMENDATIONPREFERENCESREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class DeleteRecommendationPreferencesRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT DeleteRecommendationPreferencesRequest : public ComputeOptimizerRequest {

public:
    DeleteRecommendationPreferencesRequest(const DeleteRecommendationPreferencesRequest &other);
    DeleteRecommendationPreferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecommendationPreferencesRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
