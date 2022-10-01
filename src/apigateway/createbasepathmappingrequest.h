// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBASEPATHMAPPINGREQUEST_H
#define QTAWS_CREATEBASEPATHMAPPINGREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateBasePathMappingRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT CreateBasePathMappingRequest : public ApiGatewayRequest {

public:
    CreateBasePathMappingRequest(const CreateBasePathMappingRequest &other);
    CreateBasePathMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBasePathMappingRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
