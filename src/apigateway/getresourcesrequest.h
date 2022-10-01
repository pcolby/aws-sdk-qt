// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESREQUEST_H
#define QTAWS_GETRESOURCESREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetResourcesRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetResourcesRequest : public ApiGatewayRequest {

public:
    GetResourcesRequest(const GetResourcesRequest &other);
    GetResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourcesRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
