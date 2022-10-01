// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTEGRATIONREQUEST_P_H
#define QTAWS_PUTINTEGRATIONREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "putintegrationrequest.h"

namespace QtAws {
namespace ApiGateway {

class PutIntegrationRequest;

class PutIntegrationRequestPrivate : public ApiGatewayRequestPrivate {

public:
    PutIntegrationRequestPrivate(const ApiGatewayRequest::Action action,
                                   PutIntegrationRequest * const q);
    PutIntegrationRequestPrivate(const PutIntegrationRequestPrivate &other,
                                   PutIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutIntegrationRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
