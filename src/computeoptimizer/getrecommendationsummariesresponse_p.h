// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONSUMMARIESRESPONSE_P_H
#define QTAWS_GETRECOMMENDATIONSUMMARIESRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetRecommendationSummariesResponse;

class GetRecommendationSummariesResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit GetRecommendationSummariesResponsePrivate(GetRecommendationSummariesResponse * const q);

    void parseGetRecommendationSummariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRecommendationSummariesResponse)
    Q_DISABLE_COPY(GetRecommendationSummariesResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
