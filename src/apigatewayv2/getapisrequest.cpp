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

#include "getapisrequest.h"
#include "getapisrequest_p.h"
#include "getapisresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetApisRequest
 * \brief The GetApisRequest class provides an interface for ApiGatewayV2 GetApis requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getApis
 */

/*!
 * Constructs a copy of \a other.
 */
GetApisRequest::GetApisRequest(const GetApisRequest &other)
    : ApiGatewayV2Request(new GetApisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApisRequest object.
 */
GetApisRequest::GetApisRequest()
    : ApiGatewayV2Request(new GetApisRequestPrivate(ApiGatewayV2Request::GetApisAction, this))
{

}

/*!
 * \reimp
 */
bool GetApisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApisRequest::response(QNetworkReply * const reply) const
{
    return new GetApisResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetApisRequestPrivate
 * \brief The GetApisRequestPrivate class provides private implementation for GetApisRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetApisRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetApisRequestPrivate::GetApisRequestPrivate(
    const ApiGatewayV2Request::Action action, GetApisRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApisRequest
 * class' copy constructor.
 */
GetApisRequestPrivate::GetApisRequestPrivate(
    const GetApisRequestPrivate &other, GetApisRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
