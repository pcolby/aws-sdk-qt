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

#include "describeworkspacebundlesrequest.h"
#include "describeworkspacebundlesrequest_p.h"
#include "describeworkspacebundlesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceBundlesRequest
 * \brief The DescribeWorkspaceBundlesRequest class provides an interface for WorkSpaces DescribeWorkspaceBundles requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::describeWorkspaceBundles
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkspaceBundlesRequest::DescribeWorkspaceBundlesRequest(const DescribeWorkspaceBundlesRequest &other)
    : WorkSpacesRequest(new DescribeWorkspaceBundlesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkspaceBundlesRequest object.
 */
DescribeWorkspaceBundlesRequest::DescribeWorkspaceBundlesRequest()
    : WorkSpacesRequest(new DescribeWorkspaceBundlesRequestPrivate(WorkSpacesRequest::DescribeWorkspaceBundlesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkspaceBundlesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkspaceBundlesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkspaceBundlesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspaceBundlesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceBundlesRequestPrivate
 * \brief The DescribeWorkspaceBundlesRequestPrivate class provides private implementation for DescribeWorkspaceBundlesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 *
 * Constructs a DescribeWorkspaceBundlesRequestPrivate object for WorkSpaces \a action with,
 * public implementation \a q.
 */
DescribeWorkspaceBundlesRequestPrivate::DescribeWorkspaceBundlesRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeWorkspaceBundlesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspaceBundlesRequest
 * class' copy constructor.
 */
DescribeWorkspaceBundlesRequestPrivate::DescribeWorkspaceBundlesRequestPrivate(
    const DescribeWorkspaceBundlesRequestPrivate &other, DescribeWorkspaceBundlesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
