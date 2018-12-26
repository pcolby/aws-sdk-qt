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

#include "getapirequest.h"
#include "getapirequest_p.h"
#include "getapiresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetApiRequest
 * \brief The GetApiRequest class provides an interface for ApiGatewayV2 GetApi requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getApi
 */

/*!
 * Constructs a copy of \a other.
 */
GetApiRequest::GetApiRequest(const GetApiRequest &other)
    : ApiGatewayV2Request(new GetApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApiRequest object.
 */
GetApiRequest::GetApiRequest()
    : ApiGatewayV2Request(new GetApiRequestPrivate(ApiGatewayV2Request::GetApiAction, this))
{

}

/*!
 * \reimp
 */
bool GetApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApiRequest::response(QNetworkReply * const reply) const
{
    return new GetApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetApiRequestPrivate
 * \brief The GetApiRequestPrivate class provides private implementation for GetApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetApiRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetApiRequestPrivate::GetApiRequestPrivate(
    const ApiGatewayV2Request::Action action, GetApiRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApiRequest
 * class' copy constructor.
 */
GetApiRequestPrivate::GetApiRequestPrivate(
    const GetApiRequestPrivate &other, GetApiRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
