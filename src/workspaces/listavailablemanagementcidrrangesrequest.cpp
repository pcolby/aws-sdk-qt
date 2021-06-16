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

#include "listavailablemanagementcidrrangesrequest.h"
#include "listavailablemanagementcidrrangesrequest_p.h"
#include "listavailablemanagementcidrrangesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ListAvailableManagementCidrRangesRequest
 * \brief The ListAvailableManagementCidrRangesRequest class provides an interface for WorkSpaces ListAvailableManagementCidrRanges requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::listAvailableManagementCidrRanges
 */

/*!
 * Constructs a copy of \a other.
 */
ListAvailableManagementCidrRangesRequest::ListAvailableManagementCidrRangesRequest(const ListAvailableManagementCidrRangesRequest &other)
    : WorkSpacesRequest(new ListAvailableManagementCidrRangesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAvailableManagementCidrRangesRequest object.
 */
ListAvailableManagementCidrRangesRequest::ListAvailableManagementCidrRangesRequest()
    : WorkSpacesRequest(new ListAvailableManagementCidrRangesRequestPrivate(WorkSpacesRequest::ListAvailableManagementCidrRangesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAvailableManagementCidrRangesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAvailableManagementCidrRangesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAvailableManagementCidrRangesRequest::response(QNetworkReply * const reply) const
{
    return new ListAvailableManagementCidrRangesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::ListAvailableManagementCidrRangesRequestPrivate
 * \brief The ListAvailableManagementCidrRangesRequestPrivate class provides private implementation for ListAvailableManagementCidrRangesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ListAvailableManagementCidrRangesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
ListAvailableManagementCidrRangesRequestPrivate::ListAvailableManagementCidrRangesRequestPrivate(
    const WorkSpacesRequest::Action action, ListAvailableManagementCidrRangesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAvailableManagementCidrRangesRequest
 * class' copy constructor.
 */
ListAvailableManagementCidrRangesRequestPrivate::ListAvailableManagementCidrRangesRequestPrivate(
    const ListAvailableManagementCidrRangesRequestPrivate &other, ListAvailableManagementCidrRangesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
