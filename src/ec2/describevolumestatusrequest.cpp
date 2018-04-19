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

#include "describevolumestatusrequest.h"
#include "describevolumestatusrequest_p.h"
#include "describevolumestatusresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVolumeStatusRequest
 * \brief The DescribeVolumeStatusRequest class provides an interface for EC2 DescribeVolumeStatus requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::describeVolumeStatus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeVolumeStatusRequest::DescribeVolumeStatusRequest(const DescribeVolumeStatusRequest &other)
    : EC2Request(new DescribeVolumeStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeVolumeStatusRequest object.
 */
DescribeVolumeStatusRequest::DescribeVolumeStatusRequest()
    : EC2Request(new DescribeVolumeStatusRequestPrivate(EC2Request::DescribeVolumeStatusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeVolumeStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeVolumeStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVolumeStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVolumeStatusResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeVolumeStatusRequestPrivate
 * \brief The DescribeVolumeStatusRequestPrivate class provides private implementation for DescribeVolumeStatusRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVolumeStatusRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
DescribeVolumeStatusRequestPrivate::DescribeVolumeStatusRequestPrivate(
    const EC2Request::Action action, DescribeVolumeStatusRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeVolumeStatusRequest
 * class' copy constructor.
 */
DescribeVolumeStatusRequestPrivate::DescribeVolumeStatusRequestPrivate(
    const DescribeVolumeStatusRequestPrivate &other, DescribeVolumeStatusRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
