// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYRESPONSEREQUEST_P_H
#define QTAWS_DELETEGATEWAYRESPONSEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deletegatewayresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteGatewayResponseRequest;

class DeleteGatewayResponseRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteGatewayResponseRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteGatewayResponseRequest * const q);
    DeleteGatewayResponseRequestPrivate(const DeleteGatewayResponseRequestPrivate &other,
                                   DeleteGatewayResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGatewayResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
