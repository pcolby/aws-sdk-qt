// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCLINKREQUEST_H
#define QTAWS_GETVPCLINKREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetVpcLinkRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetVpcLinkRequest : public ApiGatewayV2Request {

public:
    GetVpcLinkRequest(const GetVpcLinkRequest &other);
    GetVpcLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVpcLinkRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
