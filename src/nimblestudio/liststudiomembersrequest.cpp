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

#include "liststudiomembersrequest.h"
#include "liststudiomembersrequest_p.h"
#include "liststudiomembersresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListStudioMembersRequest
 * \brief The ListStudioMembersRequest class provides an interface for NimbleStudio ListStudioMembers requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listStudioMembers
 */

/*!
 * Constructs a copy of \a other.
 */
ListStudioMembersRequest::ListStudioMembersRequest(const ListStudioMembersRequest &other)
    : NimbleStudioRequest(new ListStudioMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStudioMembersRequest object.
 */
ListStudioMembersRequest::ListStudioMembersRequest()
    : NimbleStudioRequest(new ListStudioMembersRequestPrivate(NimbleStudioRequest::ListStudioMembersAction, this))
{

}

/*!
 * \reimp
 */
bool ListStudioMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStudioMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStudioMembersRequest::response(QNetworkReply * const reply) const
{
    return new ListStudioMembersResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::ListStudioMembersRequestPrivate
 * \brief The ListStudioMembersRequestPrivate class provides private implementation for ListStudioMembersRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListStudioMembersRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
ListStudioMembersRequestPrivate::ListStudioMembersRequestPrivate(
    const NimbleStudioRequest::Action action, ListStudioMembersRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStudioMembersRequest
 * class' copy constructor.
 */
ListStudioMembersRequestPrivate::ListStudioMembersRequestPrivate(
    const ListStudioMembersRequestPrivate &other, ListStudioMembersRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
