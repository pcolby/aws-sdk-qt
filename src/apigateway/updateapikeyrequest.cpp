/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateapikeyrequest.h"
#include "updateapikeyrequest_p.h"
#include "updateapikeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateApiKeyRequest
 * \brief The UpdateApiKeyRequest class provides an interface for APIGateway UpdateApiKey requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateApiKey
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApiKeyRequest::UpdateApiKeyRequest(const UpdateApiKeyRequest &other)
    : APIGatewayRequest(new UpdateApiKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApiKeyRequest object.
 */
UpdateApiKeyRequest::UpdateApiKeyRequest()
    : APIGatewayRequest(new UpdateApiKeyRequestPrivate(APIGatewayRequest::UpdateApiKeyAction, this))
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
 * \class QtAws::APIGateway::UpdateApiKeyRequestPrivate
 * \brief The UpdateApiKeyRequestPrivate class provides private implementation for UpdateApiKeyRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateApiKeyRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
UpdateApiKeyRequestPrivate::UpdateApiKeyRequestPrivate(
    const APIGatewayRequest::Action action, UpdateApiKeyRequest * const q)
    : APIGatewayRequestPrivate(action, q)
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
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
