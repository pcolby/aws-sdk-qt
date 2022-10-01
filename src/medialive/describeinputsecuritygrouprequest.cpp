// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
