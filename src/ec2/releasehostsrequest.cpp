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

#include "releasehostsrequest.h"
#include "releasehostsrequest_p.h"
#include "releasehostsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ReleaseHostsRequest
 * \brief The ReleaseHostsRequest class provides an interface for EC2 ReleaseHosts requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::releaseHosts
 */

/*!
 * Constructs a copy of \a other.
 */
ReleaseHostsRequest::ReleaseHostsRequest(const ReleaseHostsRequest &other)
    : Ec2Request(new ReleaseHostsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ReleaseHostsRequest object.
 */
ReleaseHostsRequest::ReleaseHostsRequest()
    : Ec2Request(new ReleaseHostsRequestPrivate(Ec2Request::ReleaseHostsAction, this))
{

}

/*!
 * \reimp
 */
bool ReleaseHostsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ReleaseHostsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ReleaseHostsRequest::response(QNetworkReply * const reply) const
{
    return new ReleaseHostsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::ReleaseHostsRequestPrivate
 * \brief The ReleaseHostsRequestPrivate class provides private implementation for ReleaseHostsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ReleaseHostsRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
ReleaseHostsRequestPrivate::ReleaseHostsRequestPrivate(
    const Ec2Request::Action action, ReleaseHostsRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ReleaseHostsRequest
 * class' copy constructor.
 */
ReleaseHostsRequestPrivate::ReleaseHostsRequestPrivate(
    const ReleaseHostsRequestPrivate &other, ReleaseHostsRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
