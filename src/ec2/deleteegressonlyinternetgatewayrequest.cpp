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

#include "deleteegressonlyinternetgatewayrequest.h"
#include "deleteegressonlyinternetgatewayrequest_p.h"
#include "deleteegressonlyinternetgatewayresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteEgressOnlyInternetGatewayRequest
 * \brief The DeleteEgressOnlyInternetGatewayRequest class provides an interface for EC2 DeleteEgressOnlyInternetGateway requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteEgressOnlyInternetGateway
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEgressOnlyInternetGatewayRequest::DeleteEgressOnlyInternetGatewayRequest(const DeleteEgressOnlyInternetGatewayRequest &other)
    : Ec2Request(new DeleteEgressOnlyInternetGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEgressOnlyInternetGatewayRequest object.
 */
DeleteEgressOnlyInternetGatewayRequest::DeleteEgressOnlyInternetGatewayRequest()
    : Ec2Request(new DeleteEgressOnlyInternetGatewayRequestPrivate(Ec2Request::DeleteEgressOnlyInternetGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEgressOnlyInternetGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEgressOnlyInternetGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEgressOnlyInternetGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEgressOnlyInternetGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DeleteEgressOnlyInternetGatewayRequestPrivate
 * \brief The DeleteEgressOnlyInternetGatewayRequestPrivate class provides private implementation for DeleteEgressOnlyInternetGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteEgressOnlyInternetGatewayRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DeleteEgressOnlyInternetGatewayRequestPrivate::DeleteEgressOnlyInternetGatewayRequestPrivate(
    const Ec2Request::Action action, DeleteEgressOnlyInternetGatewayRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEgressOnlyInternetGatewayRequest
 * class' copy constructor.
 */
DeleteEgressOnlyInternetGatewayRequestPrivate::DeleteEgressOnlyInternetGatewayRequestPrivate(
    const DeleteEgressOnlyInternetGatewayRequestPrivate &other, DeleteEgressOnlyInternetGatewayRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
