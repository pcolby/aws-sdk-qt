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

#include "getapikeyrequest.h"
#include "getapikeyrequest_p.h"
#include "getapikeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetApiKeyRequest
 * \brief The GetApiKeyRequest class provides an interface for APIGateway GetApiKey requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getApiKey
 */

/*!
 * Constructs a copy of \a other.
 */
GetApiKeyRequest::GetApiKeyRequest(const GetApiKeyRequest &other)
    : APIGatewayRequest(new GetApiKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApiKeyRequest object.
 */
GetApiKeyRequest::GetApiKeyRequest()
    : APIGatewayRequest(new GetApiKeyRequestPrivate(APIGatewayRequest::GetApiKeyAction, this))
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
 * \class QtAws::APIGateway::GetApiKeyRequestPrivate
 * \brief The GetApiKeyRequestPrivate class provides private implementation for GetApiKeyRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetApiKeyRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetApiKeyRequestPrivate::GetApiKeyRequestPrivate(
    const APIGatewayRequest::Action action, GetApiKeyRequest * const q)
    : APIGatewayRequestPrivate(action, q)
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
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
