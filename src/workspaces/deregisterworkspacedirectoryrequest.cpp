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

#include "deregisterworkspacedirectoryrequest.h"
#include "deregisterworkspacedirectoryrequest_p.h"
#include "deregisterworkspacedirectoryresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DeregisterWorkspaceDirectoryRequest
 * \brief The DeregisterWorkspaceDirectoryRequest class provides an interface for WorkSpaces DeregisterWorkspaceDirectory requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::deregisterWorkspaceDirectory
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterWorkspaceDirectoryRequest::DeregisterWorkspaceDirectoryRequest(const DeregisterWorkspaceDirectoryRequest &other)
    : WorkSpacesRequest(new DeregisterWorkspaceDirectoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterWorkspaceDirectoryRequest object.
 */
DeregisterWorkspaceDirectoryRequest::DeregisterWorkspaceDirectoryRequest()
    : WorkSpacesRequest(new DeregisterWorkspaceDirectoryRequestPrivate(WorkSpacesRequest::DeregisterWorkspaceDirectoryAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterWorkspaceDirectoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterWorkspaceDirectoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterWorkspaceDirectoryRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterWorkspaceDirectoryResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DeregisterWorkspaceDirectoryRequestPrivate
 * \brief The DeregisterWorkspaceDirectoryRequestPrivate class provides private implementation for DeregisterWorkspaceDirectoryRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DeregisterWorkspaceDirectoryRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DeregisterWorkspaceDirectoryRequestPrivate::DeregisterWorkspaceDirectoryRequestPrivate(
    const WorkSpacesRequest::Action action, DeregisterWorkspaceDirectoryRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterWorkspaceDirectoryRequest
 * class' copy constructor.
 */
DeregisterWorkspaceDirectoryRequestPrivate::DeregisterWorkspaceDirectoryRequestPrivate(
    const DeregisterWorkspaceDirectoryRequestPrivate &other, DeregisterWorkspaceDirectoryRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
