// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createauthorizerrequest.h"
#include "createauthorizerrequest_p.h"
#include "createauthorizerresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateAuthorizerRequest
 * \brief The CreateAuthorizerRequest class provides an interface for ApiGateway CreateAuthorizer requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createAuthorizer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAuthorizerRequest::CreateAuthorizerRequest(const CreateAuthorizerRequest &other)
    : ApiGatewayRequest(new CreateAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAuthorizerRequest object.
 */
CreateAuthorizerRequest::CreateAuthorizerRequest()
    : ApiGatewayRequest(new CreateAuthorizerRequestPrivate(ApiGatewayRequest::CreateAuthorizerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAuthorizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAuthorizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new CreateAuthorizerResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateAuthorizerRequestPrivate
 * \brief The CreateAuthorizerRequestPrivate class provides private implementation for CreateAuthorizerRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateAuthorizerRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateAuthorizerRequestPrivate::CreateAuthorizerRequestPrivate(
    const ApiGatewayRequest::Action action, CreateAuthorizerRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAuthorizerRequest
 * class' copy constructor.
 */
CreateAuthorizerRequestPrivate::CreateAuthorizerRequestPrivate(
    const CreateAuthorizerRequestPrivate &other, CreateAuthorizerRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
