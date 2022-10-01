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

#include "describedashboardpermissionsrequest.h"
#include "describedashboardpermissionsrequest_p.h"
#include "describedashboardpermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeDashboardPermissionsRequest
 * \brief The DescribeDashboardPermissionsRequest class provides an interface for QuickSight DescribeDashboardPermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeDashboardPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDashboardPermissionsRequest::DescribeDashboardPermissionsRequest(const DescribeDashboardPermissionsRequest &other)
    : QuickSightRequest(new DescribeDashboardPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDashboardPermissionsRequest object.
 */
DescribeDashboardPermissionsRequest::DescribeDashboardPermissionsRequest()
    : QuickSightRequest(new DescribeDashboardPermissionsRequestPrivate(QuickSightRequest::DescribeDashboardPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDashboardPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDashboardPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDashboardPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDashboardPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeDashboardPermissionsRequestPrivate
 * \brief The DescribeDashboardPermissionsRequestPrivate class provides private implementation for DescribeDashboardPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeDashboardPermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeDashboardPermissionsRequestPrivate::DescribeDashboardPermissionsRequestPrivate(
    const QuickSightRequest::Action action, DescribeDashboardPermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDashboardPermissionsRequest
 * class' copy constructor.
 */
DescribeDashboardPermissionsRequestPrivate::DescribeDashboardPermissionsRequestPrivate(
    const DescribeDashboardPermissionsRequestPrivate &other, DescribeDashboardPermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
