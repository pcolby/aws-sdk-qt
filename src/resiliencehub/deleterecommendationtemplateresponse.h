// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDATIONTEMPLATERESPONSE_H
#define QTAWS_DELETERECOMMENDATIONTEMPLATERESPONSE_H

#include "resiliencehubresponse.h"
#include "deleterecommendationtemplaterequest.h"

namespace QtAws {
namespace ResilienceHub {

class DeleteRecommendationTemplateResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT DeleteRecommendationTemplateResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    DeleteRecommendationTemplateResponse(const DeleteRecommendationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRecommendationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecommendationTemplateResponse)
    Q_DISABLE_COPY(DeleteRecommendationTemplateResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
