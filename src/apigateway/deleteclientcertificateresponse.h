// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTCERTIFICATERESPONSE_H
#define QTAWS_DELETECLIENTCERTIFICATERESPONSE_H

#include "apigatewayresponse.h"
#include "deleteclientcertificaterequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteClientCertificateResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteClientCertificateResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    DeleteClientCertificateResponse(const DeleteClientCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteClientCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClientCertificateResponse)
    Q_DISABLE_COPY(DeleteClientCertificateResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
