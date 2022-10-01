// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBOTRECOMMENDATIONREQUEST_P_H
#define QTAWS_STOPBOTRECOMMENDATIONREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "stopbotrecommendationrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class StopBotRecommendationRequest;

class StopBotRecommendationRequestPrivate : public LexModelsV2RequestPrivate {

public:
    StopBotRecommendationRequestPrivate(const LexModelsV2Request::Action action,
                                   StopBotRecommendationRequest * const q);
    StopBotRecommendationRequestPrivate(const StopBotRecommendationRequestPrivate &other,
                                   StopBotRecommendationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopBotRecommendationRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
