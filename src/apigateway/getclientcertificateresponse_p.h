// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLIENTCERTIFICATERESPONSE_P_H
#define QTAWS_GETCLIENTCERTIFICATERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetClientCertificateResponse;

class GetClientCertificateResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetClientCertificateResponsePrivate(GetClientCertificateResponse * const q);

    void parseGetClientCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetClientCertificateResponse)
    Q_DISABLE_COPY(GetClientCertificateResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
