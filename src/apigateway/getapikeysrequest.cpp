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

#include "getapikeysrequest.h"
#include "getapikeysrequest_p.h"
#include "getapikeysresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetApiKeysRequest
 * \brief The GetApiKeysRequest class provides an interface for APIGateway GetApiKeys requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getApiKeys
 */

/*!
 * Constructs a copy of \a other.
 */
GetApiKeysRequest::GetApiKeysRequest(const GetApiKeysRequest &other)
    : APIGatewayRequest(new GetApiKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApiKeysRequest object.
 */
GetApiKeysRequest::GetApiKeysRequest()
    : APIGatewayRequest(new GetApiKeysRequestPrivate(APIGatewayRequest::GetApiKeysAction, this))
{

}

/*!
 * \reimp
 */
bool GetApiKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApiKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApiKeysRequest::response(QNetworkReply * const reply) const
{
    return new GetApiKeysResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetApiKeysRequestPrivate
 * \brief The GetApiKeysRequestPrivate class provides private implementation for GetApiKeysRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetApiKeysRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetApiKeysRequestPrivate::GetApiKeysRequestPrivate(
    const APIGatewayRequest::Action action, GetApiKeysRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApiKeysRequest
 * class' copy constructor.
 */
GetApiKeysRequestPrivate::GetApiKeysRequestPrivate(
    const GetApiKeysRequestPrivate &other, GetApiKeysRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
