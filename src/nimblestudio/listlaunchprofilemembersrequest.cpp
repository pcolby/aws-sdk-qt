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

#include "listlaunchprofilemembersrequest.h"
#include "listlaunchprofilemembersrequest_p.h"
#include "listlaunchprofilemembersresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListLaunchProfileMembersRequest
 * \brief The ListLaunchProfileMembersRequest class provides an interface for NimbleStudio ListLaunchProfileMembers requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listLaunchProfileMembers
 */

/*!
 * Constructs a copy of \a other.
 */
ListLaunchProfileMembersRequest::ListLaunchProfileMembersRequest(const ListLaunchProfileMembersRequest &other)
    : NimbleStudioRequest(new ListLaunchProfileMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLaunchProfileMembersRequest object.
 */
ListLaunchProfileMembersRequest::ListLaunchProfileMembersRequest()
    : NimbleStudioRequest(new ListLaunchProfileMembersRequestPrivate(NimbleStudioRequest::ListLaunchProfileMembersAction, this))
{

}

/*!
 * \reimp
 */
bool ListLaunchProfileMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLaunchProfileMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLaunchProfileMembersRequest::response(QNetworkReply * const reply) const
{
    return new ListLaunchProfileMembersResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::ListLaunchProfileMembersRequestPrivate
 * \brief The ListLaunchProfileMembersRequestPrivate class provides private implementation for ListLaunchProfileMembersRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListLaunchProfileMembersRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
ListLaunchProfileMembersRequestPrivate::ListLaunchProfileMembersRequestPrivate(
    const NimbleStudioRequest::Action action, ListLaunchProfileMembersRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLaunchProfileMembersRequest
 * class' copy constructor.
 */
ListLaunchProfileMembersRequestPrivate::ListLaunchProfileMembersRequestPrivate(
    const ListLaunchProfileMembersRequestPrivate &other, ListLaunchProfileMembersRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
