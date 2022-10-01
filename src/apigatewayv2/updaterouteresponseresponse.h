// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTERESPONSERESPONSE_H
#define QTAWS_UPDATEROUTERESPONSERESPONSE_H

#include "apigatewayv2response.h"
#include "updaterouteresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateRouteResponseResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateRouteResponseResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    UpdateRouteResponseResponse(const UpdateRouteResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRouteResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRouteResponseResponse)
    Q_DISABLE_COPY(UpdateRouteResponseResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
