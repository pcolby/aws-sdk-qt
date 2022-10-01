// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDATIONTEMPLATESRESPONSE_H
#define QTAWS_LISTRECOMMENDATIONTEMPLATESRESPONSE_H

#include "resiliencehubresponse.h"
#include "listrecommendationtemplatesrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListRecommendationTemplatesResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ListRecommendationTemplatesResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ListRecommendationTemplatesResponse(const ListRecommendationTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecommendationTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecommendationTemplatesResponse)
    Q_DISABLE_COPY(ListRecommendationTemplatesResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
