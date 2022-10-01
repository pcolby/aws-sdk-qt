// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTATIONPARTREQUEST_H
#define QTAWS_CREATEDOCUMENTATIONPARTREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateDocumentationPartRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT CreateDocumentationPartRequest : public ApiGatewayRequest {

public:
    CreateDocumentationPartRequest(const CreateDocumentationPartRequest &other);
    CreateDocumentationPartRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDocumentationPartRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
