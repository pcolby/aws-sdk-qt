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

#include "createworkspacesrequest.h"
#include "createworkspacesrequest_p.h"
#include "createworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::CreateWorkspacesRequest
 * \brief The CreateWorkspacesRequest class provides an interface for WorkSpaces CreateWorkspaces requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::createWorkspaces
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkspacesRequest::CreateWorkspacesRequest(const CreateWorkspacesRequest &other)
    : WorkSpacesRequest(new CreateWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkspacesRequest object.
 */
CreateWorkspacesRequest::CreateWorkspacesRequest()
    : WorkSpacesRequest(new CreateWorkspacesRequestPrivate(WorkSpacesRequest::CreateWorkspacesAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkspacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkspacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkspacesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::CreateWorkspacesRequestPrivate
 * \brief The CreateWorkspacesRequestPrivate class provides private implementation for CreateWorkspacesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a CreateWorkspacesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
CreateWorkspacesRequestPrivate::CreateWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, CreateWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkspacesRequest
 * class' copy constructor.
 */
CreateWorkspacesRequestPrivate::CreateWorkspacesRequestPrivate(
    const CreateWorkspacesRequestPrivate &other, CreateWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
