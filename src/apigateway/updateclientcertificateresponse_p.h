// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLIENTCERTIFICATERESPONSE_P_H
#define QTAWS_UPDATECLIENTCERTIFICATERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateClientCertificateResponse;

class UpdateClientCertificateResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateClientCertificateResponsePrivate(UpdateClientCertificateResponse * const q);

    void parseUpdateClientCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateClientCertificateResponse)
    Q_DISABLE_COPY(UpdateClientCertificateResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
