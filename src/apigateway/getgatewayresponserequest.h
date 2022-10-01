// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYRESPONSEREQUEST_H
#define QTAWS_GETGATEWAYRESPONSEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetGatewayResponseRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetGatewayResponseRequest : public ApiGatewayRequest {

public:
    GetGatewayResponseRequest(const GetGatewayResponseRequest &other);
    GetGatewayResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGatewayResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
