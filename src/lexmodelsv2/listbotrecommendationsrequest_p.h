// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTRECOMMENDATIONSREQUEST_P_H
#define QTAWS_LISTBOTRECOMMENDATIONSREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "listbotrecommendationsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotRecommendationsRequest;

class ListBotRecommendationsRequestPrivate : public LexModelsV2RequestPrivate {

public:
    ListBotRecommendationsRequestPrivate(const LexModelsV2Request::Action action,
                                   ListBotRecommendationsRequest * const q);
    ListBotRecommendationsRequestPrivate(const ListBotRecommendationsRequestPrivate &other,
                                   ListBotRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBotRecommendationsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
