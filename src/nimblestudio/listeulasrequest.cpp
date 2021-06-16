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

#include "listeulasrequest.h"
#include "listeulasrequest_p.h"
#include "listeulasresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListEulasRequest
 * \brief The ListEulasRequest class provides an interface for NimbleStudio ListEulas requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listEulas
 */

/*!
 * Constructs a copy of \a other.
 */
ListEulasRequest::ListEulasRequest(const ListEulasRequest &other)
    : NimbleStudioRequest(new ListEulasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEulasRequest object.
 */
ListEulasRequest::ListEulasRequest()
    : NimbleStudioRequest(new ListEulasRequestPrivate(NimbleStudioRequest::ListEulasAction, this))
{

}

/*!
 * \reimp
 */
bool ListEulasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEulasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEulasRequest::response(QNetworkReply * const reply) const
{
    return new ListEulasResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::ListEulasRequestPrivate
 * \brief The ListEulasRequestPrivate class provides private implementation for ListEulasRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListEulasRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
ListEulasRequestPrivate::ListEulasRequestPrivate(
    const NimbleStudioRequest::Action action, ListEulasRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEulasRequest
 * class' copy constructor.
 */
ListEulasRequestPrivate::ListEulasRequestPrivate(
    const ListEulasRequestPrivate &other, ListEulasRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
