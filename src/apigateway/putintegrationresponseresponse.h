// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTEGRATIONRESPONSERESPONSE_H
#define QTAWS_PUTINTEGRATIONRESPONSERESPONSE_H

#include "apigatewayresponse.h"
#include "putintegrationresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class PutIntegrationResponseResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT PutIntegrationResponseResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    PutIntegrationResponseResponse(const PutIntegrationResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutIntegrationResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutIntegrationResponseResponse)
    Q_DISABLE_COPY(PutIntegrationResponseResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
