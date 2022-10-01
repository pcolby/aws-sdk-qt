// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTERESPONSERESPONSE_H
#define QTAWS_DELETEROUTERESPONSERESPONSE_H

#include "apigatewayv2response.h"
#include "deleterouteresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteRouteResponseResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteRouteResponseResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    DeleteRouteResponseResponse(const DeleteRouteResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRouteResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRouteResponseResponse)
    Q_DISABLE_COPY(DeleteRouteResponseResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
