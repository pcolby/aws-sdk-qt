// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTRECOMMENDATIONRESPONSE_P_H
#define QTAWS_UPDATEBOTRECOMMENDATIONRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotRecommendationResponse;

class UpdateBotRecommendationResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit UpdateBotRecommendationResponsePrivate(UpdateBotRecommendationResponse * const q);

    void parseUpdateBotRecommendationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBotRecommendationResponse)
    Q_DISABLE_COPY(UpdateBotRecommendationResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
