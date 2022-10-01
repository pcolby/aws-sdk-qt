// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegroupmembershiprequest.h"
#include "describegroupmembershiprequest_p.h"
#include "describegroupmembershipresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeGroupMembershipRequest
 * \brief The DescribeGroupMembershipRequest class provides an interface for QuickSight DescribeGroupMembership requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeGroupMembership
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGroupMembershipRequest::DescribeGroupMembershipRequest(const DescribeGroupMembershipRequest &other)
    : QuickSightRequest(new DescribeGroupMembershipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGroupMembershipRequest object.
 */
DescribeGroupMembershipRequest::DescribeGroupMembershipRequest()
    : QuickSightRequest(new DescribeGroupMembershipRequestPrivate(QuickSightRequest::DescribeGroupMembershipAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeGroupMembershipRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeGroupMembershipResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGroupMembershipRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGroupMembershipResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeGroupMembershipRequestPrivate
 * \brief The DescribeGroupMembershipRequestPrivate class provides private implementation for DescribeGroupMembershipRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeGroupMembershipRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeGroupMembershipRequestPrivate::DescribeGroupMembershipRequestPrivate(
    const QuickSightRequest::Action action, DescribeGroupMembershipRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeGroupMembershipRequest
 * class' copy constructor.
 */
DescribeGroupMembershipRequestPrivate::DescribeGroupMembershipRequestPrivate(
    const DescribeGroupMembershipRequestPrivate &other, DescribeGroupMembershipRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
