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

#include "importrestapirequest.h"
#include "importrestapirequest_p.h"
#include "importrestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::ImportRestApiRequest
 * \brief The ImportRestApiRequest class provides an interface for APIGateway ImportRestApi requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::importRestApi
 */

/*!
 * Constructs a copy of \a other.
 */
ImportRestApiRequest::ImportRestApiRequest(const ImportRestApiRequest &other)
    : APIGatewayRequest(new ImportRestApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportRestApiRequest object.
 */
ImportRestApiRequest::ImportRestApiRequest()
    : APIGatewayRequest(new ImportRestApiRequestPrivate(APIGatewayRequest::ImportRestApiAction, this))
{

}

/*!
 * \reimp
 */
bool ImportRestApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportRestApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportRestApiRequest::response(QNetworkReply * const reply) const
{
    return new ImportRestApiResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::ImportRestApiRequestPrivate
 * \brief The ImportRestApiRequestPrivate class provides private implementation for ImportRestApiRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a ImportRestApiRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
ImportRestApiRequestPrivate::ImportRestApiRequestPrivate(
    const APIGatewayRequest::Action action, ImportRestApiRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportRestApiRequest
 * class' copy constructor.
 */
ImportRestApiRequestPrivate::ImportRestApiRequestPrivate(
    const ImportRestApiRequestPrivate &other, ImportRestApiRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
