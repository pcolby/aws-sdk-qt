// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTEGRATIONRESPONSE_H
#define QTAWS_PUTINTEGRATIONRESPONSE_H

#include "apigatewayresponse.h"
#include "putintegrationrequest.h"

namespace QtAws {
namespace ApiGateway {

class PutIntegrationResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT PutIntegrationResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    PutIntegrationResponse(const PutIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutIntegrationResponse)
    Q_DISABLE_COPY(PutIntegrationResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
