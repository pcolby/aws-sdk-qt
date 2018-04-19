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

#include "startworkspacesrequest.h"
#include "startworkspacesrequest_p.h"
#include "startworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::StartWorkspacesRequest
 * \brief The StartWorkspacesRequest class provides an interface for WorkSpaces StartWorkspaces requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::startWorkspaces
 */

/*!
 * Constructs a copy of \a other.
 */
StartWorkspacesRequest::StartWorkspacesRequest(const StartWorkspacesRequest &other)
    : WorkSpacesRequest(new StartWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartWorkspacesRequest object.
 */
StartWorkspacesRequest::StartWorkspacesRequest()
    : WorkSpacesRequest(new StartWorkspacesRequestPrivate(WorkSpacesRequest::StartWorkspacesAction, this))
{

}

/*!
 * \reimp
 */
bool StartWorkspacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartWorkspacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new StartWorkspacesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::StartWorkspacesRequestPrivate
 * \brief The StartWorkspacesRequestPrivate class provides private implementation for StartWorkspacesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 *
 * Constructs a StartWorkspacesRequestPrivate object for WorkSpaces \a action with,
 * public implementation \a q.
 */
StartWorkspacesRequestPrivate::StartWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, StartWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartWorkspacesRequest
 * class' copy constructor.
 */
StartWorkspacesRequestPrivate::StartWorkspacesRequestPrivate(
    const StartWorkspacesRequestPrivate &other, StartWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
