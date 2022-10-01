// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
