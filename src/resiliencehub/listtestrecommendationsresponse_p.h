// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTRECOMMENDATIONSRESPONSE_P_H
#define QTAWS_LISTTESTRECOMMENDATIONSRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ListTestRecommendationsResponse;

class ListTestRecommendationsResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ListTestRecommendationsResponsePrivate(ListTestRecommendationsResponse * const q);

    void parseListTestRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTestRecommendationsResponse)
    Q_DISABLE_COPY(ListTestRecommendationsResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
