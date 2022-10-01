// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATECLIENTCERTIFICATEREQUEST_P_H
#define QTAWS_GENERATECLIENTCERTIFICATEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "generateclientcertificaterequest.h"

namespace QtAws {
namespace ApiGateway {

class GenerateClientCertificateRequest;

class GenerateClientCertificateRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GenerateClientCertificateRequestPrivate(const ApiGatewayRequest::Action action,
                                   GenerateClientCertificateRequest * const q);
    GenerateClientCertificateRequestPrivate(const GenerateClientCertificateRequestPrivate &other,
                                   GenerateClientCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateClientCertificateRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
