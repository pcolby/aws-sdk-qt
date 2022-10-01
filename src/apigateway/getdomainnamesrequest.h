// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINNAMESREQUEST_H
#define QTAWS_GETDOMAINNAMESREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDomainNamesRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetDomainNamesRequest : public ApiGatewayRequest {

public:
    GetDomainNamesRequest(const GetDomainNamesRequest &other);
    GetDomainNamesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainNamesRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
