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

#include "getauthorizerrequest.h"
#include "getauthorizerrequest_p.h"
#include "getauthorizerresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetAuthorizerRequest
 * \brief The GetAuthorizerRequest class provides an interface for ApiGateway GetAuthorizer requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getAuthorizer
 */

/*!
 * Constructs a copy of \a other.
 */
GetAuthorizerRequest::GetAuthorizerRequest(const GetAuthorizerRequest &other)
    : ApiGatewayRequest(new GetAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAuthorizerRequest object.
 */
GetAuthorizerRequest::GetAuthorizerRequest()
    : ApiGatewayRequest(new GetAuthorizerRequestPrivate(ApiGatewayRequest::GetAuthorizerAction, this))
{

}

/*!
 * \reimp
 */
bool GetAuthorizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAuthorizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new GetAuthorizerResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetAuthorizerRequestPrivate
 * \brief The GetAuthorizerRequestPrivate class provides private implementation for GetAuthorizerRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetAuthorizerRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetAuthorizerRequestPrivate::GetAuthorizerRequestPrivate(
    const ApiGatewayRequest::Action action, GetAuthorizerRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAuthorizerRequest
 * class' copy constructor.
 */
GetAuthorizerRequestPrivate::GetAuthorizerRequestPrivate(
    const GetAuthorizerRequestPrivate &other, GetAuthorizerRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
