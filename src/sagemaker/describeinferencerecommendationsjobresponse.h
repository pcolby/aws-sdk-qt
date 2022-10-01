// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINFERENCERECOMMENDATIONSJOBRESPONSE_H
#define QTAWS_DESCRIBEINFERENCERECOMMENDATIONSJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "describeinferencerecommendationsjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeInferenceRecommendationsJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeInferenceRecommendationsJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeInferenceRecommendationsJobResponse(const DescribeInferenceRecommendationsJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInferenceRecommendationsJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInferenceRecommendationsJobResponse)
    Q_DISABLE_COPY(DescribeInferenceRecommendationsJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
