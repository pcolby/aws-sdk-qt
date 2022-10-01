// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCERECOMMENDATIONSJOBSREQUEST_H
#define QTAWS_LISTINFERENCERECOMMENDATIONSJOBSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListInferenceRecommendationsJobsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListInferenceRecommendationsJobsRequest : public SageMakerRequest {

public:
    ListInferenceRecommendationsJobsRequest(const ListInferenceRecommendationsJobsRequest &other);
    ListInferenceRecommendationsJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInferenceRecommendationsJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
