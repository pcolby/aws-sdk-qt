// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPCOMPONENTRECOMMENDATIONSRESPONSE_P_H
#define QTAWS_LISTAPPCOMPONENTRECOMMENDATIONSRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppComponentRecommendationsResponse;

class ListAppComponentRecommendationsResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ListAppComponentRecommendationsResponsePrivate(ListAppComponentRecommendationsResponse * const q);

    void parseListAppComponentRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppComponentRecommendationsResponse)
    Q_DISABLE_COPY(ListAppComponentRecommendationsResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
