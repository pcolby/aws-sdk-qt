// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBOTRECOMMENDATIONRESPONSE_P_H
#define QTAWS_STARTBOTRECOMMENDATIONRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class StartBotRecommendationResponse;

class StartBotRecommendationResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit StartBotRecommendationResponsePrivate(StartBotRecommendationResponse * const q);

    void parseStartBotRecommendationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartBotRecommendationResponse)
    Q_DISABLE_COPY(StartBotRecommendationResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
