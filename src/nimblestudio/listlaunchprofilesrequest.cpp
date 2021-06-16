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

#include "listlaunchprofilesrequest.h"
#include "listlaunchprofilesrequest_p.h"
#include "listlaunchprofilesresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListLaunchProfilesRequest
 * \brief The ListLaunchProfilesRequest class provides an interface for NimbleStudio ListLaunchProfiles requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listLaunchProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
ListLaunchProfilesRequest::ListLaunchProfilesRequest(const ListLaunchProfilesRequest &other)
    : NimbleStudioRequest(new ListLaunchProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLaunchProfilesRequest object.
 */
ListLaunchProfilesRequest::ListLaunchProfilesRequest()
    : NimbleStudioRequest(new ListLaunchProfilesRequestPrivate(NimbleStudioRequest::ListLaunchProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListLaunchProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLaunchProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLaunchProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListLaunchProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::ListLaunchProfilesRequestPrivate
 * \brief The ListLaunchProfilesRequestPrivate class provides private implementation for ListLaunchProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListLaunchProfilesRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
ListLaunchProfilesRequestPrivate::ListLaunchProfilesRequestPrivate(
    const NimbleStudioRequest::Action action, ListLaunchProfilesRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLaunchProfilesRequest
 * class' copy constructor.
 */
ListLaunchProfilesRequestPrivate::ListLaunchProfilesRequestPrivate(
    const ListLaunchProfilesRequestPrivate &other, ListLaunchProfilesRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
