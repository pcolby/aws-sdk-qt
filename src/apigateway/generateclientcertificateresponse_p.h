// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATECLIENTCERTIFICATERESPONSE_P_H
#define QTAWS_GENERATECLIENTCERTIFICATERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GenerateClientCertificateResponse;

class GenerateClientCertificateResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GenerateClientCertificateResponsePrivate(GenerateClientCertificateResponse * const q);

    void parseGenerateClientCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateClientCertificateResponse)
    Q_DISABLE_COPY(GenerateClientCertificateResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
