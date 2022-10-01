// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONPARTSREQUEST_P_H
#define QTAWS_GETDOCUMENTATIONPARTSREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getdocumentationpartsrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationPartsRequest;

class GetDocumentationPartsRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetDocumentationPartsRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetDocumentationPartsRequest * const q);
    GetDocumentationPartsRequestPrivate(const GetDocumentationPartsRequestPrivate &other,
                                   GetDocumentationPartsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDocumentationPartsRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
