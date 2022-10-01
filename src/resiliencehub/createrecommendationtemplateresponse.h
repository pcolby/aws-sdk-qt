// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOMMENDATIONTEMPLATERESPONSE_H
#define QTAWS_CREATERECOMMENDATIONTEMPLATERESPONSE_H

#include "resiliencehubresponse.h"
#include "createrecommendationtemplaterequest.h"

namespace QtAws {
namespace ResilienceHub {

class CreateRecommendationTemplateResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT CreateRecommendationTemplateResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    CreateRecommendationTemplateResponse(const CreateRecommendationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRecommendationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecommendationTemplateResponse)
    Q_DISABLE_COPY(CreateRecommendationTemplateResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
