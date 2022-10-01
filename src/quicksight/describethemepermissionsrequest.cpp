// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describethemepermissionsrequest.h"
#include "describethemepermissionsrequest_p.h"
#include "describethemepermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeThemePermissionsRequest
 * \brief The DescribeThemePermissionsRequest class provides an interface for QuickSight DescribeThemePermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeThemePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeThemePermissionsRequest::DescribeThemePermissionsRequest(const DescribeThemePermissionsRequest &other)
    : QuickSightRequest(new DescribeThemePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeThemePermissionsRequest object.
 */
DescribeThemePermissionsRequest::DescribeThemePermissionsRequest()
    : QuickSightRequest(new DescribeThemePermissionsRequestPrivate(QuickSightRequest::DescribeThemePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeThemePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeThemePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeThemePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeThemePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeThemePermissionsRequestPrivate
 * \brief The DescribeThemePermissionsRequestPrivate class provides private implementation for DescribeThemePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeThemePermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeThemePermissionsRequestPrivate::DescribeThemePermissionsRequestPrivate(
    const QuickSightRequest::Action action, DescribeThemePermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeThemePermissionsRequest
 * class' copy constructor.
 */
DescribeThemePermissionsRequestPrivate::DescribeThemePermissionsRequestPrivate(
    const DescribeThemePermissionsRequestPrivate &other, DescribeThemePermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
