// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESTAPISREQUEST_H
#define QTAWS_GETRESTAPISREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetRestApisRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetRestApisRequest : public ApiGatewayRequest {

public:
    GetRestApisRequest(const GetRestApisRequest &other);
    GetRestApisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRestApisRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
