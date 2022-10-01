// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINFERENCERECOMMENDATIONSJOBRESPONSE_P_H
#define QTAWS_DESCRIBEINFERENCERECOMMENDATIONSJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeInferenceRecommendationsJobResponse;

class DescribeInferenceRecommendationsJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeInferenceRecommendationsJobResponsePrivate(DescribeInferenceRecommendationsJobResponse * const q);

    void parseDescribeInferenceRecommendationsJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInferenceRecommendationsJobResponse)
    Q_DISABLE_COPY(DescribeInferenceRecommendationsJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
