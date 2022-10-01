// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTREQUEST_H
#define QTAWS_GETACCOUNTREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetAccountRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetAccountRequest : public ApiGatewayRequest {

public:
    GetAccountRequest(const GetAccountRequest &other);
    GetAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
