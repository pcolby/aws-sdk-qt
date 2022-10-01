// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateintegrationrequest.h"
#include "updateintegrationrequest_p.h"
#include "updateintegrationresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateIntegrationRequest
 * \brief The UpdateIntegrationRequest class provides an interface for ApiGateway UpdateIntegration requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIntegrationRequest::UpdateIntegrationRequest(const UpdateIntegrationRequest &other)
    : ApiGatewayRequest(new UpdateIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIntegrationRequest object.
 */
UpdateIntegrationRequest::UpdateIntegrationRequest()
    : ApiGatewayRequest(new UpdateIntegrationRequestPrivate(ApiGatewayRequest::UpdateIntegrationAction, this))
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
 * \class QtAws::ApiGateway::UpdateIntegrationRequestPrivate
 * \brief The UpdateIntegrationRequestPrivate class provides private implementation for UpdateIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateIntegrationRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateIntegrationRequestPrivate::UpdateIntegrationRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateIntegrationRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
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
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
