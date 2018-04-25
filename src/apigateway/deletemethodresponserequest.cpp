/*
    Copyright 2013-2018 Paul Colby

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

#include "deletemethodresponserequest.h"
#include "deletemethodresponserequest_p.h"
#include "deletemethodresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteMethodResponseRequest
 * \brief The DeleteMethodResponseRequest class provides an interface for APIGateway DeleteMethodResponse requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteMethodResponse
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMethodResponseRequest::DeleteMethodResponseRequest(const DeleteMethodResponseRequest &other)
    : APIGatewayRequest(new DeleteMethodResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMethodResponseRequest object.
 */
DeleteMethodResponseRequest::DeleteMethodResponseRequest()
    : APIGatewayRequest(new DeleteMethodResponseRequestPrivate(APIGatewayRequest::DeleteMethodResponseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMethodResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMethodResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMethodResponseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMethodResponseResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::DeleteMethodResponseRequestPrivate
 * \brief The DeleteMethodResponseRequestPrivate class provides private implementation for DeleteMethodResponseRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteMethodResponseRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
DeleteMethodResponseRequestPrivate::DeleteMethodResponseRequestPrivate(
    const APIGatewayRequest::Action action, DeleteMethodResponseRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMethodResponseRequest
 * class' copy constructor.
 */
DeleteMethodResponseRequestPrivate::DeleteMethodResponseRequestPrivate(
    const DeleteMethodResponseRequestPrivate &other, DeleteMethodResponseRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
