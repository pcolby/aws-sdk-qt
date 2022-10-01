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

#include "getdeploymentrequest.h"
#include "getdeploymentrequest_p.h"
#include "getdeploymentresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDeploymentRequest
 * \brief The GetDeploymentRequest class provides an interface for ApiGateway GetDeployment requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeploymentRequest::GetDeploymentRequest(const GetDeploymentRequest &other)
    : ApiGatewayRequest(new GetDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeploymentRequest object.
 */
GetDeploymentRequest::GetDeploymentRequest()
    : ApiGatewayRequest(new GetDeploymentRequestPrivate(ApiGatewayRequest::GetDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetDeploymentRequestPrivate
 * \brief The GetDeploymentRequestPrivate class provides private implementation for GetDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDeploymentRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetDeploymentRequestPrivate::GetDeploymentRequestPrivate(
    const ApiGatewayRequest::Action action, GetDeploymentRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentRequest
 * class' copy constructor.
 */
GetDeploymentRequestPrivate::GetDeploymentRequestPrivate(
    const GetDeploymentRequestPrivate &other, GetDeploymentRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
