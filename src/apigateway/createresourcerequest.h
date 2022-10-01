// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEREQUEST_H
#define QTAWS_CREATERESOURCEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateResourceRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT CreateResourceRequest : public ApiGatewayRequest {

public:
    CreateResourceRequest(const CreateResourceRequest &other);
    CreateResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
