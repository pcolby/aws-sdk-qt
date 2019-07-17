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

#include "getapimappingsrequest.h"
#include "getapimappingsrequest_p.h"
#include "getapimappingsresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingsRequest
 * \brief The GetApiMappingsRequest class provides an interface for ApiGatewayV2 GetApiMappings requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getApiMappings
 */

/*!
 * Constructs a copy of \a other.
 */
GetApiMappingsRequest::GetApiMappingsRequest(const GetApiMappingsRequest &other)
    : ApiGatewayV2Request(new GetApiMappingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApiMappingsRequest object.
 */
GetApiMappingsRequest::GetApiMappingsRequest()
    : ApiGatewayV2Request(new GetApiMappingsRequestPrivate(ApiGatewayV2Request::GetApiMappingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetApiMappingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApiMappingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApiMappingsRequest::response(QNetworkReply * const reply) const
{
    return new GetApiMappingsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetApiMappingsRequestPrivate
 * \brief The GetApiMappingsRequestPrivate class provides private implementation for GetApiMappingsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetApiMappingsRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetApiMappingsRequestPrivate::GetApiMappingsRequestPrivate(
    const ApiGatewayV2Request::Action action, GetApiMappingsRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApiMappingsRequest
 * class' copy constructor.
 */
GetApiMappingsRequestPrivate::GetApiMappingsRequestPrivate(
    const GetApiMappingsRequestPrivate &other, GetApiMappingsRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
