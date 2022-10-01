// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCERECOMMENDATIONSJOBSRESPONSE_H
#define QTAWS_LISTINFERENCERECOMMENDATIONSJOBSRESPONSE_H

#include "sagemakerresponse.h"
#include "listinferencerecommendationsjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListInferenceRecommendationsJobsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListInferenceRecommendationsJobsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListInferenceRecommendationsJobsResponse(const ListInferenceRecommendationsJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInferenceRecommendationsJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInferenceRecommendationsJobsResponse)
    Q_DISABLE_COPY(ListInferenceRecommendationsJobsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
