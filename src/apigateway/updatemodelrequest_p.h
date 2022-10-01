// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELREQUEST_P_H
#define QTAWS_UPDATEMODELREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updatemodelrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateModelRequest;

class UpdateModelRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateModelRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateModelRequest * const q);
    UpdateModelRequestPrivate(const UpdateModelRequestPrivate &other,
                                   UpdateModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateModelRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
