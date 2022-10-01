// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYRESPONSEREQUEST_H
#define QTAWS_UPDATEGATEWAYRESPONSEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateGatewayResponseRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateGatewayResponseRequest : public ApiGatewayRequest {

public:
    UpdateGatewayResponseRequest(const UpdateGatewayResponseRequest &other);
    UpdateGatewayResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewayResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
