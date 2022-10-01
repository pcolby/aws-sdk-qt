// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBASEPATHMAPPINGSREQUEST_H
#define QTAWS_GETBASEPATHMAPPINGSREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetBasePathMappingsRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetBasePathMappingsRequest : public ApiGatewayRequest {

public:
    GetBasePathMappingsRequest(const GetBasePathMappingsRequest &other);
    GetBasePathMappingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBasePathMappingsRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
