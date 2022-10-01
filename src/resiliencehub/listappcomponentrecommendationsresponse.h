// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPCOMPONENTRECOMMENDATIONSRESPONSE_H
#define QTAWS_LISTAPPCOMPONENTRECOMMENDATIONSRESPONSE_H

#include "resiliencehubresponse.h"
#include "listappcomponentrecommendationsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppComponentRecommendationsResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAppComponentRecommendationsResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ListAppComponentRecommendationsResponse(const ListAppComponentRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppComponentRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppComponentRecommendationsResponse)
    Q_DISABLE_COPY(ListAppComponentRecommendationsResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
