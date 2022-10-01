// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedeploymentrequest.h"
#include "updatedeploymentrequest_p.h"
#include "updatedeploymentresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateDeploymentRequest
 * \brief The UpdateDeploymentRequest class provides an interface for ApiGatewayV2 UpdateDeployment requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDeploymentRequest::UpdateDeploymentRequest(const UpdateDeploymentRequest &other)
    : ApiGatewayV2Request(new UpdateDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDeploymentRequest object.
 */
UpdateDeploymentRequest::UpdateDeploymentRequest()
    : ApiGatewayV2Request(new UpdateDeploymentRequestPrivate(ApiGatewayV2Request::UpdateDeploymentAction, this))
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
 * \class QtAws::ApiGatewayV2::UpdateDeploymentRequestPrivate
 * \brief The UpdateDeploymentRequestPrivate class provides private implementation for UpdateDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateDeploymentRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateDeploymentRequestPrivate::UpdateDeploymentRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateDeploymentRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
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
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
