/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getrestapisrequest.h"
#include "getrestapisrequest_p.h"
#include "getrestapisresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetRestApisRequest
 * \brief The GetRestApisRequest class provides an interface for APIGateway GetRestApis requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getRestApis
 */

/*!
 * Constructs a copy of \a other.
 */
GetRestApisRequest::GetRestApisRequest(const GetRestApisRequest &other)
    : APIGatewayRequest(new GetRestApisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRestApisRequest object.
 */
GetRestApisRequest::GetRestApisRequest()
    : APIGatewayRequest(new GetRestApisRequestPrivate(APIGatewayRequest::GetRestApisAction, this))
{

}

/*!
 * \reimp
 */
bool GetRestApisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRestApisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRestApisRequest::response(QNetworkReply * const reply) const
{
    return new GetRestApisResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetRestApisRequestPrivate
 * \brief The GetRestApisRequestPrivate class provides private implementation for GetRestApisRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetRestApisRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetRestApisRequestPrivate::GetRestApisRequestPrivate(
    const APIGatewayRequest::Action action, GetRestApisRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRestApisRequest
 * class' copy constructor.
 */
GetRestApisRequestPrivate::GetRestApisRequestPrivate(
    const GetRestApisRequestPrivate &other, GetRestApisRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
