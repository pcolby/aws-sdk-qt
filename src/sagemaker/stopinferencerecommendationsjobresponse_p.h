// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINFERENCERECOMMENDATIONSJOBRESPONSE_P_H
#define QTAWS_STOPINFERENCERECOMMENDATIONSJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StopInferenceRecommendationsJobResponse;

class StopInferenceRecommendationsJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StopInferenceRecommendationsJobResponsePrivate(StopInferenceRecommendationsJobResponse * const q);

    void parseStopInferenceRecommendationsJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopInferenceRecommendationsJobResponse)
    Q_DISABLE_COPY(StopInferenceRecommendationsJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
