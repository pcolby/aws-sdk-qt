// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLIENTCERTIFICATESREQUEST_P_H
#define QTAWS_GETCLIENTCERTIFICATESREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getclientcertificatesrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetClientCertificatesRequest;

class GetClientCertificatesRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetClientCertificatesRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetClientCertificatesRequest * const q);
    GetClientCertificatesRequestPrivate(const GetClientCertificatesRequestPrivate &other,
                                   GetClientCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetClientCertificatesRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
