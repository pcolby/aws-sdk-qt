/*
    Copyright 2013-2020 Paul Colby

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

#include "importapikeysrequest.h"
#include "importapikeysrequest_p.h"
#include "importapikeysresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::ImportApiKeysRequest
 * \brief The ImportApiKeysRequest class provides an interface for APIGateway ImportApiKeys requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::importApiKeys
 */

/*!
 * Constructs a copy of \a other.
 */
ImportApiKeysRequest::ImportApiKeysRequest(const ImportApiKeysRequest &other)
    : APIGatewayRequest(new ImportApiKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportApiKeysRequest object.
 */
ImportApiKeysRequest::ImportApiKeysRequest()
    : APIGatewayRequest(new ImportApiKeysRequestPrivate(APIGatewayRequest::ImportApiKeysAction, this))
{

}

/*!
 * \reimp
 */
bool ImportApiKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportApiKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportApiKeysRequest::response(QNetworkReply * const reply) const
{
    return new ImportApiKeysResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::ImportApiKeysRequestPrivate
 * \brief The ImportApiKeysRequestPrivate class provides private implementation for ImportApiKeysRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a ImportApiKeysRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
ImportApiKeysRequestPrivate::ImportApiKeysRequestPrivate(
    const APIGatewayRequest::Action action, ImportApiKeysRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportApiKeysRequest
 * class' copy constructor.
 */
ImportApiKeysRequestPrivate::ImportApiKeysRequestPrivate(
    const ImportApiKeysRequestPrivate &other, ImportApiKeysRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
