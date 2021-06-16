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

#include "createworkspacebundlerequest.h"
#include "createworkspacebundlerequest_p.h"
#include "createworkspacebundleresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::CreateWorkspaceBundleRequest
 * \brief The CreateWorkspaceBundleRequest class provides an interface for WorkSpaces CreateWorkspaceBundle requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::createWorkspaceBundle
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkspaceBundleRequest::CreateWorkspaceBundleRequest(const CreateWorkspaceBundleRequest &other)
    : WorkSpacesRequest(new CreateWorkspaceBundleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkspaceBundleRequest object.
 */
CreateWorkspaceBundleRequest::CreateWorkspaceBundleRequest()
    : WorkSpacesRequest(new CreateWorkspaceBundleRequestPrivate(WorkSpacesRequest::CreateWorkspaceBundleAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkspaceBundleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkspaceBundleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkspaceBundleRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkspaceBundleResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::CreateWorkspaceBundleRequestPrivate
 * \brief The CreateWorkspaceBundleRequestPrivate class provides private implementation for CreateWorkspaceBundleRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a CreateWorkspaceBundleRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
CreateWorkspaceBundleRequestPrivate::CreateWorkspaceBundleRequestPrivate(
    const WorkSpacesRequest::Action action, CreateWorkspaceBundleRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkspaceBundleRequest
 * class' copy constructor.
 */
CreateWorkspaceBundleRequestPrivate::CreateWorkspaceBundleRequestPrivate(
    const CreateWorkspaceBundleRequestPrivate &other, CreateWorkspaceBundleRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
