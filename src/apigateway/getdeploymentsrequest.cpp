/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
