// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatethemepermissionsrequest.h"
#include "updatethemepermissionsrequest_p.h"
#include "updatethemepermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateThemePermissionsRequest
 * \brief The UpdateThemePermissionsRequest class provides an interface for QuickSight UpdateThemePermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateThemePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateThemePermissionsRequest::UpdateThemePermissionsRequest(const UpdateThemePermissionsRequest &other)
    : QuickSightRequest(new UpdateThemePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateThemePermissionsRequest object.
 */
UpdateThemePermissionsRequest::UpdateThemePermissionsRequest()
    : QuickSightRequest(new UpdateThemePermissionsRequestPrivate(QuickSightRequest::UpdateThemePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateThemePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateThemePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateThemePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThemePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateThemePermissionsRequestPrivate
 * \brief The UpdateThemePermissionsRequestPrivate class provides private implementation for UpdateThemePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateThemePermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateThemePermissionsRequestPrivate::UpdateThemePermissionsRequestPrivate(
    const QuickSightRequest::Action action, UpdateThemePermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateThemePermissionsRequest
 * class' copy constructor.
 */
UpdateThemePermissionsRequestPrivate::UpdateThemePermissionsRequestPrivate(
    const UpdateThemePermissionsRequestPrivate &other, UpdateThemePermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
