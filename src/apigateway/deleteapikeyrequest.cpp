/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteapikeyrequest.h"
#include "deleteapikeyrequest_p.h"
#include "deleteapikeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteApiKeyRequest
 * \brief The DeleteApiKeyRequest class provides an interface for ApiGateway DeleteApiKey requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteApiKey
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApiKeyRequest::DeleteApiKeyRequest(const DeleteApiKeyRequest &other)
    : ApiGatewayRequest(new DeleteApiKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApiKeyRequest object.
 */
DeleteApiKeyRequest::DeleteApiKeyRequest()
    : ApiGatewayRequest(new DeleteApiKeyRequestPrivate(ApiGatewayRequest::DeleteApiKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApiKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApiKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApiKeyResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteApiKeyRequestPrivate
 * \brief The DeleteApiKeyRequestPrivate class provides private implementation for DeleteApiKeyRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteApiKeyRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteApiKeyRequestPrivate::DeleteApiKeyRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteApiKeyRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApiKeyRequest
 * class' copy constructor.
 */
DeleteApiKeyRequestPrivate::DeleteApiKeyRequestPrivate(
    const DeleteApiKeyRequestPrivate &other, DeleteApiKeyRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
