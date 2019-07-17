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

#include "getintegrationsrequest.h"
#include "getintegrationsrequest_p.h"
#include "getintegrationsresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationsRequest
 * \brief The GetIntegrationsRequest class provides an interface for ApiGatewayV2 GetIntegrations requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getIntegrations
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntegrationsRequest::GetIntegrationsRequest(const GetIntegrationsRequest &other)
    : ApiGatewayV2Request(new GetIntegrationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntegrationsRequest object.
 */
GetIntegrationsRequest::GetIntegrationsRequest()
    : ApiGatewayV2Request(new GetIntegrationsRequestPrivate(ApiGatewayV2Request::GetIntegrationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntegrationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntegrationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntegrationsRequest::response(QNetworkReply * const reply) const
{
    return new GetIntegrationsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationsRequestPrivate
 * \brief The GetIntegrationsRequestPrivate class provides private implementation for GetIntegrationsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetIntegrationsRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetIntegrationsRequestPrivate::GetIntegrationsRequestPrivate(
    const ApiGatewayV2Request::Action action, GetIntegrationsRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntegrationsRequest
 * class' copy constructor.
 */
GetIntegrationsRequestPrivate::GetIntegrationsRequestPrivate(
    const GetIntegrationsRequestPrivate &other, GetIntegrationsRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
