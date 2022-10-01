// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedeploymentrequest.h"
#include "deletedeploymentrequest_p.h"
#include "deletedeploymentresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteDeploymentRequest
 * \brief The DeleteDeploymentRequest class provides an interface for ApiGateway DeleteDeployment requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDeploymentRequest::DeleteDeploymentRequest(const DeleteDeploymentRequest &other)
    : ApiGatewayRequest(new DeleteDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDeploymentRequest object.
 */
DeleteDeploymentRequest::DeleteDeploymentRequest()
    : ApiGatewayRequest(new DeleteDeploymentRequestPrivate(ApiGatewayRequest::DeleteDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteDeploymentRequestPrivate
 * \brief The DeleteDeploymentRequestPrivate class provides private implementation for DeleteDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteDeploymentRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteDeploymentRequestPrivate::DeleteDeploymentRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteDeploymentRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeploymentRequest
 * class' copy constructor.
 */
DeleteDeploymentRequestPrivate::DeleteDeploymentRequestPrivate(
    const DeleteDeploymentRequestPrivate &other, DeleteDeploymentRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
