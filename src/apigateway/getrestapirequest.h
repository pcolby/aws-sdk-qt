// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESTAPIREQUEST_H
#define QTAWS_GETRESTAPIREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetRestApiRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetRestApiRequest : public ApiGatewayRequest {

public:
    GetRestApiRequest(const GetRestApiRequest &other);
    GetRestApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRestApiRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
