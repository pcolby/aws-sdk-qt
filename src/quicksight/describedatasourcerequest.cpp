// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
