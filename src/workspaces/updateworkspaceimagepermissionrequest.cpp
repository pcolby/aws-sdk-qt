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

#include "updateworkspaceimagepermissionrequest.h"
#include "updateworkspaceimagepermissionrequest_p.h"
#include "updateworkspaceimagepermissionresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::UpdateWorkspaceImagePermissionRequest
 * \brief The UpdateWorkspaceImagePermissionRequest class provides an interface for WorkSpaces UpdateWorkspaceImagePermission requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::updateWorkspaceImagePermission
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkspaceImagePermissionRequest::UpdateWorkspaceImagePermissionRequest(const UpdateWorkspaceImagePermissionRequest &other)
    : WorkSpacesRequest(new UpdateWorkspaceImagePermissionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkspaceImagePermissionRequest object.
 */
UpdateWorkspaceImagePermissionRequest::UpdateWorkspaceImagePermissionRequest()
    : WorkSpacesRequest(new UpdateWorkspaceImagePermissionRequestPrivate(WorkSpacesRequest::UpdateWorkspaceImagePermissionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkspaceImagePermissionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkspaceImagePermissionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkspaceImagePermissionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkspaceImagePermissionResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::UpdateWorkspaceImagePermissionRequestPrivate
 * \brief The UpdateWorkspaceImagePermissionRequestPrivate class provides private implementation for UpdateWorkspaceImagePermissionRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a UpdateWorkspaceImagePermissionRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
UpdateWorkspaceImagePermissionRequestPrivate::UpdateWorkspaceImagePermissionRequestPrivate(
    const WorkSpacesRequest::Action action, UpdateWorkspaceImagePermissionRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkspaceImagePermissionRequest
 * class' copy constructor.
 */
UpdateWorkspaceImagePermissionRequestPrivate::UpdateWorkspaceImagePermissionRequestPrivate(
    const UpdateWorkspaceImagePermissionRequestPrivate &other, UpdateWorkspaceImagePermissionRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
