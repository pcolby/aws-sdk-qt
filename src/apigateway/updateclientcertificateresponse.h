// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLIENTCERTIFICATERESPONSE_H
#define QTAWS_UPDATECLIENTCERTIFICATERESPONSE_H

#include "apigatewayresponse.h"
#include "updateclientcertificaterequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateClientCertificateResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateClientCertificateResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateClientCertificateResponse(const UpdateClientCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateClientCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClientCertificateResponse)
    Q_DISABLE_COPY(UpdateClientCertificateResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
