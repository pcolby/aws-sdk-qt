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

#include "associateroutetablerequest.h"
#include "associateroutetablerequest_p.h"
#include "associateroutetableresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AssociateRouteTableRequest
 * \brief The AssociateRouteTableRequest class provides an interface for EC2 AssociateRouteTable requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::associateRouteTable
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateRouteTableRequest::AssociateRouteTableRequest(const AssociateRouteTableRequest &other)
    : EC2Request(new AssociateRouteTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateRouteTableRequest object.
 */
AssociateRouteTableRequest::AssociateRouteTableRequest()
    : EC2Request(new AssociateRouteTableRequestPrivate(EC2Request::AssociateRouteTableAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateRouteTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateRouteTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateRouteTableRequest::response(QNetworkReply * const reply) const
{
    return new AssociateRouteTableResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::AssociateRouteTableRequestPrivate
 * \brief The AssociateRouteTableRequestPrivate class provides private implementation for AssociateRouteTableRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AssociateRouteTableRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
AssociateRouteTableRequestPrivate::AssociateRouteTableRequestPrivate(
    const EC2Request::Action action, AssociateRouteTableRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateRouteTableRequest
 * class' copy constructor.
 */
AssociateRouteTableRequestPrivate::AssociateRouteTableRequestPrivate(
    const AssociateRouteTableRequestPrivate &other, AssociateRouteTableRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
