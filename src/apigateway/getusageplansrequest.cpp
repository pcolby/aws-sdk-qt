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

#include "getusageplansrequest.h"
#include "getusageplansrequest_p.h"
#include "getusageplansresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetUsagePlansRequest
 * \brief The GetUsagePlansRequest class provides an interface for ApiGateway GetUsagePlans requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getUsagePlans
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsagePlansRequest::GetUsagePlansRequest(const GetUsagePlansRequest &other)
    : ApiGatewayRequest(new GetUsagePlansRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsagePlansRequest object.
 */
GetUsagePlansRequest::GetUsagePlansRequest()
    : ApiGatewayRequest(new GetUsagePlansRequestPrivate(ApiGatewayRequest::GetUsagePlansAction, this))
{

}

/*!
 * \reimp
 */
bool GetUsagePlansRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUsagePlansResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUsagePlansRequest::response(QNetworkReply * const reply) const
{
    return new GetUsagePlansResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetUsagePlansRequestPrivate
 * \brief The GetUsagePlansRequestPrivate class provides private implementation for GetUsagePlansRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetUsagePlansRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetUsagePlansRequestPrivate::GetUsagePlansRequestPrivate(
    const ApiGatewayRequest::Action action, GetUsagePlansRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUsagePlansRequest
 * class' copy constructor.
 */
GetUsagePlansRequestPrivate::GetUsagePlansRequestPrivate(
    const GetUsagePlansRequestPrivate &other, GetUsagePlansRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
