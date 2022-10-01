// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedeploymentrequest.h"
#include "deletedeploymentrequest_p.h"
#include "deletedeploymentresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteDeploymentRequest
 * \brief The DeleteDeploymentRequest class provides an interface for ApiGatewayV2 DeleteDeployment requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDeploymentRequest::DeleteDeploymentRequest(const DeleteDeploymentRequest &other)
    : ApiGatewayV2Request(new DeleteDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDeploymentRequest object.
 */
DeleteDeploymentRequest::DeleteDeploymentRequest()
    : ApiGatewayV2Request(new DeleteDeploymentRequestPrivate(ApiGatewayV2Request::DeleteDeploymentAction, this))
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
 * \class QtAws::ApiGatewayV2::DeleteDeploymentRequestPrivate
 * \brief The DeleteDeploymentRequestPrivate class provides private implementation for DeleteDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteDeploymentRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteDeploymentRequestPrivate::DeleteDeploymentRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteDeploymentRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
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
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
