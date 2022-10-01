// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTRECOMMENDATIONSRESPONSE_P_H
#define QTAWS_LISTBOTRECOMMENDATIONSRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotRecommendationsResponse;

class ListBotRecommendationsResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit ListBotRecommendationsResponsePrivate(ListBotRecommendationsResponse * const q);

    void parseListBotRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBotRecommendationsResponse)
    Q_DISABLE_COPY(ListBotRecommendationsResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
