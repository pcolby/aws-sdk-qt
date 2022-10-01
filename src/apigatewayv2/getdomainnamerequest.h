// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINNAMEREQUEST_H
#define QTAWS_GETDOMAINNAMEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetDomainNameRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetDomainNameRequest : public ApiGatewayV2Request {

public:
    GetDomainNameRequest(const GetDomainNameRequest &other);
    GetDomainNameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainNameRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
