// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESTAPIREQUEST_P_H
#define QTAWS_CREATERESTAPIREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "createrestapirequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateRestApiRequest;

class CreateRestApiRequestPrivate : public ApiGatewayRequestPrivate {

public:
    CreateRestApiRequestPrivate(const ApiGatewayRequest::Action action,
                                   CreateRestApiRequest * const q);
    CreateRestApiRequestPrivate(const CreateRestApiRequestPrivate &other,
                                   CreateRestApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRestApiRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
