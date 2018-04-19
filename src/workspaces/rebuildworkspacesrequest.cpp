/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "rebuildworkspacesrequest.h"
#include "rebuildworkspacesrequest_p.h"
#include "rebuildworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::RebuildWorkspacesRequest
 * \brief The RebuildWorkspacesRequest class provides an interface for WorkSpaces RebuildWorkspaces requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::rebuildWorkspaces
 */

/*!
 * Constructs a copy of \a other.
 */
RebuildWorkspacesRequest::RebuildWorkspacesRequest(const RebuildWorkspacesRequest &other)
    : WorkSpacesRequest(new RebuildWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RebuildWorkspacesRequest object.
 */
RebuildWorkspacesRequest::RebuildWorkspacesRequest()
    : WorkSpacesRequest(new RebuildWorkspacesRequestPrivate(WorkSpacesRequest::RebuildWorkspacesAction, this))
{

}

/*!
 * \reimp
 */
bool RebuildWorkspacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RebuildWorkspacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RebuildWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new RebuildWorkspacesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::RebuildWorkspacesRequestPrivate
 * \brief The RebuildWorkspacesRequestPrivate class provides private implementation for RebuildWorkspacesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 *
 * Constructs a RebuildWorkspacesRequestPrivate object for WorkSpaces \a action with,
 * public implementation \a q.
 */
RebuildWorkspacesRequestPrivate::RebuildWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, RebuildWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RebuildWorkspacesRequest
 * class' copy constructor.
 */
RebuildWorkspacesRequestPrivate::RebuildWorkspacesRequestPrivate(
    const RebuildWorkspacesRequestPrivate &other, RebuildWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
