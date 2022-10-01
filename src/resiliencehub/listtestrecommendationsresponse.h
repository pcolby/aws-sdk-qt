// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTRECOMMENDATIONSRESPONSE_H
#define QTAWS_LISTTESTRECOMMENDATIONSRESPONSE_H

#include "resiliencehubresponse.h"
#include "listtestrecommendationsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListTestRecommendationsResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ListTestRecommendationsResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ListTestRecommendationsResponse(const ListTestRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTestRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTestRecommendationsResponse)
    Q_DISABLE_COPY(ListTestRecommendationsResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
