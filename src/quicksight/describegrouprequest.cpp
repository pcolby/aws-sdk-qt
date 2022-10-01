// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegrouprequest.h"
#include "describegrouprequest_p.h"
#include "describegroupresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeGroupRequest
 * \brief The DescribeGroupRequest class provides an interface for QuickSight DescribeGroup requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGroupRequest::DescribeGroupRequest(const DescribeGroupRequest &other)
    : QuickSightRequest(new DescribeGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGroupRequest object.
 */
DescribeGroupRequest::DescribeGroupRequest()
    : QuickSightRequest(new DescribeGroupRequestPrivate(QuickSightRequest::DescribeGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGroupResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeGroupRequestPrivate
 * \brief The DescribeGroupRequestPrivate class provides private implementation for DescribeGroupRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeGroupRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeGroupRequestPrivate::DescribeGroupRequestPrivate(
    const QuickSightRequest::Action action, DescribeGroupRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeGroupRequest
 * class' copy constructor.
 */
DescribeGroupRequestPrivate::DescribeGroupRequestPrivate(
    const DescribeGroupRequestPrivate &other, DescribeGroupRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
