// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
