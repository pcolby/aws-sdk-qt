// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELTEMPLATEREQUEST_P_H
#define QTAWS_GETMODELTEMPLATEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getmodeltemplaterequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetModelTemplateRequest;

class GetModelTemplateRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetModelTemplateRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetModelTemplateRequest * const q);
    GetModelTemplateRequestPrivate(const GetModelTemplateRequestPrivate &other,
                                   GetModelTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetModelTemplateRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
