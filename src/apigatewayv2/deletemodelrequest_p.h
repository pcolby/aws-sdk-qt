// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELREQUEST_P_H
#define QTAWS_DELETEMODELREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deletemodelrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteModelRequest;

class DeleteModelRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteModelRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteModelRequest * const q);
    DeleteModelRequestPrivate(const DeleteModelRequestPrivate &other,
                                   DeleteModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteModelRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
