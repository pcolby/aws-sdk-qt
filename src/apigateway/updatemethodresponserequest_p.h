// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMETHODRESPONSEREQUEST_P_H
#define QTAWS_UPDATEMETHODRESPONSEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updatemethodresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateMethodResponseRequest;

class UpdateMethodResponseRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateMethodResponseRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateMethodResponseRequest * const q);
    UpdateMethodResponseRequestPrivate(const UpdateMethodResponseRequestPrivate &other,
                                   UpdateMethodResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMethodResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
