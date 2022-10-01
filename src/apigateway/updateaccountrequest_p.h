// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTREQUEST_P_H
#define QTAWS_UPDATEACCOUNTREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updateaccountrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateAccountRequest;

class UpdateAccountRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateAccountRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateAccountRequest * const q);
    UpdateAccountRequestPrivate(const UpdateAccountRequestPrivate &other,
                                   UpdateAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAccountRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
