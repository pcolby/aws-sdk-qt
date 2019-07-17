/*
    Copyright 2013-2019 Paul Colby

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
 *  Amazon QuickSight is a fully managed, serverless, cloud business intelligence service that makes it easy to extend data
 *  and insights to every user in your organization. This API interface reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
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
