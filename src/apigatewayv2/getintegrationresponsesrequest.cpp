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

#include "getintegrationresponsesrequest.h"
#include "getintegrationresponsesrequest_p.h"
#include "getintegrationresponsesresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationResponsesRequest
 * \brief The GetIntegrationResponsesRequest class provides an interface for ApiGatewayV2 GetIntegrationResponses requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getIntegrationResponses
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntegrationResponsesRequest::GetIntegrationResponsesRequest(const GetIntegrationResponsesRequest &other)
    : ApiGatewayV2Request(new GetIntegrationResponsesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntegrationResponsesRequest object.
 */
GetIntegrationResponsesRequest::GetIntegrationResponsesRequest()
    : ApiGatewayV2Request(new GetIntegrationResponsesRequestPrivate(ApiGatewayV2Request::GetIntegrationResponsesAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntegrationResponsesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntegrationResponsesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntegrationResponsesRequest::response(QNetworkReply * const reply) const
{
    return new GetIntegrationResponsesResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationResponsesRequestPrivate
 * \brief The GetIntegrationResponsesRequestPrivate class provides private implementation for GetIntegrationResponsesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetIntegrationResponsesRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetIntegrationResponsesRequestPrivate::GetIntegrationResponsesRequestPrivate(
    const ApiGatewayV2Request::Action action, GetIntegrationResponsesRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntegrationResponsesRequest
 * class' copy constructor.
 */
GetIntegrationResponsesRequestPrivate::GetIntegrationResponsesRequestPrivate(
    const GetIntegrationResponsesRequestPrivate &other, GetIntegrationResponsesRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
