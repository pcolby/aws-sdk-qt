// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTRECOMMENDATIONREQUEST_P_H
#define QTAWS_DESCRIBEBOTRECOMMENDATIONREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "describebotrecommendationrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotRecommendationRequest;

class DescribeBotRecommendationRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DescribeBotRecommendationRequestPrivate(const LexModelsV2Request::Action action,
                                   DescribeBotRecommendationRequest * const q);
    DescribeBotRecommendationRequestPrivate(const DescribeBotRecommendationRequestPrivate &other,
                                   DescribeBotRecommendationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBotRecommendationRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
