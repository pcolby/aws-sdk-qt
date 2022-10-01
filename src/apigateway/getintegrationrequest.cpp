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

#include "getintegrationrequest.h"
#include "getintegrationrequest_p.h"
#include "getintegrationresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetIntegrationRequest
 * \brief The GetIntegrationRequest class provides an interface for ApiGateway GetIntegration requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntegrationRequest::GetIntegrationRequest(const GetIntegrationRequest &other)
    : ApiGatewayRequest(new GetIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntegrationRequest object.
 */
GetIntegrationRequest::GetIntegrationRequest()
    : ApiGatewayRequest(new GetIntegrationRequestPrivate(ApiGatewayRequest::GetIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new GetIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetIntegrationRequestPrivate
 * \brief The GetIntegrationRequestPrivate class provides private implementation for GetIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetIntegrationRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetIntegrationRequestPrivate::GetIntegrationRequestPrivate(
    const ApiGatewayRequest::Action action, GetIntegrationRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntegrationRequest
 * class' copy constructor.
 */
GetIntegrationRequestPrivate::GetIntegrationRequestPrivate(
    const GetIntegrationRequestPrivate &other, GetIntegrationRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
