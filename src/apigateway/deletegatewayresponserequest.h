// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYRESPONSEREQUEST_H
#define QTAWS_DELETEGATEWAYRESPONSEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteGatewayResponseRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteGatewayResponseRequest : public ApiGatewayRequest {

public:
    DeleteGatewayResponseRequest(const DeleteGatewayResponseRequest &other);
    DeleteGatewayResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGatewayResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
