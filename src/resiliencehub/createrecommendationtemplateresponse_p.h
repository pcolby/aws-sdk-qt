// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOMMENDATIONTEMPLATERESPONSE_P_H
#define QTAWS_CREATERECOMMENDATIONTEMPLATERESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class CreateRecommendationTemplateResponse;

class CreateRecommendationTemplateResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit CreateRecommendationTemplateResponsePrivate(CreateRecommendationTemplateResponse * const q);

    void parseCreateRecommendationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRecommendationTemplateResponse)
    Q_DISABLE_COPY(CreateRecommendationTemplateResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
