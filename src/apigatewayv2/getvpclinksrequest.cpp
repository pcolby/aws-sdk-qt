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

#include "getvpclinksrequest.h"
#include "getvpclinksrequest_p.h"
#include "getvpclinksresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetVpcLinksRequest
 * \brief The GetVpcLinksRequest class provides an interface for ApiGatewayV2 GetVpcLinks requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getVpcLinks
 */

/*!
 * Constructs a copy of \a other.
 */
GetVpcLinksRequest::GetVpcLinksRequest(const GetVpcLinksRequest &other)
    : ApiGatewayV2Request(new GetVpcLinksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVpcLinksRequest object.
 */
GetVpcLinksRequest::GetVpcLinksRequest()
    : ApiGatewayV2Request(new GetVpcLinksRequestPrivate(ApiGatewayV2Request::GetVpcLinksAction, this))
{

}

/*!
 * \reimp
 */
bool GetVpcLinksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVpcLinksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVpcLinksRequest::response(QNetworkReply * const reply) const
{
    return new GetVpcLinksResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetVpcLinksRequestPrivate
 * \brief The GetVpcLinksRequestPrivate class provides private implementation for GetVpcLinksRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetVpcLinksRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetVpcLinksRequestPrivate::GetVpcLinksRequestPrivate(
    const ApiGatewayV2Request::Action action, GetVpcLinksRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVpcLinksRequest
 * class' copy constructor.
 */
GetVpcLinksRequestPrivate::GetVpcLinksRequestPrivate(
    const GetVpcLinksRequestPrivate &other, GetVpcLinksRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
