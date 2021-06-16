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

#include "modifyworkspacestaterequest.h"
#include "modifyworkspacestaterequest_p.h"
#include "modifyworkspacestateresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceStateRequest
 * \brief The ModifyWorkspaceStateRequest class provides an interface for WorkSpaces ModifyWorkspaceState requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::modifyWorkspaceState
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyWorkspaceStateRequest::ModifyWorkspaceStateRequest(const ModifyWorkspaceStateRequest &other)
    : WorkSpacesRequest(new ModifyWorkspaceStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyWorkspaceStateRequest object.
 */
ModifyWorkspaceStateRequest::ModifyWorkspaceStateRequest()
    : WorkSpacesRequest(new ModifyWorkspaceStateRequestPrivate(WorkSpacesRequest::ModifyWorkspaceStateAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyWorkspaceStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyWorkspaceStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyWorkspaceStateRequest::response(QNetworkReply * const reply) const
{
    return new ModifyWorkspaceStateResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceStateRequestPrivate
 * \brief The ModifyWorkspaceStateRequestPrivate class provides private implementation for ModifyWorkspaceStateRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyWorkspaceStateRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
ModifyWorkspaceStateRequestPrivate::ModifyWorkspaceStateRequestPrivate(
    const WorkSpacesRequest::Action action, ModifyWorkspaceStateRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyWorkspaceStateRequest
 * class' copy constructor.
 */
ModifyWorkspaceStateRequestPrivate::ModifyWorkspaceStateRequestPrivate(
    const ModifyWorkspaceStateRequestPrivate &other, ModifyWorkspaceStateRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
