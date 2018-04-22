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

#include "describevolumeattributerequest.h"
#include "describevolumeattributerequest_p.h"
#include "describevolumeattributeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVolumeAttributeRequest
 * \brief The DescribeVolumeAttributeRequest class provides an interface for EC2 DescribeVolumeAttribute requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeVolumeAttribute
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeVolumeAttributeRequest::DescribeVolumeAttributeRequest(const DescribeVolumeAttributeRequest &other)
    : Ec2Request(new DescribeVolumeAttributeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeVolumeAttributeRequest object.
 */
DescribeVolumeAttributeRequest::DescribeVolumeAttributeRequest()
    : Ec2Request(new DescribeVolumeAttributeRequestPrivate(Ec2Request::DescribeVolumeAttributeAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeVolumeAttributeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeVolumeAttributeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVolumeAttributeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVolumeAttributeResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeVolumeAttributeRequestPrivate
 * \brief The DescribeVolumeAttributeRequestPrivate class provides private implementation for DescribeVolumeAttributeRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVolumeAttributeRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribeVolumeAttributeRequestPrivate::DescribeVolumeAttributeRequestPrivate(
    const Ec2Request::Action action, DescribeVolumeAttributeRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeVolumeAttributeRequest
 * class' copy constructor.
 */
DescribeVolumeAttributeRequestPrivate::DescribeVolumeAttributeRequestPrivate(
    const DescribeVolumeAttributeRequestPrivate &other, DescribeVolumeAttributeRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
