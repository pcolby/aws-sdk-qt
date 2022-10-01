// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTERESPONSERESPONSE_H
#define QTAWS_GETROUTERESPONSERESPONSE_H

#include "apigatewayv2response.h"
#include "getrouteresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRouteResponseResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetRouteResponseResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetRouteResponseResponse(const GetRouteResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRouteResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRouteResponseResponse)
    Q_DISABLE_COPY(GetRouteResponseResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
