// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLIENTCERTIFICATERESPONSE_H
#define QTAWS_GETCLIENTCERTIFICATERESPONSE_H

#include "apigatewayresponse.h"
#include "getclientcertificaterequest.h"

namespace QtAws {
namespace ApiGateway {

class GetClientCertificateResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetClientCertificateResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetClientCertificateResponse(const GetClientCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetClientCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetClientCertificateResponse)
    Q_DISABLE_COPY(GetClientCertificateResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
