// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCLINKREQUEST_H
#define QTAWS_DELETEVPCLINKREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteVpcLinkRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteVpcLinkRequest : public ApiGatewayRequest {

public:
    DeleteVpcLinkRequest(const DeleteVpcLinkRequest &other);
    DeleteVpcLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcLinkRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
