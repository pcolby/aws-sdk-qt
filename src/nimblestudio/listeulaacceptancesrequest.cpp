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

#include "listeulaacceptancesrequest.h"
#include "listeulaacceptancesrequest_p.h"
#include "listeulaacceptancesresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListEulaAcceptancesRequest
 * \brief The ListEulaAcceptancesRequest class provides an interface for NimbleStudio ListEulaAcceptances requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listEulaAcceptances
 */

/*!
 * Constructs a copy of \a other.
 */
ListEulaAcceptancesRequest::ListEulaAcceptancesRequest(const ListEulaAcceptancesRequest &other)
    : NimbleStudioRequest(new ListEulaAcceptancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEulaAcceptancesRequest object.
 */
ListEulaAcceptancesRequest::ListEulaAcceptancesRequest()
    : NimbleStudioRequest(new ListEulaAcceptancesRequestPrivate(NimbleStudioRequest::ListEulaAcceptancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListEulaAcceptancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEulaAcceptancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEulaAcceptancesRequest::response(QNetworkReply * const reply) const
{
    return new ListEulaAcceptancesResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::ListEulaAcceptancesRequestPrivate
 * \brief The ListEulaAcceptancesRequestPrivate class provides private implementation for ListEulaAcceptancesRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListEulaAcceptancesRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
ListEulaAcceptancesRequestPrivate::ListEulaAcceptancesRequestPrivate(
    const NimbleStudioRequest::Action action, ListEulaAcceptancesRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEulaAcceptancesRequest
 * class' copy constructor.
 */
ListEulaAcceptancesRequestPrivate::ListEulaAcceptancesRequestPrivate(
    const ListEulaAcceptancesRequestPrivate &other, ListEulaAcceptancesRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
