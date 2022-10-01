// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDATIONTEMPLATERESPONSE_P_H
#define QTAWS_DELETERECOMMENDATIONTEMPLATERESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class DeleteRecommendationTemplateResponse;

class DeleteRecommendationTemplateResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit DeleteRecommendationTemplateResponsePrivate(DeleteRecommendationTemplateResponse * const q);

    void parseDeleteRecommendationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRecommendationTemplateResponse)
    Q_DISABLE_COPY(DeleteRecommendationTemplateResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
