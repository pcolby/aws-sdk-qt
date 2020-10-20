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

#include "createdeploymentrequest.h"
#include "createdeploymentrequest_p.h"
#include "createdeploymentresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateDeploymentRequest
 * \brief The CreateDeploymentRequest class provides an interface for ApiGatewayV2 CreateDeployment requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDeploymentRequest::CreateDeploymentRequest(const CreateDeploymentRequest &other)
    : ApiGatewayV2Request(new CreateDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDeploymentRequest object.
 */
CreateDeploymentRequest::CreateDeploymentRequest()
    : ApiGatewayV2Request(new CreateDeploymentRequestPrivate(ApiGatewayV2Request::CreateDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::CreateDeploymentRequestPrivate
 * \brief The CreateDeploymentRequestPrivate class provides private implementation for CreateDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateDeploymentRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateDeploymentRequestPrivate::CreateDeploymentRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateDeploymentRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDeploymentRequest
 * class' copy constructor.
 */
CreateDeploymentRequestPrivate::CreateDeploymentRequestPrivate(
    const CreateDeploymentRequestPrivate &other, CreateDeploymentRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
