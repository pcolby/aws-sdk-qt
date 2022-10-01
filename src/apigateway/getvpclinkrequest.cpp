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

#include "getvpclinkrequest.h"
#include "getvpclinkrequest_p.h"
#include "getvpclinkresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetVpcLinkRequest
 * \brief The GetVpcLinkRequest class provides an interface for ApiGateway GetVpcLink requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getVpcLink
 */

/*!
 * Constructs a copy of \a other.
 */
GetVpcLinkRequest::GetVpcLinkRequest(const GetVpcLinkRequest &other)
    : ApiGatewayRequest(new GetVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVpcLinkRequest object.
 */
GetVpcLinkRequest::GetVpcLinkRequest()
    : ApiGatewayRequest(new GetVpcLinkRequestPrivate(ApiGatewayRequest::GetVpcLinkAction, this))
{

}

/*!
 * \reimp
 */
bool GetVpcLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVpcLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVpcLinkRequest::response(QNetworkReply * const reply) const
{
    return new GetVpcLinkResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetVpcLinkRequestPrivate
 * \brief The GetVpcLinkRequestPrivate class provides private implementation for GetVpcLinkRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetVpcLinkRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetVpcLinkRequestPrivate::GetVpcLinkRequestPrivate(
    const ApiGatewayRequest::Action action, GetVpcLinkRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVpcLinkRequest
 * class' copy constructor.
 */
GetVpcLinkRequestPrivate::GetVpcLinkRequestPrivate(
    const GetVpcLinkRequestPrivate &other, GetVpcLinkRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
