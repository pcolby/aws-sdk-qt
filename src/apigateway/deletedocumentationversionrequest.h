// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTATIONVERSIONREQUEST_H
#define QTAWS_DELETEDOCUMENTATIONVERSIONREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteDocumentationVersionRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteDocumentationVersionRequest : public ApiGatewayRequest {

public:
    DeleteDocumentationVersionRequest(const DeleteDocumentationVersionRequest &other);
    DeleteDocumentationVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDocumentationVersionRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
