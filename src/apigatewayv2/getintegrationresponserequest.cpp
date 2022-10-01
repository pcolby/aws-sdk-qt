// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintegrationresponserequest.h"
#include "getintegrationresponserequest_p.h"
#include "getintegrationresponseresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationResponseRequest
 * \brief The GetIntegrationResponseRequest class provides an interface for ApiGatewayV2 GetIntegrationResponse requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getIntegrationResponse
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntegrationResponseRequest::GetIntegrationResponseRequest(const GetIntegrationResponseRequest &other)
    : ApiGatewayV2Request(new GetIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntegrationResponseRequest object.
 */
GetIntegrationResponseRequest::GetIntegrationResponseRequest()
    : ApiGatewayV2Request(new GetIntegrationResponseRequestPrivate(ApiGatewayV2Request::GetIntegrationResponseAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntegrationResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntegrationResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new GetIntegrationResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationResponseRequestPrivate
 * \brief The GetIntegrationResponseRequestPrivate class provides private implementation for GetIntegrationResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetIntegrationResponseRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetIntegrationResponseRequestPrivate::GetIntegrationResponseRequestPrivate(
    const ApiGatewayV2Request::Action action, GetIntegrationResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntegrationResponseRequest
 * class' copy constructor.
 */
GetIntegrationResponseRequestPrivate::GetIntegrationResponseRequestPrivate(
    const GetIntegrationResponseRequestPrivate &other, GetIntegrationResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
