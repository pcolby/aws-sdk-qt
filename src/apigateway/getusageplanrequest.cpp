/*
    Copyright 2013-2019 Paul Colby

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

#include "getusageplanrequest.h"
#include "getusageplanrequest_p.h"
#include "getusageplanresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetUsagePlanRequest
 * \brief The GetUsagePlanRequest class provides an interface for APIGateway GetUsagePlan requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getUsagePlan
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsagePlanRequest::GetUsagePlanRequest(const GetUsagePlanRequest &other)
    : APIGatewayRequest(new GetUsagePlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsagePlanRequest object.
 */
GetUsagePlanRequest::GetUsagePlanRequest()
    : APIGatewayRequest(new GetUsagePlanRequestPrivate(APIGatewayRequest::GetUsagePlanAction, this))
{

}

/*!
 * \reimp
 */
bool GetUsagePlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUsagePlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUsagePlanRequest::response(QNetworkReply * const reply) const
{
    return new GetUsagePlanResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetUsagePlanRequestPrivate
 * \brief The GetUsagePlanRequestPrivate class provides private implementation for GetUsagePlanRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetUsagePlanRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetUsagePlanRequestPrivate::GetUsagePlanRequestPrivate(
    const APIGatewayRequest::Action action, GetUsagePlanRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUsagePlanRequest
 * class' copy constructor.
 */
GetUsagePlanRequestPrivate::GetUsagePlanRequestPrivate(
    const GetUsagePlanRequestPrivate &other, GetUsagePlanRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
