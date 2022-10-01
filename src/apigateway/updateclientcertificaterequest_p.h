// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLIENTCERTIFICATEREQUEST_P_H
#define QTAWS_UPDATECLIENTCERTIFICATEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updateclientcertificaterequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateClientCertificateRequest;

class UpdateClientCertificateRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateClientCertificateRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateClientCertificateRequest * const q);
    UpdateClientCertificateRequestPrivate(const UpdateClientCertificateRequestPrivate &other,
                                   UpdateClientCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateClientCertificateRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
