// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateintegrationresponserequest.h"
#include "updateintegrationresponserequest_p.h"
#include "updateintegrationresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateIntegrationResponseRequest
 * \brief The UpdateIntegrationResponseRequest class provides an interface for ApiGateway UpdateIntegrationResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateIntegrationResponse
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIntegrationResponseRequest::UpdateIntegrationResponseRequest(const UpdateIntegrationResponseRequest &other)
    : ApiGatewayRequest(new UpdateIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIntegrationResponseRequest object.
 */
UpdateIntegrationResponseRequest::UpdateIntegrationResponseRequest()
    : ApiGatewayRequest(new UpdateIntegrationResponseRequestPrivate(ApiGatewayRequest::UpdateIntegrationResponseAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIntegrationResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIntegrationResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIntegrationResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateIntegrationResponseRequestPrivate
 * \brief The UpdateIntegrationResponseRequestPrivate class provides private implementation for UpdateIntegrationResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateIntegrationResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateIntegrationResponseRequestPrivate::UpdateIntegrationResponseRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateIntegrationResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIntegrationResponseRequest
 * class' copy constructor.
 */
UpdateIntegrationResponseRequestPrivate::UpdateIntegrationResponseRequestPrivate(
    const UpdateIntegrationResponseRequestPrivate &other, UpdateIntegrationResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
