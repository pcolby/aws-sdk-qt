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

#include "copyworkspaceimagerequest.h"
#include "copyworkspaceimagerequest_p.h"
#include "copyworkspaceimageresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::CopyWorkspaceImageRequest
 * \brief The CopyWorkspaceImageRequest class provides an interface for WorkSpaces CopyWorkspaceImage requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::copyWorkspaceImage
 */

/*!
 * Constructs a copy of \a other.
 */
CopyWorkspaceImageRequest::CopyWorkspaceImageRequest(const CopyWorkspaceImageRequest &other)
    : WorkSpacesRequest(new CopyWorkspaceImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopyWorkspaceImageRequest object.
 */
CopyWorkspaceImageRequest::CopyWorkspaceImageRequest()
    : WorkSpacesRequest(new CopyWorkspaceImageRequestPrivate(WorkSpacesRequest::CopyWorkspaceImageAction, this))
{

}

/*!
 * \reimp
 */
bool CopyWorkspaceImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopyWorkspaceImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyWorkspaceImageRequest::response(QNetworkReply * const reply) const
{
    return new CopyWorkspaceImageResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::CopyWorkspaceImageRequestPrivate
 * \brief The CopyWorkspaceImageRequestPrivate class provides private implementation for CopyWorkspaceImageRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a CopyWorkspaceImageRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
CopyWorkspaceImageRequestPrivate::CopyWorkspaceImageRequestPrivate(
    const WorkSpacesRequest::Action action, CopyWorkspaceImageRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopyWorkspaceImageRequest
 * class' copy constructor.
 */
CopyWorkspaceImageRequestPrivate::CopyWorkspaceImageRequestPrivate(
    const CopyWorkspaceImageRequestPrivate &other, CopyWorkspaceImageRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
