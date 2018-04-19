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

#include "deleterestapirequest.h"
#include "deleterestapirequest_p.h"
#include "deleterestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteRestApiRequest
 * \brief The DeleteRestApiRequest class provides an interface for APIGateway DeleteRestApi requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteRestApi
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRestApiRequest::DeleteRestApiRequest(const DeleteRestApiRequest &other)
    : APIGatewayRequest(new DeleteRestApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRestApiRequest object.
 */
DeleteRestApiRequest::DeleteRestApiRequest()
    : APIGatewayRequest(new DeleteRestApiRequestPrivate(APIGatewayRequest::DeleteRestApiAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRestApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRestApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRestApiRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRestApiResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::DeleteRestApiRequestPrivate
 * \brief The DeleteRestApiRequestPrivate class provides private implementation for DeleteRestApiRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 *
 * Constructs a DeleteRestApiRequestPrivate object for APIGateway \a action with,
 * public implementation \a q.
 */
DeleteRestApiRequestPrivate::DeleteRestApiRequestPrivate(
    const APIGatewayRequest::Action action, DeleteRestApiRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRestApiRequest
 * class' copy constructor.
 */
DeleteRestApiRequestPrivate::DeleteRestApiRequestPrivate(
    const DeleteRestApiRequestPrivate &other, DeleteRestApiRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
