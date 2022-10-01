// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDEDINTENTSRESPONSE_P_H
#define QTAWS_LISTRECOMMENDEDINTENTSRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class ListRecommendedIntentsResponse;

class ListRecommendedIntentsResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit ListRecommendedIntentsResponsePrivate(ListRecommendedIntentsResponse * const q);

    void parseListRecommendedIntentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecommendedIntentsResponse)
    Q_DISABLE_COPY(ListRecommendedIntentsResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
