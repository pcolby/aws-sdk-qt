// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testinvokeauthorizerrequest.h"
#include "testinvokeauthorizerrequest_p.h"
#include "testinvokeauthorizerresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::TestInvokeAuthorizerRequest
 * \brief The TestInvokeAuthorizerRequest class provides an interface for ApiGateway TestInvokeAuthorizer requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::testInvokeAuthorizer
 */

/*!
 * Constructs a copy of \a other.
 */
TestInvokeAuthorizerRequest::TestInvokeAuthorizerRequest(const TestInvokeAuthorizerRequest &other)
    : ApiGatewayRequest(new TestInvokeAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestInvokeAuthorizerRequest object.
 */
TestInvokeAuthorizerRequest::TestInvokeAuthorizerRequest()
    : ApiGatewayRequest(new TestInvokeAuthorizerRequestPrivate(ApiGatewayRequest::TestInvokeAuthorizerAction, this))
{

}

/*!
 * \reimp
 */
bool TestInvokeAuthorizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestInvokeAuthorizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestInvokeAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new TestInvokeAuthorizerResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::TestInvokeAuthorizerRequestPrivate
 * \brief The TestInvokeAuthorizerRequestPrivate class provides private implementation for TestInvokeAuthorizerRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a TestInvokeAuthorizerRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
TestInvokeAuthorizerRequestPrivate::TestInvokeAuthorizerRequestPrivate(
    const ApiGatewayRequest::Action action, TestInvokeAuthorizerRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestInvokeAuthorizerRequest
 * class' copy constructor.
 */
TestInvokeAuthorizerRequestPrivate::TestInvokeAuthorizerRequestPrivate(
    const TestInvokeAuthorizerRequestPrivate &other, TestInvokeAuthorizerRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
