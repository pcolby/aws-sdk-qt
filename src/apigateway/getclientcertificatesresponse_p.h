// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLIENTCERTIFICATESRESPONSE_P_H
#define QTAWS_GETCLIENTCERTIFICATESRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetClientCertificatesResponse;

class GetClientCertificatesResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetClientCertificatesResponsePrivate(GetClientCertificatesResponse * const q);

    void parseGetClientCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetClientCertificatesResponse)
    Q_DISABLE_COPY(GetClientCertificatesResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
