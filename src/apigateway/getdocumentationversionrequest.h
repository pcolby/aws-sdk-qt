// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONVERSIONREQUEST_H
#define QTAWS_GETDOCUMENTATIONVERSIONREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationVersionRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetDocumentationVersionRequest : public ApiGatewayRequest {

public:
    GetDocumentationVersionRequest(const GetDocumentationVersionRequest &other);
    GetDocumentationVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentationVersionRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
