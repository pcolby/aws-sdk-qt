// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTEGRATIONRESPONSEREQUEST_P_H
#define QTAWS_PUTINTEGRATIONRESPONSEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "putintegrationresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class PutIntegrationResponseRequest;

class PutIntegrationResponseRequestPrivate : public ApiGatewayRequestPrivate {

public:
    PutIntegrationResponseRequestPrivate(const ApiGatewayRequest::Action action,
                                   PutIntegrationResponseRequest * const q);
    PutIntegrationResponseRequestPrivate(const PutIntegrationResponseRequestPrivate &other,
                                   PutIntegrationResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutIntegrationResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
