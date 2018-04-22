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

#include "attachvolumerequest.h"
#include "attachvolumerequest_p.h"
#include "attachvolumeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AttachVolumeRequest
 * \brief The AttachVolumeRequest class provides an interface for EC2 AttachVolume requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::attachVolume
 */

/*!
 * Constructs a copy of \a other.
 */
AttachVolumeRequest::AttachVolumeRequest(const AttachVolumeRequest &other)
    : Ec2Request(new AttachVolumeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachVolumeRequest object.
 */
AttachVolumeRequest::AttachVolumeRequest()
    : Ec2Request(new AttachVolumeRequestPrivate(Ec2Request::AttachVolumeAction, this))
{

}

/*!
 * \reimp
 */
bool AttachVolumeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachVolumeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachVolumeRequest::response(QNetworkReply * const reply) const
{
    return new AttachVolumeResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::AttachVolumeRequestPrivate
 * \brief The AttachVolumeRequestPrivate class provides private implementation for AttachVolumeRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AttachVolumeRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
AttachVolumeRequestPrivate::AttachVolumeRequestPrivate(
    const Ec2Request::Action action, AttachVolumeRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachVolumeRequest
 * class' copy constructor.
 */
AttachVolumeRequestPrivate::AttachVolumeRequestPrivate(
    const AttachVolumeRequestPrivate &other, AttachVolumeRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
