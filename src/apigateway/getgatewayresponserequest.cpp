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

#include "getgatewayresponserequest.h"
#include "getgatewayresponserequest_p.h"
#include "getgatewayresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetGatewayResponseRequest
 * \brief The GetGatewayResponseRequest class provides an interface for ApiGateway GetGatewayResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getGatewayResponse
 */

/*!
 * Constructs a copy of \a other.
 */
GetGatewayResponseRequest::GetGatewayResponseRequest(const GetGatewayResponseRequest &other)
    : ApiGatewayRequest(new GetGatewayResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGatewayResponseRequest object.
 */
GetGatewayResponseRequest::GetGatewayResponseRequest()
    : ApiGatewayRequest(new GetGatewayResponseRequestPrivate(ApiGatewayRequest::GetGatewayResponseAction, this))
{

}

/*!
 * \reimp
 */
bool GetGatewayResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGatewayResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGatewayResponseRequest::response(QNetworkReply * const reply) const
{
    return new GetGatewayResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetGatewayResponseRequestPrivate
 * \brief The GetGatewayResponseRequestPrivate class provides private implementation for GetGatewayResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetGatewayResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetGatewayResponseRequestPrivate::GetGatewayResponseRequestPrivate(
    const ApiGatewayRequest::Action action, GetGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGatewayResponseRequest
 * class' copy constructor.
 */
GetGatewayResponseRequestPrivate::GetGatewayResponseRequestPrivate(
    const GetGatewayResponseRequestPrivate &other, GetGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
