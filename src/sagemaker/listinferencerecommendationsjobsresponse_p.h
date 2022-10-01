// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCERECOMMENDATIONSJOBSRESPONSE_P_H
#define QTAWS_LISTINFERENCERECOMMENDATIONSJOBSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListInferenceRecommendationsJobsResponse;

class ListInferenceRecommendationsJobsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListInferenceRecommendationsJobsResponsePrivate(ListInferenceRecommendationsJobsResponse * const q);

    void parseListInferenceRecommendationsJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInferenceRecommendationsJobsResponse)
    Q_DISABLE_COPY(ListInferenceRecommendationsJobsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
