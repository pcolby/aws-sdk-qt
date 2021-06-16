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

#include "deleteworkspaceimagerequest.h"
#include "deleteworkspaceimagerequest_p.h"
#include "deleteworkspaceimageresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DeleteWorkspaceImageRequest
 * \brief The DeleteWorkspaceImageRequest class provides an interface for WorkSpaces DeleteWorkspaceImage requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::deleteWorkspaceImage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkspaceImageRequest::DeleteWorkspaceImageRequest(const DeleteWorkspaceImageRequest &other)
    : WorkSpacesRequest(new DeleteWorkspaceImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkspaceImageRequest object.
 */
DeleteWorkspaceImageRequest::DeleteWorkspaceImageRequest()
    : WorkSpacesRequest(new DeleteWorkspaceImageRequestPrivate(WorkSpacesRequest::DeleteWorkspaceImageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkspaceImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkspaceImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkspaceImageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkspaceImageResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DeleteWorkspaceImageRequestPrivate
 * \brief The DeleteWorkspaceImageRequestPrivate class provides private implementation for DeleteWorkspaceImageRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DeleteWorkspaceImageRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DeleteWorkspaceImageRequestPrivate::DeleteWorkspaceImageRequestPrivate(
    const WorkSpacesRequest::Action action, DeleteWorkspaceImageRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkspaceImageRequest
 * class' copy constructor.
 */
DeleteWorkspaceImageRequestPrivate::DeleteWorkspaceImageRequestPrivate(
    const DeleteWorkspaceImageRequestPrivate &other, DeleteWorkspaceImageRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
