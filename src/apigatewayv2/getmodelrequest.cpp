/*
    Copyright 2013-2020 Paul Colby

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

#include "getmodelrequest.h"
#include "getmodelrequest_p.h"
#include "getmodelresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetModelRequest
 * \brief The GetModelRequest class provides an interface for ApiGatewayV2 GetModel requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getModel
 */

/*!
 * Constructs a copy of \a other.
 */
GetModelRequest::GetModelRequest(const GetModelRequest &other)
    : ApiGatewayV2Request(new GetModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetModelRequest object.
 */
GetModelRequest::GetModelRequest()
    : ApiGatewayV2Request(new GetModelRequestPrivate(ApiGatewayV2Request::GetModelAction, this))
{

}

/*!
 * \reimp
 */
bool GetModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetModelRequest::response(QNetworkReply * const reply) const
{
    return new GetModelResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetModelRequestPrivate
 * \brief The GetModelRequestPrivate class provides private implementation for GetModelRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetModelRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetModelRequestPrivate::GetModelRequestPrivate(
    const ApiGatewayV2Request::Action action, GetModelRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetModelRequest
 * class' copy constructor.
 */
GetModelRequestPrivate::GetModelRequestPrivate(
    const GetModelRequestPrivate &other, GetModelRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
