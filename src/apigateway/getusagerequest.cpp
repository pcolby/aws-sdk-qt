/*
    Copyright 2013-2018 Paul Colby

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

#include "getusagerequest.h"
#include "getusagerequest_p.h"
#include "getusageresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetUsageRequest
 * \brief The GetUsageRequest class provides an interface for APIGateway GetUsage requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getUsage
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsageRequest::GetUsageRequest(const GetUsageRequest &other)
    : APIGatewayRequest(new GetUsageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsageRequest object.
 */
GetUsageRequest::GetUsageRequest()
    : APIGatewayRequest(new GetUsageRequestPrivate(APIGatewayRequest::GetUsageAction, this))
{

}

/*!
 * \reimp
 */
bool GetUsageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUsageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUsageRequest::response(QNetworkReply * const reply) const
{
    return new GetUsageResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetUsageRequestPrivate
 * \brief The GetUsageRequestPrivate class provides private implementation for GetUsageRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetUsageRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetUsageRequestPrivate::GetUsageRequestPrivate(
    const APIGatewayRequest::Action action, GetUsageRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUsageRequest
 * class' copy constructor.
 */
GetUsageRequestPrivate::GetUsageRequestPrivate(
    const GetUsageRequestPrivate &other, GetUsageRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
