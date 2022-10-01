// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapikeyrequest.h"
#include "createapikeyrequest_p.h"
#include "createapikeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateApiKeyRequest
 * \brief The CreateApiKeyRequest class provides an interface for ApiGateway CreateApiKey requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createApiKey
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApiKeyRequest::CreateApiKeyRequest(const CreateApiKeyRequest &other)
    : ApiGatewayRequest(new CreateApiKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApiKeyRequest object.
 */
CreateApiKeyRequest::CreateApiKeyRequest()
    : ApiGatewayRequest(new CreateApiKeyRequestPrivate(ApiGatewayRequest::CreateApiKeyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApiKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApiKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreateApiKeyResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateApiKeyRequestPrivate
 * \brief The CreateApiKeyRequestPrivate class provides private implementation for CreateApiKeyRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateApiKeyRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateApiKeyRequestPrivate::CreateApiKeyRequestPrivate(
    const ApiGatewayRequest::Action action, CreateApiKeyRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApiKeyRequest
 * class' copy constructor.
 */
CreateApiKeyRequestPrivate::CreateApiKeyRequestPrivate(
    const CreateApiKeyRequestPrivate &other, CreateApiKeyRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
