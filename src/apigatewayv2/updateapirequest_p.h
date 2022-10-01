// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIREQUEST_P_H
#define QTAWS_UPDATEAPIREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "updateapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateApiRequest;

class UpdateApiRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    UpdateApiRequestPrivate(const ApiGatewayV2Request::Action action,
                                   UpdateApiRequest * const q);
    UpdateApiRequestPrivate(const UpdateApiRequestPrivate &other,
                                   UpdateApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
