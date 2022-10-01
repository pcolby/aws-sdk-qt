// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONVERSIONREQUEST_P_H
#define QTAWS_GETDOCUMENTATIONVERSIONREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getdocumentationversionrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationVersionRequest;

class GetDocumentationVersionRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetDocumentationVersionRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetDocumentationVersionRequest * const q);
    GetDocumentationVersionRequestPrivate(const GetDocumentationVersionRequestPrivate &other,
                                   GetDocumentationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDocumentationVersionRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
