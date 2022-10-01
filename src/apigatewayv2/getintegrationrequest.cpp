// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintegrationrequest.h"
#include "getintegrationrequest_p.h"
#include "getintegrationresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationRequest
 * \brief The GetIntegrationRequest class provides an interface for ApiGatewayV2 GetIntegration requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntegrationRequest::GetIntegrationRequest(const GetIntegrationRequest &other)
    : ApiGatewayV2Request(new GetIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntegrationRequest object.
 */
GetIntegrationRequest::GetIntegrationRequest()
    : ApiGatewayV2Request(new GetIntegrationRequestPrivate(ApiGatewayV2Request::GetIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new GetIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationRequestPrivate
 * \brief The GetIntegrationRequestPrivate class provides private implementation for GetIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetIntegrationRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetIntegrationRequestPrivate::GetIntegrationRequestPrivate(
    const ApiGatewayV2Request::Action action, GetIntegrationRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntegrationRequest
 * class' copy constructor.
 */
GetIntegrationRequestPrivate::GetIntegrationRequestPrivate(
    const GetIntegrationRequestPrivate &other, GetIntegrationRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
