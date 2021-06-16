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

#include "registerworkspacedirectoryrequest.h"
#include "registerworkspacedirectoryrequest_p.h"
#include "registerworkspacedirectoryresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::RegisterWorkspaceDirectoryRequest
 * \brief The RegisterWorkspaceDirectoryRequest class provides an interface for WorkSpaces RegisterWorkspaceDirectory requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::registerWorkspaceDirectory
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterWorkspaceDirectoryRequest::RegisterWorkspaceDirectoryRequest(const RegisterWorkspaceDirectoryRequest &other)
    : WorkSpacesRequest(new RegisterWorkspaceDirectoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterWorkspaceDirectoryRequest object.
 */
RegisterWorkspaceDirectoryRequest::RegisterWorkspaceDirectoryRequest()
    : WorkSpacesRequest(new RegisterWorkspaceDirectoryRequestPrivate(WorkSpacesRequest::RegisterWorkspaceDirectoryAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterWorkspaceDirectoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterWorkspaceDirectoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterWorkspaceDirectoryRequest::response(QNetworkReply * const reply) const
{
    return new RegisterWorkspaceDirectoryResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::RegisterWorkspaceDirectoryRequestPrivate
 * \brief The RegisterWorkspaceDirectoryRequestPrivate class provides private implementation for RegisterWorkspaceDirectoryRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a RegisterWorkspaceDirectoryRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
RegisterWorkspaceDirectoryRequestPrivate::RegisterWorkspaceDirectoryRequestPrivate(
    const WorkSpacesRequest::Action action, RegisterWorkspaceDirectoryRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterWorkspaceDirectoryRequest
 * class' copy constructor.
 */
RegisterWorkspaceDirectoryRequestPrivate::RegisterWorkspaceDirectoryRequestPrivate(
    const RegisterWorkspaceDirectoryRequestPrivate &other, RegisterWorkspaceDirectoryRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
