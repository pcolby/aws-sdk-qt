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

#include "deletedomainnamerequest.h"
#include "deletedomainnamerequest_p.h"
#include "deletedomainnameresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteDomainNameRequest
 * \brief The DeleteDomainNameRequest class provides an interface for APIGateway DeleteDomainName requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDomainNameRequest::DeleteDomainNameRequest(const DeleteDomainNameRequest &other)
    : APIGatewayRequest(new DeleteDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDomainNameRequest object.
 */
DeleteDomainNameRequest::DeleteDomainNameRequest()
    : APIGatewayRequest(new DeleteDomainNameRequestPrivate(APIGatewayRequest::DeleteDomainNameAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDomainNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDomainNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDomainNameResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::DeleteDomainNameRequestPrivate
 * \brief The DeleteDomainNameRequestPrivate class provides private implementation for DeleteDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteDomainNameRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
DeleteDomainNameRequestPrivate::DeleteDomainNameRequestPrivate(
    const APIGatewayRequest::Action action, DeleteDomainNameRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDomainNameRequest
 * class' copy constructor.
 */
DeleteDomainNameRequestPrivate::DeleteDomainNameRequestPrivate(
    const DeleteDomainNameRequestPrivate &other, DeleteDomainNameRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
