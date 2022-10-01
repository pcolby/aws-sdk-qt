// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCLINKSREQUEST_H
#define QTAWS_GETVPCLINKSREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetVpcLinksRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetVpcLinksRequest : public ApiGatewayV2Request {

public:
    GetVpcLinksRequest(const GetVpcLinksRequest &other);
    GetVpcLinksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVpcLinksRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
