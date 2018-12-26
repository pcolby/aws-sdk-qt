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

#include "describeuserrequest.h"
#include "describeuserrequest_p.h"
#include "describeuserresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeUserRequest
 * \brief The DescribeUserRequest class provides an interface for QuickSight DescribeUser requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless, cloud business intelligence service that makes it easy to extend data
 *  and insights to every user in your organization. This API interface reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeUser
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUserRequest::DescribeUserRequest(const DescribeUserRequest &other)
    : QuickSightRequest(new DescribeUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUserRequest object.
 */
DescribeUserRequest::DescribeUserRequest()
    : QuickSightRequest(new DescribeUserRequestPrivate(QuickSightRequest::DescribeUserAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUserRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeUserRequestPrivate
 * \brief The DescribeUserRequestPrivate class provides private implementation for DescribeUserRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeUserRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeUserRequestPrivate::DescribeUserRequestPrivate(
    const QuickSightRequest::Action action, DescribeUserRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserRequest
 * class' copy constructor.
 */
DescribeUserRequestPrivate::DescribeUserRequestPrivate(
    const DescribeUserRequestPrivate &other, DescribeUserRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
