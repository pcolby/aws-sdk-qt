// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeploymentsrequest.h"
#include "getdeploymentsrequest_p.h"
#include "getdeploymentsresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetDeploymentsRequest
 * \brief The GetDeploymentsRequest class provides an interface for ApiGatewayV2 GetDeployments requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getDeployments
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeploymentsRequest::GetDeploymentsRequest(const GetDeploymentsRequest &other)
    : ApiGatewayV2Request(new GetDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeploymentsRequest object.
 */
GetDeploymentsRequest::GetDeploymentsRequest()
    : ApiGatewayV2Request(new GetDeploymentsRequestPrivate(ApiGatewayV2Request::GetDeploymentsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeploymentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeploymentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetDeploymentsRequestPrivate
 * \brief The GetDeploymentsRequestPrivate class provides private implementation for GetDeploymentsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetDeploymentsRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetDeploymentsRequestPrivate::GetDeploymentsRequestPrivate(
    const ApiGatewayV2Request::Action action, GetDeploymentsRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentsRequest
 * class' copy constructor.
 */
GetDeploymentsRequestPrivate::GetDeploymentsRequestPrivate(
    const GetDeploymentsRequestPrivate &other, GetDeploymentsRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
