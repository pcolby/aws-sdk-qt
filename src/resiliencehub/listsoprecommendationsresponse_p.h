// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOPRECOMMENDATIONSRESPONSE_P_H
#define QTAWS_LISTSOPRECOMMENDATIONSRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ListSopRecommendationsResponse;

class ListSopRecommendationsResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ListSopRecommendationsResponsePrivate(ListSopRecommendationsResponse * const q);

    void parseListSopRecommendationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSopRecommendationsResponse)
    Q_DISABLE_COPY(ListSopRecommendationsResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
