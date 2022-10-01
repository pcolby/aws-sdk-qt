// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTINVOKEMETHODREQUEST_H
#define QTAWS_TESTINVOKEMETHODREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class TestInvokeMethodRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT TestInvokeMethodRequest : public ApiGatewayRequest {

public:
    TestInvokeMethodRequest(const TestInvokeMethodRequest &other);
    TestInvokeMethodRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestInvokeMethodRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
