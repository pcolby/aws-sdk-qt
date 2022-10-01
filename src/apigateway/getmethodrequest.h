// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETHODREQUEST_H
#define QTAWS_GETMETHODREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetMethodRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetMethodRequest : public ApiGatewayRequest {

public:
    GetMethodRequest(const GetMethodRequest &other);
    GetMethodRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMethodRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
