// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINFERENCERECOMMENDATIONSJOBRESPONSE_P_H
#define QTAWS_CREATEINFERENCERECOMMENDATIONSJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateInferenceRecommendationsJobResponse;

class CreateInferenceRecommendationsJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateInferenceRecommendationsJobResponsePrivate(CreateInferenceRecommendationsJobResponse * const q);

    void parseCreateInferenceRecommendationsJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInferenceRecommendationsJobResponse)
    Q_DISABLE_COPY(CreateInferenceRecommendationsJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
