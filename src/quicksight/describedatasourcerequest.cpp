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

#include "describedatasourcerequest.h"
#include "describedatasourcerequest_p.h"
#include "describedatasourceresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeDataSourceRequest
 * \brief The DescribeDataSourceRequest class provides an interface for QuickSight DescribeDataSource requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDataSourceRequest::DescribeDataSourceRequest(const DescribeDataSourceRequest &other)
    : QuickSightRequest(new DescribeDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDataSourceRequest object.
 */
DescribeDataSourceRequest::DescribeDataSourceRequest()
    : QuickSightRequest(new DescribeDataSourceRequestPrivate(QuickSightRequest::DescribeDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeDataSourceRequestPrivate
 * \brief The DescribeDataSourceRequestPrivate class provides private implementation for DescribeDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeDataSourceRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeDataSourceRequestPrivate::DescribeDataSourceRequestPrivate(
    const QuickSightRequest::Action action, DescribeDataSourceRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDataSourceRequest
 * class' copy constructor.
 */
DescribeDataSourceRequestPrivate::DescribeDataSourceRequestPrivate(
    const DescribeDataSourceRequestPrivate &other, DescribeDataSourceRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
