// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemethodresponserequest.h"
#include "deletemethodresponserequest_p.h"
#include "deletemethodresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteMethodResponseRequest
 * \brief The DeleteMethodResponseRequest class provides an interface for ApiGateway DeleteMethodResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteMethodResponse
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMethodResponseRequest::DeleteMethodResponseRequest(const DeleteMethodResponseRequest &other)
    : ApiGatewayRequest(new DeleteMethodResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMethodResponseRequest object.
 */
DeleteMethodResponseRequest::DeleteMethodResponseRequest()
    : ApiGatewayRequest(new DeleteMethodResponseRequestPrivate(ApiGatewayRequest::DeleteMethodResponseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMethodResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMethodResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMethodResponseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMethodResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteMethodResponseRequestPrivate
 * \brief The DeleteMethodResponseRequestPrivate class provides private implementation for DeleteMethodResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteMethodResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteMethodResponseRequestPrivate::DeleteMethodResponseRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteMethodResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMethodResponseRequest
 * class' copy constructor.
 */
DeleteMethodResponseRequestPrivate::DeleteMethodResponseRequestPrivate(
    const DeleteMethodResponseRequestPrivate &other, DeleteMethodResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
