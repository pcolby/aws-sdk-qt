// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCLINKREQUEST_H
#define QTAWS_DELETEVPCLINKREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteVpcLinkRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteVpcLinkRequest : public ApiGatewayV2Request {

public:
    DeleteVpcLinkRequest(const DeleteVpcLinkRequest &other);
    DeleteVpcLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcLinkRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
