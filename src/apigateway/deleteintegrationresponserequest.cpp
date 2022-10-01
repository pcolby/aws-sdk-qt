// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteintegrationresponserequest.h"
#include "deleteintegrationresponserequest_p.h"
#include "deleteintegrationresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteIntegrationResponseRequest
 * \brief The DeleteIntegrationResponseRequest class provides an interface for ApiGateway DeleteIntegrationResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteIntegrationResponse
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIntegrationResponseRequest::DeleteIntegrationResponseRequest(const DeleteIntegrationResponseRequest &other)
    : ApiGatewayRequest(new DeleteIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIntegrationResponseRequest object.
 */
DeleteIntegrationResponseRequest::DeleteIntegrationResponseRequest()
    : ApiGatewayRequest(new DeleteIntegrationResponseRequestPrivate(ApiGatewayRequest::DeleteIntegrationResponseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIntegrationResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIntegrationResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntegrationResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteIntegrationResponseRequestPrivate
 * \brief The DeleteIntegrationResponseRequestPrivate class provides private implementation for DeleteIntegrationResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteIntegrationResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteIntegrationResponseRequestPrivate::DeleteIntegrationResponseRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteIntegrationResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntegrationResponseRequest
 * class' copy constructor.
 */
DeleteIntegrationResponseRequestPrivate::DeleteIntegrationResponseRequestPrivate(
    const DeleteIntegrationResponseRequestPrivate &other, DeleteIntegrationResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
