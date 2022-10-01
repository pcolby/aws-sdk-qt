// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTATIONVERSIONREQUEST_H
#define QTAWS_UPDATEDOCUMENTATIONVERSIONREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateDocumentationVersionRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateDocumentationVersionRequest : public ApiGatewayRequest {

public:
    UpdateDocumentationVersionRequest(const UpdateDocumentationVersionRequest &other);
    UpdateDocumentationVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentationVersionRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
