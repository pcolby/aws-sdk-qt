/*
    Copyright 2013-2020 Paul Colby

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

#include "describetagsrequest.h"
#include "describetagsrequest_p.h"
#include "describetagsresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeTagsRequest
 * \brief The DescribeTagsRequest class provides an interface for WorkSpaces DescribeTags requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeTags
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTagsRequest::DescribeTagsRequest(const DescribeTagsRequest &other)
    : WorkSpacesRequest(new DescribeTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTagsRequest object.
 */
DescribeTagsRequest::DescribeTagsRequest()
    : WorkSpacesRequest(new DescribeTagsRequestPrivate(WorkSpacesRequest::DescribeTagsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTagsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTagsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeTagsRequestPrivate
 * \brief The DescribeTagsRequestPrivate class provides private implementation for DescribeTagsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeTagsRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeTagsRequestPrivate::DescribeTagsRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeTagsRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTagsRequest
 * class' copy constructor.
 */
DescribeTagsRequestPrivate::DescribeTagsRequestPrivate(
    const DescribeTagsRequestPrivate &other, DescribeTagsRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
