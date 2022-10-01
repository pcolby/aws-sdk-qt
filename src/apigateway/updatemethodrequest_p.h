// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMETHODREQUEST_P_H
#define QTAWS_UPDATEMETHODREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updatemethodrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateMethodRequest;

class UpdateMethodRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateMethodRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateMethodRequest * const q);
    UpdateMethodRequestPrivate(const UpdateMethodRequestPrivate &other,
                                   UpdateMethodRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMethodRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
