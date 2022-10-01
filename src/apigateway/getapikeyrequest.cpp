// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapikeyrequest.h"
#include "getapikeyrequest_p.h"
#include "getapikeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetApiKeyRequest
 * \brief The GetApiKeyRequest class provides an interface for ApiGateway GetApiKey requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getApiKey
 */

/*!
 * Constructs a copy of \a other.
 */
GetApiKeyRequest::GetApiKeyRequest(const GetApiKeyRequest &other)
    : ApiGatewayRequest(new GetApiKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApiKeyRequest object.
 */
GetApiKeyRequest::GetApiKeyRequest()
    : ApiGatewayRequest(new GetApiKeyRequestPrivate(ApiGatewayRequest::GetApiKeyAction, this))
{

}

/*!
 * \reimp
 */
bool GetApiKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApiKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new GetApiKeyResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetApiKeyRequestPrivate
 * \brief The GetApiKeyRequestPrivate class provides private implementation for GetApiKeyRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetApiKeyRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetApiKeyRequestPrivate::GetApiKeyRequestPrivate(
    const ApiGatewayRequest::Action action, GetApiKeyRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApiKeyRequest
 * class' copy constructor.
 */
GetApiKeyRequestPrivate::GetApiKeyRequestPrivate(
    const GetApiKeyRequestPrivate &other, GetApiKeyRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
