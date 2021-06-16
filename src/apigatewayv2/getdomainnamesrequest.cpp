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

#include "getdomainnamesrequest.h"
#include "getdomainnamesrequest_p.h"
#include "getdomainnamesresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetDomainNamesRequest
 * \brief The GetDomainNamesRequest class provides an interface for ApiGatewayV2 GetDomainNames requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getDomainNames
 */

/*!
 * Constructs a copy of \a other.
 */
GetDomainNamesRequest::GetDomainNamesRequest(const GetDomainNamesRequest &other)
    : ApiGatewayV2Request(new GetDomainNamesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDomainNamesRequest object.
 */
GetDomainNamesRequest::GetDomainNamesRequest()
    : ApiGatewayV2Request(new GetDomainNamesRequestPrivate(ApiGatewayV2Request::GetDomainNamesAction, this))
{

}

/*!
 * \reimp
 */
bool GetDomainNamesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDomainNamesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDomainNamesRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainNamesResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetDomainNamesRequestPrivate
 * \brief The GetDomainNamesRequestPrivate class provides private implementation for GetDomainNamesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetDomainNamesRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetDomainNamesRequestPrivate::GetDomainNamesRequestPrivate(
    const ApiGatewayV2Request::Action action, GetDomainNamesRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDomainNamesRequest
 * class' copy constructor.
 */
GetDomainNamesRequestPrivate::GetDomainNamesRequestPrivate(
    const GetDomainNamesRequestPrivate &other, GetDomainNamesRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
