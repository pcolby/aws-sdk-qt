// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTERESPONSERESPONSE_H
#define QTAWS_CREATEROUTERESPONSERESPONSE_H

#include "apigatewayv2response.h"
#include "createrouteresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateRouteResponseResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateRouteResponseResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    CreateRouteResponseResponse(const CreateRouteResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRouteResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRouteResponseResponse)
    Q_DISABLE_COPY(CreateRouteResponseResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
