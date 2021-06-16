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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
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
