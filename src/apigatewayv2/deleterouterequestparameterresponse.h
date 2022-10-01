// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTEREQUESTPARAMETERRESPONSE_H
#define QTAWS_DELETEROUTEREQUESTPARAMETERRESPONSE_H

#include "apigatewayv2response.h"
#include "deleterouterequestparameterrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteRouteRequestParameterResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteRouteRequestParameterResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    DeleteRouteRequestParameterResponse(const DeleteRouteRequestParameterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRouteRequestParameterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRouteRequestParameterResponse)
    Q_DISABLE_COPY(DeleteRouteRequestParameterResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
