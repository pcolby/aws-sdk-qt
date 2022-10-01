// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
