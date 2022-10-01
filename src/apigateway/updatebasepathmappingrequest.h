// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBASEPATHMAPPINGREQUEST_H
#define QTAWS_UPDATEBASEPATHMAPPINGREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateBasePathMappingRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateBasePathMappingRequest : public ApiGatewayRequest {

public:
    UpdateBasePathMappingRequest(const UpdateBasePathMappingRequest &other);
    UpdateBasePathMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBasePathMappingRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
