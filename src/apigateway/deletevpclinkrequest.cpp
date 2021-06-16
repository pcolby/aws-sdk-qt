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

#include "deletevpclinkrequest.h"
#include "deletevpclinkrequest_p.h"
#include "deletevpclinkresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteVpcLinkRequest
 * \brief The DeleteVpcLinkRequest class provides an interface for APIGateway DeleteVpcLink requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteVpcLink
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVpcLinkRequest::DeleteVpcLinkRequest(const DeleteVpcLinkRequest &other)
    : APIGatewayRequest(new DeleteVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVpcLinkRequest object.
 */
DeleteVpcLinkRequest::DeleteVpcLinkRequest()
    : APIGatewayRequest(new DeleteVpcLinkRequestPrivate(APIGatewayRequest::DeleteVpcLinkAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVpcLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVpcLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVpcLinkRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpcLinkResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::DeleteVpcLinkRequestPrivate
 * \brief The DeleteVpcLinkRequestPrivate class provides private implementation for DeleteVpcLinkRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteVpcLinkRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
DeleteVpcLinkRequestPrivate::DeleteVpcLinkRequestPrivate(
    const APIGatewayRequest::Action action, DeleteVpcLinkRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpcLinkRequest
 * class' copy constructor.
 */
DeleteVpcLinkRequestPrivate::DeleteVpcLinkRequestPrivate(
    const DeleteVpcLinkRequestPrivate &other, DeleteVpcLinkRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
