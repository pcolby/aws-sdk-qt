/*
    Copyright 2013-2020 Paul Colby

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

#include "describepackaginggrouprequest.h"
#include "describepackaginggrouprequest_p.h"
#include "describepackaginggroupresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::DescribePackagingGroupRequest
 * \brief The DescribePackagingGroupRequest class provides an interface for MediaPackageVod DescribePackagingGroup requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::describePackagingGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePackagingGroupRequest::DescribePackagingGroupRequest(const DescribePackagingGroupRequest &other)
    : MediaPackageVodRequest(new DescribePackagingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePackagingGroupRequest object.
 */
DescribePackagingGroupRequest::DescribePackagingGroupRequest()
    : MediaPackageVodRequest(new DescribePackagingGroupRequestPrivate(MediaPackageVodRequest::DescribePackagingGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePackagingGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePackagingGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePackagingGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribePackagingGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::DescribePackagingGroupRequestPrivate
 * \brief The DescribePackagingGroupRequestPrivate class provides private implementation for DescribePackagingGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a DescribePackagingGroupRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
DescribePackagingGroupRequestPrivate::DescribePackagingGroupRequestPrivate(
    const MediaPackageVodRequest::Action action, DescribePackagingGroupRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePackagingGroupRequest
 * class' copy constructor.
 */
DescribePackagingGroupRequestPrivate::DescribePackagingGroupRequestPrivate(
    const DescribePackagingGroupRequestPrivate &other, DescribePackagingGroupRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
