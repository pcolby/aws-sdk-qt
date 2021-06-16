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

#include "terminateworkspacesrequest.h"
#include "terminateworkspacesrequest_p.h"
#include "terminateworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::TerminateWorkspacesRequest
 * \brief The TerminateWorkspacesRequest class provides an interface for WorkSpaces TerminateWorkspaces requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::terminateWorkspaces
 */

/*!
 * Constructs a copy of \a other.
 */
TerminateWorkspacesRequest::TerminateWorkspacesRequest(const TerminateWorkspacesRequest &other)
    : WorkSpacesRequest(new TerminateWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TerminateWorkspacesRequest object.
 */
TerminateWorkspacesRequest::TerminateWorkspacesRequest()
    : WorkSpacesRequest(new TerminateWorkspacesRequestPrivate(WorkSpacesRequest::TerminateWorkspacesAction, this))
{

}

/*!
 * \reimp
 */
bool TerminateWorkspacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TerminateWorkspacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TerminateWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new TerminateWorkspacesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::TerminateWorkspacesRequestPrivate
 * \brief The TerminateWorkspacesRequestPrivate class provides private implementation for TerminateWorkspacesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a TerminateWorkspacesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
TerminateWorkspacesRequestPrivate::TerminateWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, TerminateWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TerminateWorkspacesRequest
 * class' copy constructor.
 */
TerminateWorkspacesRequestPrivate::TerminateWorkspacesRequestPrivate(
    const TerminateWorkspacesRequestPrivate &other, TerminateWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
