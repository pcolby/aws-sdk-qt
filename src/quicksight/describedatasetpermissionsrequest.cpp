// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasetpermissionsrequest.h"
#include "describedatasetpermissionsrequest_p.h"
#include "describedatasetpermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeDataSetPermissionsRequest
 * \brief The DescribeDataSetPermissionsRequest class provides an interface for QuickSight DescribeDataSetPermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeDataSetPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDataSetPermissionsRequest::DescribeDataSetPermissionsRequest(const DescribeDataSetPermissionsRequest &other)
    : QuickSightRequest(new DescribeDataSetPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDataSetPermissionsRequest object.
 */
DescribeDataSetPermissionsRequest::DescribeDataSetPermissionsRequest()
    : QuickSightRequest(new DescribeDataSetPermissionsRequestPrivate(QuickSightRequest::DescribeDataSetPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDataSetPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDataSetPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDataSetPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDataSetPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeDataSetPermissionsRequestPrivate
 * \brief The DescribeDataSetPermissionsRequestPrivate class provides private implementation for DescribeDataSetPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeDataSetPermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeDataSetPermissionsRequestPrivate::DescribeDataSetPermissionsRequestPrivate(
    const QuickSightRequest::Action action, DescribeDataSetPermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDataSetPermissionsRequest
 * class' copy constructor.
 */
DescribeDataSetPermissionsRequestPrivate::DescribeDataSetPermissionsRequestPrivate(
    const DescribeDataSetPermissionsRequestPrivate &other, DescribeDataSetPermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
