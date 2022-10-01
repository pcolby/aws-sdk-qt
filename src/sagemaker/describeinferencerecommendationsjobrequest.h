// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINFERENCERECOMMENDATIONSJOBREQUEST_H
#define QTAWS_DESCRIBEINFERENCERECOMMENDATIONSJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeInferenceRecommendationsJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeInferenceRecommendationsJobRequest : public SageMakerRequest {

public:
    DescribeInferenceRecommendationsJobRequest(const DescribeInferenceRecommendationsJobRequest &other);
    DescribeInferenceRecommendationsJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInferenceRecommendationsJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
