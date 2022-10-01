// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
