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

#include "updatefolderpermissionsrequest.h"
#include "updatefolderpermissionsrequest_p.h"
#include "updatefolderpermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateFolderPermissionsRequest
 * \brief The UpdateFolderPermissionsRequest class provides an interface for QuickSight UpdateFolderPermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateFolderPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFolderPermissionsRequest::UpdateFolderPermissionsRequest(const UpdateFolderPermissionsRequest &other)
    : QuickSightRequest(new UpdateFolderPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFolderPermissionsRequest object.
 */
UpdateFolderPermissionsRequest::UpdateFolderPermissionsRequest()
    : QuickSightRequest(new UpdateFolderPermissionsRequestPrivate(QuickSightRequest::UpdateFolderPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFolderPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFolderPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFolderPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFolderPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateFolderPermissionsRequestPrivate
 * \brief The UpdateFolderPermissionsRequestPrivate class provides private implementation for UpdateFolderPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateFolderPermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateFolderPermissionsRequestPrivate::UpdateFolderPermissionsRequestPrivate(
    const QuickSightRequest::Action action, UpdateFolderPermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFolderPermissionsRequest
 * class' copy constructor.
 */
UpdateFolderPermissionsRequestPrivate::UpdateFolderPermissionsRequestPrivate(
    const UpdateFolderPermissionsRequestPrivate &other, UpdateFolderPermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
