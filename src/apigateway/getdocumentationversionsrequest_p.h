// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONVERSIONSREQUEST_P_H
#define QTAWS_GETDOCUMENTATIONVERSIONSREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getdocumentationversionsrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationVersionsRequest;

class GetDocumentationVersionsRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetDocumentationVersionsRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetDocumentationVersionsRequest * const q);
    GetDocumentationVersionsRequestPrivate(const GetDocumentationVersionsRequestPrivate &other,
                                   GetDocumentationVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDocumentationVersionsRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
