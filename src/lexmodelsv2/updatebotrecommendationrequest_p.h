// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTRECOMMENDATIONREQUEST_P_H
#define QTAWS_UPDATEBOTRECOMMENDATIONREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "updatebotrecommendationrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotRecommendationRequest;

class UpdateBotRecommendationRequestPrivate : public LexModelsV2RequestPrivate {

public:
    UpdateBotRecommendationRequestPrivate(const LexModelsV2Request::Action action,
                                   UpdateBotRecommendationRequest * const q);
    UpdateBotRecommendationRequestPrivate(const UpdateBotRecommendationRequestPrivate &other,
                                   UpdateBotRecommendationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBotRecommendationRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
