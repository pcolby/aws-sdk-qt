// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTATIONPARTREQUEST_H
#define QTAWS_DELETEDOCUMENTATIONPARTREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteDocumentationPartRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteDocumentationPartRequest : public ApiGatewayRequest {

public:
    DeleteDocumentationPartRequest(const DeleteDocumentationPartRequest &other);
    DeleteDocumentationPartRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDocumentationPartRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
