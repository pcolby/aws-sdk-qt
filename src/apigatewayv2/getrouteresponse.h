// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTERESPONSE_H
#define QTAWS_GETROUTERESPONSE_H

#include "apigatewayv2response.h"
#include "getrouterequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRouteResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetRouteResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetRouteResponse(const GetRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRouteResponse)
    Q_DISABLE_COPY(GetRouteResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
