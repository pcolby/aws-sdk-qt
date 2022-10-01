// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINNAMEREQUEST_H
#define QTAWS_UPDATEDOMAINNAMEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateDomainNameRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateDomainNameRequest : public ApiGatewayV2Request {

public:
    UpdateDomainNameRequest(const UpdateDomainNameRequest &other);
    UpdateDomainNameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainNameRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
