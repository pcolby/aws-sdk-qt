// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTCERTIFICATEREQUEST_P_H
#define QTAWS_DELETECLIENTCERTIFICATEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deleteclientcertificaterequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteClientCertificateRequest;

class DeleteClientCertificateRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteClientCertificateRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteClientCertificateRequest * const q);
    DeleteClientCertificateRequestPrivate(const DeleteClientCertificateRequestPrivate &other,
                                   DeleteClientCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteClientCertificateRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
