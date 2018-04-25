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

#include "deletenatgatewayrequest.h"
#include "deletenatgatewayrequest_p.h"
#include "deletenatgatewayresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteNatGatewayRequest
 * \brief The DeleteNatGatewayRequest class provides an interface for EC2 DeleteNatGateway requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteNatGateway
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNatGatewayRequest::DeleteNatGatewayRequest(const DeleteNatGatewayRequest &other)
    : Ec2Request(new DeleteNatGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNatGatewayRequest object.
 */
DeleteNatGatewayRequest::DeleteNatGatewayRequest()
    : Ec2Request(new DeleteNatGatewayRequestPrivate(Ec2Request::DeleteNatGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNatGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNatGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNatGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNatGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DeleteNatGatewayRequestPrivate
 * \brief The DeleteNatGatewayRequestPrivate class provides private implementation for DeleteNatGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteNatGatewayRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DeleteNatGatewayRequestPrivate::DeleteNatGatewayRequestPrivate(
    const Ec2Request::Action action, DeleteNatGatewayRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNatGatewayRequest
 * class' copy constructor.
 */
DeleteNatGatewayRequestPrivate::DeleteNatGatewayRequestPrivate(
    const DeleteNatGatewayRequestPrivate &other, DeleteNatGatewayRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
