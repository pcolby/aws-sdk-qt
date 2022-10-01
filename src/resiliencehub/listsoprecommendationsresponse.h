// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOPRECOMMENDATIONSRESPONSE_H
#define QTAWS_LISTSOPRECOMMENDATIONSRESPONSE_H

#include "resiliencehubresponse.h"
#include "listsoprecommendationsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListSopRecommendationsResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ListSopRecommendationsResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ListSopRecommendationsResponse(const ListSopRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSopRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSopRecommendationsResponse)
    Q_DISABLE_COPY(ListSopRecommendationsResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
