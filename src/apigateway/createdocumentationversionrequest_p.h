// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTATIONVERSIONREQUEST_P_H
#define QTAWS_CREATEDOCUMENTATIONVERSIONREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "createdocumentationversionrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateDocumentationVersionRequest;

class CreateDocumentationVersionRequestPrivate : public ApiGatewayRequestPrivate {

public:
    CreateDocumentationVersionRequestPrivate(const ApiGatewayRequest::Action action,
                                   CreateDocumentationVersionRequest * const q);
    CreateDocumentationVersionRequestPrivate(const CreateDocumentationVersionRequestPrivate &other,
                                   CreateDocumentationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDocumentationVersionRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
