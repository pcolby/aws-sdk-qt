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

#include "getusageplankeysrequest.h"
#include "getusageplankeysrequest_p.h"
#include "getusageplankeysresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetUsagePlanKeysRequest
 * \brief The GetUsagePlanKeysRequest class provides an interface for ApiGateway GetUsagePlanKeys requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getUsagePlanKeys
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsagePlanKeysRequest::GetUsagePlanKeysRequest(const GetUsagePlanKeysRequest &other)
    : ApiGatewayRequest(new GetUsagePlanKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsagePlanKeysRequest object.
 */
GetUsagePlanKeysRequest::GetUsagePlanKeysRequest()
    : ApiGatewayRequest(new GetUsagePlanKeysRequestPrivate(ApiGatewayRequest::GetUsagePlanKeysAction, this))
{

}

/*!
 * \reimp
 */
bool GetUsagePlanKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUsagePlanKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUsagePlanKeysRequest::response(QNetworkReply * const reply) const
{
    return new GetUsagePlanKeysResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetUsagePlanKeysRequestPrivate
 * \brief The GetUsagePlanKeysRequestPrivate class provides private implementation for GetUsagePlanKeysRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetUsagePlanKeysRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetUsagePlanKeysRequestPrivate::GetUsagePlanKeysRequestPrivate(
    const ApiGatewayRequest::Action action, GetUsagePlanKeysRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUsagePlanKeysRequest
 * class' copy constructor.
 */
GetUsagePlanKeysRequestPrivate::GetUsagePlanKeysRequestPrivate(
    const GetUsagePlanKeysRequestPrivate &other, GetUsagePlanKeysRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
