/*
    Copyright 2013-2021 Paul Colby

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

#include "describedatasetrequest.h"
#include "describedatasetrequest_p.h"
#include "describedatasetresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeDataSetRequest
 * \brief The DescribeDataSetRequest class provides an interface for QuickSight DescribeDataSet requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeDataSet
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDataSetRequest::DescribeDataSetRequest(const DescribeDataSetRequest &other)
    : QuickSightRequest(new DescribeDataSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDataSetRequest object.
 */
DescribeDataSetRequest::DescribeDataSetRequest()
    : QuickSightRequest(new DescribeDataSetRequestPrivate(QuickSightRequest::DescribeDataSetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDataSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDataSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDataSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDataSetResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeDataSetRequestPrivate
 * \brief The DescribeDataSetRequestPrivate class provides private implementation for DescribeDataSetRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeDataSetRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeDataSetRequestPrivate::DescribeDataSetRequestPrivate(
    const QuickSightRequest::Action action, DescribeDataSetRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDataSetRequest
 * class' copy constructor.
 */
DescribeDataSetRequestPrivate::DescribeDataSetRequestPrivate(
    const DescribeDataSetRequestPrivate &other, DescribeDataSetRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
