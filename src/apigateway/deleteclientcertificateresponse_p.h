// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTCERTIFICATERESPONSE_P_H
#define QTAWS_DELETECLIENTCERTIFICATERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteClientCertificateResponse;

class DeleteClientCertificateResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteClientCertificateResponsePrivate(DeleteClientCertificateResponse * const q);

    void parseDeleteClientCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteClientCertificateResponse)
    Q_DISABLE_COPY(DeleteClientCertificateResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
