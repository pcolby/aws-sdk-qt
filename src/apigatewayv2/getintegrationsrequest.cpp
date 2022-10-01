// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintegrationsrequest.h"
#include "getintegrationsrequest_p.h"
#include "getintegrationsresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationsRequest
 * \brief The GetIntegrationsRequest class provides an interface for ApiGatewayV2 GetIntegrations requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getIntegrations
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntegrationsRequest::GetIntegrationsRequest(const GetIntegrationsRequest &other)
    : ApiGatewayV2Request(new GetIntegrationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntegrationsRequest object.
 */
GetIntegrationsRequest::GetIntegrationsRequest()
    : ApiGatewayV2Request(new GetIntegrationsRequestPrivate(ApiGatewayV2Request::GetIntegrationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntegrationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntegrationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntegrationsRequest::response(QNetworkReply * const reply) const
{
    return new GetIntegrationsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationsRequestPrivate
 * \brief The GetIntegrationsRequestPrivate class provides private implementation for GetIntegrationsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetIntegrationsRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetIntegrationsRequestPrivate::GetIntegrationsRequestPrivate(
    const ApiGatewayV2Request::Action action, GetIntegrationsRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntegrationsRequest
 * class' copy constructor.
 */
GetIntegrationsRequestPrivate::GetIntegrationsRequestPrivate(
    const GetIntegrationsRequestPrivate &other, GetIntegrationsRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
