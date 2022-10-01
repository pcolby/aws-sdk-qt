// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATECLIENTCERTIFICATERESPONSE_H
#define QTAWS_GENERATECLIENTCERTIFICATERESPONSE_H

#include "apigatewayresponse.h"
#include "generateclientcertificaterequest.h"

namespace QtAws {
namespace ApiGateway {

class GenerateClientCertificateResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GenerateClientCertificateResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GenerateClientCertificateResponse(const GenerateClientCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateClientCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateClientCertificateResponse)
    Q_DISABLE_COPY(GenerateClientCertificateResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
