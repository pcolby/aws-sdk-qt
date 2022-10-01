// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONRESPONSEREQUEST_H
#define QTAWS_DELETEINTEGRATIONRESPONSEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteIntegrationResponseRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteIntegrationResponseRequest : public ApiGatewayV2Request {

public:
    DeleteIntegrationResponseRequest(const DeleteIntegrationResponseRequest &other);
    DeleteIntegrationResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntegrationResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
