// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMRECOMMENDATIONSRESPONSE_H
#define QTAWS_LISTALARMRECOMMENDATIONSRESPONSE_H

#include "resiliencehubresponse.h"
#include "listalarmrecommendationsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAlarmRecommendationsResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAlarmRecommendationsResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ListAlarmRecommendationsResponse(const ListAlarmRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAlarmRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAlarmRecommendationsResponse)
    Q_DISABLE_COPY(ListAlarmRecommendationsResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
