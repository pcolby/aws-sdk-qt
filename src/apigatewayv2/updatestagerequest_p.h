// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTAGEREQUEST_P_H
#define QTAWS_UPDATESTAGEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "updatestagerequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateStageRequest;

class UpdateStageRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    UpdateStageRequestPrivate(const ApiGatewayV2Request::Action action,
                                   UpdateStageRequest * const q);
    UpdateStageRequestPrivate(const UpdateStageRequestPrivate &other,
                                   UpdateStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStageRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
