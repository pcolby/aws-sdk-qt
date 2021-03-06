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
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetUsagePlanKeysRequest
 * \brief The GetUsagePlanKeysRequest class provides an interface for APIGateway GetUsagePlanKeys requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getUsagePlanKeys
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsagePlanKeysRequest::GetUsagePlanKeysRequest(const GetUsagePlanKeysRequest &other)
    : APIGatewayRequest(new GetUsagePlanKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsagePlanKeysRequest object.
 */
GetUsagePlanKeysRequest::GetUsagePlanKeysRequest()
    : APIGatewayRequest(new GetUsagePlanKeysRequestPrivate(APIGatewayRequest::GetUsagePlanKeysAction, this))
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
 * \class QtAws::APIGateway::GetUsagePlanKeysRequestPrivate
 * \brief The GetUsagePlanKeysRequestPrivate class provides private implementation for GetUsagePlanKeysRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetUsagePlanKeysRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetUsagePlanKeysRequestPrivate::GetUsagePlanKeysRequestPrivate(
    const APIGatewayRequest::Action action, GetUsagePlanKeysRequest * const q)
    : APIGatewayRequestPrivate(action, q)
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
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
