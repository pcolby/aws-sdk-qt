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

#include "getsdktypesrequest.h"
#include "getsdktypesrequest_p.h"
#include "getsdktypesresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetSdkTypesRequest
 * \brief The GetSdkTypesRequest class provides an interface for APIGateway GetSdkTypes requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getSdkTypes
 */

/*!
 * Constructs a copy of \a other.
 */
GetSdkTypesRequest::GetSdkTypesRequest(const GetSdkTypesRequest &other)
    : APIGatewayRequest(new GetSdkTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSdkTypesRequest object.
 */
GetSdkTypesRequest::GetSdkTypesRequest()
    : APIGatewayRequest(new GetSdkTypesRequestPrivate(APIGatewayRequest::GetSdkTypesAction, this))
{

}

/*!
 * \reimp
 */
bool GetSdkTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSdkTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSdkTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetSdkTypesResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetSdkTypesRequestPrivate
 * \brief The GetSdkTypesRequestPrivate class provides private implementation for GetSdkTypesRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetSdkTypesRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetSdkTypesRequestPrivate::GetSdkTypesRequestPrivate(
    const APIGatewayRequest::Action action, GetSdkTypesRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSdkTypesRequest
 * class' copy constructor.
 */
GetSdkTypesRequestPrivate::GetSdkTypesRequestPrivate(
    const GetSdkTypesRequestPrivate &other, GetSdkTypesRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
