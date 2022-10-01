// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVPCLINKREQUEST_H
#define QTAWS_UPDATEVPCLINKREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateVpcLinkRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateVpcLinkRequest : public ApiGatewayV2Request {

public:
    UpdateVpcLinkRequest(const UpdateVpcLinkRequest &other);
    UpdateVpcLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVpcLinkRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
