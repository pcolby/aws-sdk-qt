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

#include "updatedeploymentrequest.h"
#include "updatedeploymentrequest_p.h"
#include "updatedeploymentresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateDeploymentRequest
 * \brief The UpdateDeploymentRequest class provides an interface for ApiGateway UpdateDeployment requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDeploymentRequest::UpdateDeploymentRequest(const UpdateDeploymentRequest &other)
    : ApiGatewayRequest(new UpdateDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDeploymentRequest object.
 */
UpdateDeploymentRequest::UpdateDeploymentRequest()
    : ApiGatewayRequest(new UpdateDeploymentRequestPrivate(ApiGatewayRequest::UpdateDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateDeploymentRequestPrivate
 * \brief The UpdateDeploymentRequestPrivate class provides private implementation for UpdateDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateDeploymentRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateDeploymentRequestPrivate::UpdateDeploymentRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateDeploymentRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeploymentRequest
 * class' copy constructor.
 */
UpdateDeploymentRequestPrivate::UpdateDeploymentRequestPrivate(
    const UpdateDeploymentRequestPrivate &other, UpdateDeploymentRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
