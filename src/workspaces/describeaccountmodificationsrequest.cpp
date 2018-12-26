/*
    Copyright 2013-2018 Paul Colby

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

#include "describeaccountmodificationsrequest.h"
#include "describeaccountmodificationsrequest_p.h"
#include "describeaccountmodificationsresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeAccountModificationsRequest
 * \brief The DescribeAccountModificationsRequest class provides an interface for WorkSpaces DescribeAccountModifications requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeAccountModifications
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccountModificationsRequest::DescribeAccountModificationsRequest(const DescribeAccountModificationsRequest &other)
    : WorkSpacesRequest(new DescribeAccountModificationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccountModificationsRequest object.
 */
DescribeAccountModificationsRequest::DescribeAccountModificationsRequest()
    : WorkSpacesRequest(new DescribeAccountModificationsRequestPrivate(WorkSpacesRequest::DescribeAccountModificationsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccountModificationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccountModificationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccountModificationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountModificationsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeAccountModificationsRequestPrivate
 * \brief The DescribeAccountModificationsRequestPrivate class provides private implementation for DescribeAccountModificationsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeAccountModificationsRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeAccountModificationsRequestPrivate::DescribeAccountModificationsRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeAccountModificationsRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountModificationsRequest
 * class' copy constructor.
 */
DescribeAccountModificationsRequestPrivate::DescribeAccountModificationsRequestPrivate(
    const DescribeAccountModificationsRequestPrivate &other, DescribeAccountModificationsRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
