// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLIENTCERTIFICATESRESPONSE_H
#define QTAWS_GETCLIENTCERTIFICATESRESPONSE_H

#include "apigatewayresponse.h"
#include "getclientcertificatesrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetClientCertificatesResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetClientCertificatesResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetClientCertificatesResponse(const GetClientCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetClientCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetClientCertificatesResponse)
    Q_DISABLE_COPY(GetClientCertificatesResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
