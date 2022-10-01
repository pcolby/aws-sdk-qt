// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapikeyrequest.h"
#include "updateapikeyrequest_p.h"
#include "updateapikeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateApiKeyRequest
 * \brief The UpdateApiKeyRequest class provides an interface for ApiGateway UpdateApiKey requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateApiKey
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApiKeyRequest::UpdateApiKeyRequest(const UpdateApiKeyRequest &other)
    : ApiGatewayRequest(new UpdateApiKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApiKeyRequest object.
 */
UpdateApiKeyRequest::UpdateApiKeyRequest()
    : ApiGatewayRequest(new UpdateApiKeyRequestPrivate(ApiGatewayRequest::UpdateApiKeyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApiKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApiKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApiKeyResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::UpdateApiKeyRequestPrivate
 * \brief The UpdateApiKeyRequestPrivate class provides private implementation for UpdateApiKeyRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateApiKeyRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateApiKeyRequestPrivate::UpdateApiKeyRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateApiKeyRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApiKeyRequest
 * class' copy constructor.
 */
UpdateApiKeyRequestPrivate::UpdateApiKeyRequestPrivate(
    const UpdateApiKeyRequestPrivate &other, UpdateApiKeyRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
