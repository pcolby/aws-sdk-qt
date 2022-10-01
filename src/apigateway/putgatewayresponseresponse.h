// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGATEWAYRESPONSERESPONSE_H
#define QTAWS_PUTGATEWAYRESPONSERESPONSE_H

#include "apigatewayresponse.h"
#include "putgatewayresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class PutGatewayResponseResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT PutGatewayResponseResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    PutGatewayResponseResponse(const PutGatewayResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutGatewayResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutGatewayResponseResponse)
    Q_DISABLE_COPY(PutGatewayResponseResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
