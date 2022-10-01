// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTRECOMMENDATIONRESPONSE_P_H
#define QTAWS_DESCRIBEBOTRECOMMENDATIONRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotRecommendationResponse;

class DescribeBotRecommendationResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DescribeBotRecommendationResponsePrivate(DescribeBotRecommendationResponse * const q);

    void parseDescribeBotRecommendationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBotRecommendationResponse)
    Q_DISABLE_COPY(DescribeBotRecommendationResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
