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

#include "describeinterconnectsrequest.h"
#include "describeinterconnectsrequest_p.h"
#include "describeinterconnectsresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeInterconnectsRequest
 * \brief The DescribeInterconnectsRequest class provides an interface for DirectConnect DescribeInterconnects requests.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard 1 gigabit or 10 gigabit
 *  Ethernet fiber-optic cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router.
 *  With this connection in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon
 *  Elastic Compute Cloud (Amazon EC2) and Amazon Simple Storage Service (Amazon S3)) and to Amazon Virtual Private Cloud
 *  (Amazon VPC), bypassing Internet service providers in your network path. An AWS Direct Connect location provides access
 *  to AWS in the region it is associated with, as well as access to other US regions. For example, you can provision a
 *  single connection to any AWS Direct Connect location in the US and use it to access public AWS services in all US
 *  Regions and AWS GovCloud
 *
 * \sa DirectConnectClient::describeInterconnects
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInterconnectsRequest::DescribeInterconnectsRequest(const DescribeInterconnectsRequest &other)
    : DirectConnectRequest(new DescribeInterconnectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInterconnectsRequest object.
 */
DescribeInterconnectsRequest::DescribeInterconnectsRequest()
    : DirectConnectRequest(new DescribeInterconnectsRequestPrivate(DirectConnectRequest::DescribeInterconnectsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInterconnectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInterconnectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInterconnectsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInterconnectsResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DescribeInterconnectsRequestPrivate
 * \brief The DescribeInterconnectsRequestPrivate class provides private implementation for DescribeInterconnectsRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeInterconnectsRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DescribeInterconnectsRequestPrivate::DescribeInterconnectsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeInterconnectsRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInterconnectsRequest
 * class' copy constructor.
 */
DescribeInterconnectsRequestPrivate::DescribeInterconnectsRequestPrivate(
    const DescribeInterconnectsRequestPrivate &other, DescribeInterconnectsRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
