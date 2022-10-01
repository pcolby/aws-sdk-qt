// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasourcepermissionsrequest.h"
#include "describedatasourcepermissionsrequest_p.h"
#include "describedatasourcepermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeDataSourcePermissionsRequest
 * \brief The DescribeDataSourcePermissionsRequest class provides an interface for QuickSight DescribeDataSourcePermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeDataSourcePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDataSourcePermissionsRequest::DescribeDataSourcePermissionsRequest(const DescribeDataSourcePermissionsRequest &other)
    : QuickSightRequest(new DescribeDataSourcePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDataSourcePermissionsRequest object.
 */
DescribeDataSourcePermissionsRequest::DescribeDataSourcePermissionsRequest()
    : QuickSightRequest(new DescribeDataSourcePermissionsRequestPrivate(QuickSightRequest::DescribeDataSourcePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDataSourcePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDataSourcePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDataSourcePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDataSourcePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeDataSourcePermissionsRequestPrivate
 * \brief The DescribeDataSourcePermissionsRequestPrivate class provides private implementation for DescribeDataSourcePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeDataSourcePermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeDataSourcePermissionsRequestPrivate::DescribeDataSourcePermissionsRequestPrivate(
    const QuickSightRequest::Action action, DescribeDataSourcePermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDataSourcePermissionsRequest
 * class' copy constructor.
 */
DescribeDataSourcePermissionsRequestPrivate::DescribeDataSourcePermissionsRequestPrivate(
    const DescribeDataSourcePermissionsRequestPrivate &other, DescribeDataSourcePermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
