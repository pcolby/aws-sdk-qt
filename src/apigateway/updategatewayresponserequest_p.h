// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYRESPONSEREQUEST_P_H
#define QTAWS_UPDATEGATEWAYRESPONSEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updategatewayresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateGatewayResponseRequest;

class UpdateGatewayResponseRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateGatewayResponseRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateGatewayResponseRequest * const q);
    UpdateGatewayResponseRequestPrivate(const UpdateGatewayResponseRequestPrivate &other,
                                   UpdateGatewayResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
