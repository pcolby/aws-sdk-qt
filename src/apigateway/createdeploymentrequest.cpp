// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdeploymentrequest.h"
#include "createdeploymentrequest_p.h"
#include "createdeploymentresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateDeploymentRequest
 * \brief The CreateDeploymentRequest class provides an interface for ApiGateway CreateDeployment requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDeploymentRequest::CreateDeploymentRequest(const CreateDeploymentRequest &other)
    : ApiGatewayRequest(new CreateDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDeploymentRequest object.
 */
CreateDeploymentRequest::CreateDeploymentRequest()
    : ApiGatewayRequest(new CreateDeploymentRequestPrivate(ApiGatewayRequest::CreateDeploymentAction, this))
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
 * \class QtAws::ApiGateway::CreateDeploymentRequestPrivate
 * \brief The CreateDeploymentRequestPrivate class provides private implementation for CreateDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateDeploymentRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateDeploymentRequestPrivate::CreateDeploymentRequestPrivate(
    const ApiGatewayRequest::Action action, CreateDeploymentRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
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
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
