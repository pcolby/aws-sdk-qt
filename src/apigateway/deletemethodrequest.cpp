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

#include "deletemethodrequest.h"
#include "deletemethodrequest_p.h"
#include "deletemethodresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteMethodRequest
 * \brief The DeleteMethodRequest class provides an interface for ApiGateway DeleteMethod requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteMethod
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMethodRequest::DeleteMethodRequest(const DeleteMethodRequest &other)
    : ApiGatewayRequest(new DeleteMethodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMethodRequest object.
 */
DeleteMethodRequest::DeleteMethodRequest()
    : ApiGatewayRequest(new DeleteMethodRequestPrivate(ApiGatewayRequest::DeleteMethodAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMethodRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMethodResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMethodRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMethodResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteMethodRequestPrivate
 * \brief The DeleteMethodRequestPrivate class provides private implementation for DeleteMethodRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteMethodRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteMethodRequestPrivate::DeleteMethodRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteMethodRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMethodRequest
 * class' copy constructor.
 */
DeleteMethodRequestPrivate::DeleteMethodRequestPrivate(
    const DeleteMethodRequestPrivate &other, DeleteMethodRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
