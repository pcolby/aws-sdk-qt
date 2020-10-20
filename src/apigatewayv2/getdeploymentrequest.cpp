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

#include "getdeploymentrequest.h"
#include "getdeploymentrequest_p.h"
#include "getdeploymentresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetDeploymentRequest
 * \brief The GetDeploymentRequest class provides an interface for ApiGatewayV2 GetDeployment requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeploymentRequest::GetDeploymentRequest(const GetDeploymentRequest &other)
    : ApiGatewayV2Request(new GetDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeploymentRequest object.
 */
GetDeploymentRequest::GetDeploymentRequest()
    : ApiGatewayV2Request(new GetDeploymentRequestPrivate(ApiGatewayV2Request::GetDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetDeploymentRequestPrivate
 * \brief The GetDeploymentRequestPrivate class provides private implementation for GetDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetDeploymentRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetDeploymentRequestPrivate::GetDeploymentRequestPrivate(
    const ApiGatewayV2Request::Action action, GetDeploymentRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentRequest
 * class' copy constructor.
 */
GetDeploymentRequestPrivate::GetDeploymentRequestPrivate(
    const GetDeploymentRequestPrivate &other, GetDeploymentRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
