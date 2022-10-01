// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBOTRECOMMENDATIONREQUEST_P_H
#define QTAWS_STARTBOTRECOMMENDATIONREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "startbotrecommendationrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class StartBotRecommendationRequest;

class StartBotRecommendationRequestPrivate : public LexModelsV2RequestPrivate {

public:
    StartBotRecommendationRequestPrivate(const LexModelsV2Request::Action action,
                                   StartBotRecommendationRequest * const q);
    StartBotRecommendationRequestPrivate(const StartBotRecommendationRequestPrivate &other,
                                   StartBotRecommendationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartBotRecommendationRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
