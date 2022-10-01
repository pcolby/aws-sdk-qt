// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEREQUEST_H
#define QTAWS_GETRESOURCEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetResourceRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetResourceRequest : public ApiGatewayRequest {

public:
    GetResourceRequest(const GetResourceRequest &other);
    GetResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
