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

#include "getroutesrequest.h"
#include "getroutesrequest_p.h"
#include "getroutesresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetRoutesRequest
 * \brief The GetRoutesRequest class provides an interface for ApiGatewayV2 GetRoutes requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getRoutes
 */

/*!
 * Constructs a copy of \a other.
 */
GetRoutesRequest::GetRoutesRequest(const GetRoutesRequest &other)
    : ApiGatewayV2Request(new GetRoutesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRoutesRequest object.
 */
GetRoutesRequest::GetRoutesRequest()
    : ApiGatewayV2Request(new GetRoutesRequestPrivate(ApiGatewayV2Request::GetRoutesAction, this))
{

}

/*!
 * \reimp
 */
bool GetRoutesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRoutesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRoutesRequest::response(QNetworkReply * const reply) const
{
    return new GetRoutesResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetRoutesRequestPrivate
 * \brief The GetRoutesRequestPrivate class provides private implementation for GetRoutesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetRoutesRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetRoutesRequestPrivate::GetRoutesRequestPrivate(
    const ApiGatewayV2Request::Action action, GetRoutesRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRoutesRequest
 * class' copy constructor.
 */
GetRoutesRequestPrivate::GetRoutesRequestPrivate(
    const GetRoutesRequestPrivate &other, GetRoutesRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
