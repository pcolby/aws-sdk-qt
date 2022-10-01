// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
