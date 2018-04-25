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

#include "describeinputsecuritygrouprequest.h"
#include "describeinputsecuritygrouprequest_p.h"
#include "describeinputsecuritygroupresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeInputSecurityGroupRequest
 * \brief The DescribeInputSecurityGroupRequest class provides an interface for MediaLive DescribeInputSecurityGroup requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeInputSecurityGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInputSecurityGroupRequest::DescribeInputSecurityGroupRequest(const DescribeInputSecurityGroupRequest &other)
    : MediaLiveRequest(new DescribeInputSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInputSecurityGroupRequest object.
 */
DescribeInputSecurityGroupRequest::DescribeInputSecurityGroupRequest()
    : MediaLiveRequest(new DescribeInputSecurityGroupRequestPrivate(MediaLiveRequest::DescribeInputSecurityGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInputSecurityGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInputSecurityGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInputSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInputSecurityGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DescribeInputSecurityGroupRequestPrivate
 * \brief The DescribeInputSecurityGroupRequestPrivate class provides private implementation for DescribeInputSecurityGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeInputSecurityGroupRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DescribeInputSecurityGroupRequestPrivate::DescribeInputSecurityGroupRequestPrivate(
    const MediaLiveRequest::Action action, DescribeInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInputSecurityGroupRequest
 * class' copy constructor.
 */
DescribeInputSecurityGroupRequestPrivate::DescribeInputSecurityGroupRequestPrivate(
    const DescribeInputSecurityGroupRequestPrivate &other, DescribeInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
