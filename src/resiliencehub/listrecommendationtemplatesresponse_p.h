// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDATIONTEMPLATESRESPONSE_P_H
#define QTAWS_LISTRECOMMENDATIONTEMPLATESRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ListRecommendationTemplatesResponse;

class ListRecommendationTemplatesResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ListRecommendationTemplatesResponsePrivate(ListRecommendationTemplatesResponse * const q);

    void parseListRecommendationTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecommendationTemplatesResponse)
    Q_DISABLE_COPY(ListRecommendationTemplatesResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
