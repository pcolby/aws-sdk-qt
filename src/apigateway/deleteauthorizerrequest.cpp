// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteauthorizerrequest.h"
#include "deleteauthorizerrequest_p.h"
#include "deleteauthorizerresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteAuthorizerRequest
 * \brief The DeleteAuthorizerRequest class provides an interface for ApiGateway DeleteAuthorizer requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteAuthorizer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAuthorizerRequest::DeleteAuthorizerRequest(const DeleteAuthorizerRequest &other)
    : ApiGatewayRequest(new DeleteAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAuthorizerRequest object.
 */
DeleteAuthorizerRequest::DeleteAuthorizerRequest()
    : ApiGatewayRequest(new DeleteAuthorizerRequestPrivate(ApiGatewayRequest::DeleteAuthorizerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAuthorizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAuthorizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAuthorizerResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteAuthorizerRequestPrivate
 * \brief The DeleteAuthorizerRequestPrivate class provides private implementation for DeleteAuthorizerRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteAuthorizerRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteAuthorizerRequestPrivate::DeleteAuthorizerRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteAuthorizerRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAuthorizerRequest
 * class' copy constructor.
 */
DeleteAuthorizerRequestPrivate::DeleteAuthorizerRequestPrivate(
    const DeleteAuthorizerRequestPrivate &other, DeleteAuthorizerRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
