// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putintegrationrequest.h"
#include "putintegrationrequest_p.h"
#include "putintegrationresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutIntegrationRequest
 * \brief The PutIntegrationRequest class provides an interface for ApiGateway PutIntegration requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
PutIntegrationRequest::PutIntegrationRequest(const PutIntegrationRequest &other)
    : ApiGatewayRequest(new PutIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutIntegrationRequest object.
 */
PutIntegrationRequest::PutIntegrationRequest()
    : ApiGatewayRequest(new PutIntegrationRequestPrivate(ApiGatewayRequest::PutIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool PutIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new PutIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::PutIntegrationRequestPrivate
 * \brief The PutIntegrationRequestPrivate class provides private implementation for PutIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutIntegrationRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
PutIntegrationRequestPrivate::PutIntegrationRequestPrivate(
    const ApiGatewayRequest::Action action, PutIntegrationRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutIntegrationRequest
 * class' copy constructor.
 */
PutIntegrationRequestPrivate::PutIntegrationRequestPrivate(
    const PutIntegrationRequestPrivate &other, PutIntegrationRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
