// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateintegrationrequest.h"
#include "updateintegrationrequest_p.h"
#include "updateintegrationresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateIntegrationRequest
 * \brief The UpdateIntegrationRequest class provides an interface for ApiGatewayV2 UpdateIntegration requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIntegrationRequest::UpdateIntegrationRequest(const UpdateIntegrationRequest &other)
    : ApiGatewayV2Request(new UpdateIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIntegrationRequest object.
 */
UpdateIntegrationRequest::UpdateIntegrationRequest()
    : ApiGatewayV2Request(new UpdateIntegrationRequestPrivate(ApiGatewayV2Request::UpdateIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateIntegrationRequestPrivate
 * \brief The UpdateIntegrationRequestPrivate class provides private implementation for UpdateIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateIntegrationRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateIntegrationRequestPrivate::UpdateIntegrationRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateIntegrationRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIntegrationRequest
 * class' copy constructor.
 */
UpdateIntegrationRequestPrivate::UpdateIntegrationRequestPrivate(
    const UpdateIntegrationRequestPrivate &other, UpdateIntegrationRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
