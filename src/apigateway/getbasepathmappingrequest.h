// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBASEPATHMAPPINGREQUEST_H
#define QTAWS_GETBASEPATHMAPPINGREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetBasePathMappingRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetBasePathMappingRequest : public ApiGatewayRequest {

public:
    GetBasePathMappingRequest(const GetBasePathMappingRequest &other);
    GetBasePathMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBasePathMappingRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
