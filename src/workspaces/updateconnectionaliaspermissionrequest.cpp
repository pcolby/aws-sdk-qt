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

#include "updateconnectionaliaspermissionrequest.h"
#include "updateconnectionaliaspermissionrequest_p.h"
#include "updateconnectionaliaspermissionresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::UpdateConnectionAliasPermissionRequest
 * \brief The UpdateConnectionAliasPermissionRequest class provides an interface for WorkSpaces UpdateConnectionAliasPermission requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::updateConnectionAliasPermission
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConnectionAliasPermissionRequest::UpdateConnectionAliasPermissionRequest(const UpdateConnectionAliasPermissionRequest &other)
    : WorkSpacesRequest(new UpdateConnectionAliasPermissionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConnectionAliasPermissionRequest object.
 */
UpdateConnectionAliasPermissionRequest::UpdateConnectionAliasPermissionRequest()
    : WorkSpacesRequest(new UpdateConnectionAliasPermissionRequestPrivate(WorkSpacesRequest::UpdateConnectionAliasPermissionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConnectionAliasPermissionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConnectionAliasPermissionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConnectionAliasPermissionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConnectionAliasPermissionResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::UpdateConnectionAliasPermissionRequestPrivate
 * \brief The UpdateConnectionAliasPermissionRequestPrivate class provides private implementation for UpdateConnectionAliasPermissionRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a UpdateConnectionAliasPermissionRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
UpdateConnectionAliasPermissionRequestPrivate::UpdateConnectionAliasPermissionRequestPrivate(
    const WorkSpacesRequest::Action action, UpdateConnectionAliasPermissionRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConnectionAliasPermissionRequest
 * class' copy constructor.
 */
UpdateConnectionAliasPermissionRequestPrivate::UpdateConnectionAliasPermissionRequestPrivate(
    const UpdateConnectionAliasPermissionRequestPrivate &other, UpdateConnectionAliasPermissionRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
