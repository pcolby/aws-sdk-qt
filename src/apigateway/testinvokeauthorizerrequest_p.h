// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTINVOKEAUTHORIZERREQUEST_P_H
#define QTAWS_TESTINVOKEAUTHORIZERREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "testinvokeauthorizerrequest.h"

namespace QtAws {
namespace ApiGateway {

class TestInvokeAuthorizerRequest;

class TestInvokeAuthorizerRequestPrivate : public ApiGatewayRequestPrivate {

public:
    TestInvokeAuthorizerRequestPrivate(const ApiGatewayRequest::Action action,
                                   TestInvokeAuthorizerRequest * const q);
    TestInvokeAuthorizerRequestPrivate(const TestInvokeAuthorizerRequestPrivate &other,
                                   TestInvokeAuthorizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestInvokeAuthorizerRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
