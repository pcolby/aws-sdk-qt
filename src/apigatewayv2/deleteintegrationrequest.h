// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONREQUEST_H
#define QTAWS_DELETEINTEGRATIONREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteIntegrationRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteIntegrationRequest : public ApiGatewayV2Request {

public:
    DeleteIntegrationRequest(const DeleteIntegrationRequest &other);
    DeleteIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntegrationRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
