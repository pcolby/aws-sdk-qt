// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEREQUEST_P_H
#define QTAWS_CREATERESOURCEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "createresourcerequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateResourceRequest;

class CreateResourceRequestPrivate : public ApiGatewayRequestPrivate {

public:
    CreateResourceRequestPrivate(const ApiGatewayRequest::Action action,
                                   CreateResourceRequest * const q);
    CreateResourceRequestPrivate(const CreateResourceRequestPrivate &other,
                                   CreateResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResourceRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
