// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDEDINTENTSREQUEST_P_H
#define QTAWS_LISTRECOMMENDEDINTENTSREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "listrecommendedintentsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListRecommendedIntentsRequest;

class ListRecommendedIntentsRequestPrivate : public LexModelsV2RequestPrivate {

public:
    ListRecommendedIntentsRequestPrivate(const LexModelsV2Request::Action action,
                                   ListRecommendedIntentsRequest * const q);
    ListRecommendedIntentsRequestPrivate(const ListRecommendedIntentsRequestPrivate &other,
                                   ListRecommendedIntentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecommendedIntentsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
