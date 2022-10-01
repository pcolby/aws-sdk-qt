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

#include "listextensionsrequest.h"
#include "listextensionsrequest_p.h"
#include "listextensionsresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListExtensionsRequest
 * \brief The ListExtensionsRequest class provides an interface for GameSparks ListExtensions requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listExtensions
 */

/*!
 * Constructs a copy of \a other.
 */
ListExtensionsRequest::ListExtensionsRequest(const ListExtensionsRequest &other)
    : GameSparksRequest(new ListExtensionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExtensionsRequest object.
 */
ListExtensionsRequest::ListExtensionsRequest()
    : GameSparksRequest(new ListExtensionsRequestPrivate(GameSparksRequest::ListExtensionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExtensionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExtensionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExtensionsRequest::response(QNetworkReply * const reply) const
{
    return new ListExtensionsResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::ListExtensionsRequestPrivate
 * \brief The ListExtensionsRequestPrivate class provides private implementation for ListExtensionsRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListExtensionsRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
ListExtensionsRequestPrivate::ListExtensionsRequestPrivate(
    const GameSparksRequest::Action action, ListExtensionsRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExtensionsRequest
 * class' copy constructor.
 */
ListExtensionsRequestPrivate::ListExtensionsRequestPrivate(
    const ListExtensionsRequestPrivate &other, ListExtensionsRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
