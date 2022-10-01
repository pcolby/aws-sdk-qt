// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYRESPONSERESPONSE_H
#define QTAWS_GETGATEWAYRESPONSERESPONSE_H

#include "apigatewayresponse.h"
#include "getgatewayresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class GetGatewayResponseResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetGatewayResponseResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetGatewayResponseResponse(const GetGatewayResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGatewayResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGatewayResponseResponse)
    Q_DISABLE_COPY(GetGatewayResponseResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
