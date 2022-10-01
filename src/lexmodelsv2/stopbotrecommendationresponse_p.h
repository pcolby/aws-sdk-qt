// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBOTRECOMMENDATIONRESPONSE_P_H
#define QTAWS_STOPBOTRECOMMENDATIONRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class StopBotRecommendationResponse;

class StopBotRecommendationResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit StopBotRecommendationResponsePrivate(StopBotRecommendationResponse * const q);

    void parseStopBotRecommendationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopBotRecommendationResponse)
    Q_DISABLE_COPY(StopBotRecommendationResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
