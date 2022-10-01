// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONPARTREQUEST_P_H
#define QTAWS_GETDOCUMENTATIONPARTREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getdocumentationpartrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationPartRequest;

class GetDocumentationPartRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetDocumentationPartRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetDocumentationPartRequest * const q);
    GetDocumentationPartRequestPrivate(const GetDocumentationPartRequestPrivate &other,
                                   GetDocumentationPartRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDocumentationPartRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
