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

#include "updateworkspacebundlerequest.h"
#include "updateworkspacebundlerequest_p.h"
#include "updateworkspacebundleresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::UpdateWorkspaceBundleRequest
 * \brief The UpdateWorkspaceBundleRequest class provides an interface for WorkSpaces UpdateWorkspaceBundle requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::updateWorkspaceBundle
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkspaceBundleRequest::UpdateWorkspaceBundleRequest(const UpdateWorkspaceBundleRequest &other)
    : WorkSpacesRequest(new UpdateWorkspaceBundleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkspaceBundleRequest object.
 */
UpdateWorkspaceBundleRequest::UpdateWorkspaceBundleRequest()
    : WorkSpacesRequest(new UpdateWorkspaceBundleRequestPrivate(WorkSpacesRequest::UpdateWorkspaceBundleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkspaceBundleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkspaceBundleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkspaceBundleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkspaceBundleResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::UpdateWorkspaceBundleRequestPrivate
 * \brief The UpdateWorkspaceBundleRequestPrivate class provides private implementation for UpdateWorkspaceBundleRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a UpdateWorkspaceBundleRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
UpdateWorkspaceBundleRequestPrivate::UpdateWorkspaceBundleRequestPrivate(
    const WorkSpacesRequest::Action action, UpdateWorkspaceBundleRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkspaceBundleRequest
 * class' copy constructor.
 */
UpdateWorkspaceBundleRequestPrivate::UpdateWorkspaceBundleRequestPrivate(
    const UpdateWorkspaceBundleRequestPrivate &other, UpdateWorkspaceBundleRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
