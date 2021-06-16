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

#include "deleteworkspacebundlerequest.h"
#include "deleteworkspacebundlerequest_p.h"
#include "deleteworkspacebundleresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DeleteWorkspaceBundleRequest
 * \brief The DeleteWorkspaceBundleRequest class provides an interface for WorkSpaces DeleteWorkspaceBundle requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::deleteWorkspaceBundle
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkspaceBundleRequest::DeleteWorkspaceBundleRequest(const DeleteWorkspaceBundleRequest &other)
    : WorkSpacesRequest(new DeleteWorkspaceBundleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkspaceBundleRequest object.
 */
DeleteWorkspaceBundleRequest::DeleteWorkspaceBundleRequest()
    : WorkSpacesRequest(new DeleteWorkspaceBundleRequestPrivate(WorkSpacesRequest::DeleteWorkspaceBundleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkspaceBundleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkspaceBundleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkspaceBundleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkspaceBundleResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DeleteWorkspaceBundleRequestPrivate
 * \brief The DeleteWorkspaceBundleRequestPrivate class provides private implementation for DeleteWorkspaceBundleRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DeleteWorkspaceBundleRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DeleteWorkspaceBundleRequestPrivate::DeleteWorkspaceBundleRequestPrivate(
    const WorkSpacesRequest::Action action, DeleteWorkspaceBundleRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkspaceBundleRequest
 * class' copy constructor.
 */
DeleteWorkspaceBundleRequestPrivate::DeleteWorkspaceBundleRequestPrivate(
    const DeleteWorkspaceBundleRequestPrivate &other, DeleteWorkspaceBundleRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
