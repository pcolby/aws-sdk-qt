// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDERCONFIGURATIONSRESPONSE_H
#define QTAWS_GETRECOMMENDERCONFIGURATIONSRESPONSE_H

#include "pinpointresponse.h"
#include "getrecommenderconfigurationsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetRecommenderConfigurationsResponsePrivate;

class QTAWSPINPOINT_EXPORT GetRecommenderConfigurationsResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetRecommenderConfigurationsResponse(const GetRecommenderConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecommenderConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecommenderConfigurationsResponse)
    Q_DISABLE_COPY(GetRecommenderConfigurationsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
