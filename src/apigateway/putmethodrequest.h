// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETHODREQUEST_H
#define QTAWS_PUTMETHODREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class PutMethodRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT PutMethodRequest : public ApiGatewayRequest {

public:
    PutMethodRequest(const PutMethodRequest &other);
    PutMethodRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMethodRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
