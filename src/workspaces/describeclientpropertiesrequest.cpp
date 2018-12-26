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

#include "describeclientpropertiesrequest.h"
#include "describeclientpropertiesrequest_p.h"
#include "describeclientpropertiesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeClientPropertiesRequest
 * \brief The DescribeClientPropertiesRequest class provides an interface for WorkSpaces DescribeClientProperties requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeClientProperties
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeClientPropertiesRequest::DescribeClientPropertiesRequest(const DescribeClientPropertiesRequest &other)
    : WorkSpacesRequest(new DescribeClientPropertiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeClientPropertiesRequest object.
 */
DescribeClientPropertiesRequest::DescribeClientPropertiesRequest()
    : WorkSpacesRequest(new DescribeClientPropertiesRequestPrivate(WorkSpacesRequest::DescribeClientPropertiesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeClientPropertiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeClientPropertiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeClientPropertiesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClientPropertiesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeClientPropertiesRequestPrivate
 * \brief The DescribeClientPropertiesRequestPrivate class provides private implementation for DescribeClientPropertiesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeClientPropertiesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeClientPropertiesRequestPrivate::DescribeClientPropertiesRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeClientPropertiesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeClientPropertiesRequest
 * class' copy constructor.
 */
DescribeClientPropertiesRequestPrivate::DescribeClientPropertiesRequestPrivate(
    const DescribeClientPropertiesRequestPrivate &other, DescribeClientPropertiesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
