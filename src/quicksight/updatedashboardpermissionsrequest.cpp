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

#include "updatedashboardpermissionsrequest.h"
#include "updatedashboardpermissionsrequest_p.h"
#include "updatedashboardpermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDashboardPermissionsRequest
 * \brief The UpdateDashboardPermissionsRequest class provides an interface for QuickSight UpdateDashboardPermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDashboardPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDashboardPermissionsRequest::UpdateDashboardPermissionsRequest(const UpdateDashboardPermissionsRequest &other)
    : QuickSightRequest(new UpdateDashboardPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDashboardPermissionsRequest object.
 */
UpdateDashboardPermissionsRequest::UpdateDashboardPermissionsRequest()
    : QuickSightRequest(new UpdateDashboardPermissionsRequestPrivate(QuickSightRequest::UpdateDashboardPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDashboardPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDashboardPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDashboardPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDashboardPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateDashboardPermissionsRequestPrivate
 * \brief The UpdateDashboardPermissionsRequestPrivate class provides private implementation for UpdateDashboardPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDashboardPermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateDashboardPermissionsRequestPrivate::UpdateDashboardPermissionsRequestPrivate(
    const QuickSightRequest::Action action, UpdateDashboardPermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDashboardPermissionsRequest
 * class' copy constructor.
 */
UpdateDashboardPermissionsRequestPrivate::UpdateDashboardPermissionsRequestPrivate(
    const UpdateDashboardPermissionsRequestPrivate &other, UpdateDashboardPermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
