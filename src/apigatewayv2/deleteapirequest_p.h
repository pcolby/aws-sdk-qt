// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIREQUEST_P_H
#define QTAWS_DELETEAPIREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deleteapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteApiRequest;

class DeleteApiRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteApiRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteApiRequest * const q);
    DeleteApiRequestPrivate(const DeleteApiRequestPrivate &other,
                                   DeleteApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
