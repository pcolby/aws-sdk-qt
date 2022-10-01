// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTINVOKEMETHODREQUEST_P_H
#define QTAWS_TESTINVOKEMETHODREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "testinvokemethodrequest.h"

namespace QtAws {
namespace ApiGateway {

class TestInvokeMethodRequest;

class TestInvokeMethodRequestPrivate : public ApiGatewayRequestPrivate {

public:
    TestInvokeMethodRequestPrivate(const ApiGatewayRequest::Action action,
                                   TestInvokeMethodRequest * const q);
    TestInvokeMethodRequestPrivate(const TestInvokeMethodRequestPrivate &other,
                                   TestInvokeMethodRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestInvokeMethodRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
