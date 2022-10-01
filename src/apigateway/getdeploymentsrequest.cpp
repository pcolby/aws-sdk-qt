// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeploymentsrequest.h"
#include "getdeploymentsrequest_p.h"
#include "getdeploymentsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDeploymentsRequest
 * \brief The GetDeploymentsRequest class provides an interface for ApiGateway GetDeployments requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDeployments
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeploymentsRequest::GetDeploymentsRequest(const GetDeploymentsRequest &other)
    : ApiGatewayRequest(new GetDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeploymentsRequest object.
 */
GetDeploymentsRequest::GetDeploymentsRequest()
    : ApiGatewayRequest(new GetDeploymentsRequestPrivate(ApiGatewayRequest::GetDeploymentsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeploymentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeploymentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetDeploymentsRequestPrivate
 * \brief The GetDeploymentsRequestPrivate class provides private implementation for GetDeploymentsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDeploymentsRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetDeploymentsRequestPrivate::GetDeploymentsRequestPrivate(
    const ApiGatewayRequest::Action action, GetDeploymentsRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentsRequest
 * class' copy constructor.
 */
GetDeploymentsRequestPrivate::GetDeploymentsRequestPrivate(
    const GetDeploymentsRequestPrivate &other, GetDeploymentsRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
