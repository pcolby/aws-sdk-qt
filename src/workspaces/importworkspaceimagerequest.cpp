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

#include "importworkspaceimagerequest.h"
#include "importworkspaceimagerequest_p.h"
#include "importworkspaceimageresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ImportWorkspaceImageRequest
 * \brief The ImportWorkspaceImageRequest class provides an interface for WorkSpaces ImportWorkspaceImage requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::importWorkspaceImage
 */

/*!
 * Constructs a copy of \a other.
 */
ImportWorkspaceImageRequest::ImportWorkspaceImageRequest(const ImportWorkspaceImageRequest &other)
    : WorkSpacesRequest(new ImportWorkspaceImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportWorkspaceImageRequest object.
 */
ImportWorkspaceImageRequest::ImportWorkspaceImageRequest()
    : WorkSpacesRequest(new ImportWorkspaceImageRequestPrivate(WorkSpacesRequest::ImportWorkspaceImageAction, this))
{

}

/*!
 * \reimp
 */
bool ImportWorkspaceImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportWorkspaceImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportWorkspaceImageRequest::response(QNetworkReply * const reply) const
{
    return new ImportWorkspaceImageResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::ImportWorkspaceImageRequestPrivate
 * \brief The ImportWorkspaceImageRequestPrivate class provides private implementation for ImportWorkspaceImageRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ImportWorkspaceImageRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
ImportWorkspaceImageRequestPrivate::ImportWorkspaceImageRequestPrivate(
    const WorkSpacesRequest::Action action, ImportWorkspaceImageRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportWorkspaceImageRequest
 * class' copy constructor.
 */
ImportWorkspaceImageRequestPrivate::ImportWorkspaceImageRequestPrivate(
    const ImportWorkspaceImageRequestPrivate &other, ImportWorkspaceImageRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
