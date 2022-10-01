// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINFERENCERECOMMENDATIONSJOBRESPONSE_H
#define QTAWS_STOPINFERENCERECOMMENDATIONSJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "stopinferencerecommendationsjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopInferenceRecommendationsJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT StopInferenceRecommendationsJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    StopInferenceRecommendationsJobResponse(const StopInferenceRecommendationsJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopInferenceRecommendationsJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopInferenceRecommendationsJobResponse)
    Q_DISABLE_COPY(StopInferenceRecommendationsJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
