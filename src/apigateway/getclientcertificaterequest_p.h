// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLIENTCERTIFICATEREQUEST_P_H
#define QTAWS_GETCLIENTCERTIFICATEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getclientcertificaterequest.h"

namespace QtAws {
namespace ApiGateway {

class GetClientCertificateRequest;

class GetClientCertificateRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetClientCertificateRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetClientCertificateRequest * const q);
    GetClientCertificateRequestPrivate(const GetClientCertificateRequestPrivate &other,
                                   GetClientCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetClientCertificateRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
