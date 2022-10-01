// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETHODRESPONSEREQUEST_H
#define QTAWS_PUTMETHODRESPONSEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class PutMethodResponseRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT PutMethodResponseRequest : public ApiGatewayRequest {

public:
    PutMethodResponseRequest(const PutMethodResponseRequest &other);
    PutMethodResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMethodResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
