/*
    Copyright 2013-2019 Paul Colby

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

#include "stopworkspacesrequest.h"
#include "stopworkspacesrequest_p.h"
#include "stopworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::StopWorkspacesRequest
 * \brief The StopWorkspacesRequest class provides an interface for WorkSpaces StopWorkspaces requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::stopWorkspaces
 */

/*!
 * Constructs a copy of \a other.
 */
StopWorkspacesRequest::StopWorkspacesRequest(const StopWorkspacesRequest &other)
    : WorkSpacesRequest(new StopWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopWorkspacesRequest object.
 */
StopWorkspacesRequest::StopWorkspacesRequest()
    : WorkSpacesRequest(new StopWorkspacesRequestPrivate(WorkSpacesRequest::StopWorkspacesAction, this))
{

}

/*!
 * \reimp
 */
bool StopWorkspacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopWorkspacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new StopWorkspacesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::StopWorkspacesRequestPrivate
 * \brief The StopWorkspacesRequestPrivate class provides private implementation for StopWorkspacesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a StopWorkspacesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
StopWorkspacesRequestPrivate::StopWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, StopWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopWorkspacesRequest
 * class' copy constructor.
 */
StopWorkspacesRequestPrivate::StopWorkspacesRequestPrivate(
    const StopWorkspacesRequestPrivate &other, StopWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
