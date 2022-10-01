// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putintegrationresponserequest.h"
#include "putintegrationresponserequest_p.h"
#include "putintegrationresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutIntegrationResponseRequest
 * \brief The PutIntegrationResponseRequest class provides an interface for ApiGateway PutIntegrationResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putIntegrationResponse
 */

/*!
 * Constructs a copy of \a other.
 */
PutIntegrationResponseRequest::PutIntegrationResponseRequest(const PutIntegrationResponseRequest &other)
    : ApiGatewayRequest(new PutIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutIntegrationResponseRequest object.
 */
PutIntegrationResponseRequest::PutIntegrationResponseRequest()
    : ApiGatewayRequest(new PutIntegrationResponseRequestPrivate(ApiGatewayRequest::PutIntegrationResponseAction, this))
{

}

/*!
 * \reimp
 */
bool PutIntegrationResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutIntegrationResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new PutIntegrationResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::PutIntegrationResponseRequestPrivate
 * \brief The PutIntegrationResponseRequestPrivate class provides private implementation for PutIntegrationResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutIntegrationResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
PutIntegrationResponseRequestPrivate::PutIntegrationResponseRequestPrivate(
    const ApiGatewayRequest::Action action, PutIntegrationResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutIntegrationResponseRequest
 * class' copy constructor.
 */
PutIntegrationResponseRequestPrivate::PutIntegrationResponseRequestPrivate(
    const PutIntegrationResponseRequestPrivate &other, PutIntegrationResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
