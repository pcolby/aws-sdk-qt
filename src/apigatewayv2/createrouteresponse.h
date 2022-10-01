// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTERESPONSE_H
#define QTAWS_CREATEROUTERESPONSE_H

#include "apigatewayv2response.h"
#include "createrouterequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateRouteResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateRouteResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    CreateRouteResponse(const CreateRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRouteResponse)
    Q_DISABLE_COPY(CreateRouteResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
