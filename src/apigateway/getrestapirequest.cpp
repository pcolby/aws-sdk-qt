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

#include "getrestapirequest.h"
#include "getrestapirequest_p.h"
#include "getrestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetRestApiRequest
 * \brief The GetRestApiRequest class provides an interface for ApiGateway GetRestApi requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getRestApi
 */

/*!
 * Constructs a copy of \a other.
 */
GetRestApiRequest::GetRestApiRequest(const GetRestApiRequest &other)
    : ApiGatewayRequest(new GetRestApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRestApiRequest object.
 */
GetRestApiRequest::GetRestApiRequest()
    : ApiGatewayRequest(new GetRestApiRequestPrivate(ApiGatewayRequest::GetRestApiAction, this))
{

}

/*!
 * \reimp
 */
bool GetRestApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRestApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRestApiRequest::response(QNetworkReply * const reply) const
{
    return new GetRestApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetRestApiRequestPrivate
 * \brief The GetRestApiRequestPrivate class provides private implementation for GetRestApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetRestApiRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetRestApiRequestPrivate::GetRestApiRequestPrivate(
    const ApiGatewayRequest::Action action, GetRestApiRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRestApiRequest
 * class' copy constructor.
 */
GetRestApiRequestPrivate::GetRestApiRequestPrivate(
    const GetRestApiRequestPrivate &other, GetRestApiRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
