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

#include "describeworkspaceimagesrequest.h"
#include "describeworkspaceimagesrequest_p.h"
#include "describeworkspaceimagesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceImagesRequest
 * \brief The DescribeWorkspaceImagesRequest class provides an interface for WorkSpaces DescribeWorkspaceImages requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeWorkspaceImages
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkspaceImagesRequest::DescribeWorkspaceImagesRequest(const DescribeWorkspaceImagesRequest &other)
    : WorkSpacesRequest(new DescribeWorkspaceImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkspaceImagesRequest object.
 */
DescribeWorkspaceImagesRequest::DescribeWorkspaceImagesRequest()
    : WorkSpacesRequest(new DescribeWorkspaceImagesRequestPrivate(WorkSpacesRequest::DescribeWorkspaceImagesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkspaceImagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkspaceImagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkspaceImagesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspaceImagesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceImagesRequestPrivate
 * \brief The DescribeWorkspaceImagesRequestPrivate class provides private implementation for DescribeWorkspaceImagesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeWorkspaceImagesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeWorkspaceImagesRequestPrivate::DescribeWorkspaceImagesRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeWorkspaceImagesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspaceImagesRequest
 * class' copy constructor.
 */
DescribeWorkspaceImagesRequestPrivate::DescribeWorkspaceImagesRequestPrivate(
    const DescribeWorkspaceImagesRequestPrivate &other, DescribeWorkspaceImagesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
