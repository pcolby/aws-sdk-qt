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

#include "getmodelsrequest.h"
#include "getmodelsrequest_p.h"
#include "getmodelsresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetModelsRequest
 * \brief The GetModelsRequest class provides an interface for ApiGatewayV2 GetModels requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getModels
 */

/*!
 * Constructs a copy of \a other.
 */
GetModelsRequest::GetModelsRequest(const GetModelsRequest &other)
    : ApiGatewayV2Request(new GetModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetModelsRequest object.
 */
GetModelsRequest::GetModelsRequest()
    : ApiGatewayV2Request(new GetModelsRequestPrivate(ApiGatewayV2Request::GetModelsAction, this))
{

}

/*!
 * \reimp
 */
bool GetModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetModelsRequest::response(QNetworkReply * const reply) const
{
    return new GetModelsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetModelsRequestPrivate
 * \brief The GetModelsRequestPrivate class provides private implementation for GetModelsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetModelsRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetModelsRequestPrivate::GetModelsRequestPrivate(
    const ApiGatewayV2Request::Action action, GetModelsRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetModelsRequest
 * class' copy constructor.
 */
GetModelsRequestPrivate::GetModelsRequestPrivate(
    const GetModelsRequestPrivate &other, GetModelsRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
