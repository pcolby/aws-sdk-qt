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

#include "liststagesrequest.h"
#include "liststagesrequest_p.h"
#include "liststagesresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListStagesRequest
 * \brief The ListStagesRequest class provides an interface for GameSparks ListStages requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listStages
 */

/*!
 * Constructs a copy of \a other.
 */
ListStagesRequest::ListStagesRequest(const ListStagesRequest &other)
    : GameSparksRequest(new ListStagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStagesRequest object.
 */
ListStagesRequest::ListStagesRequest()
    : GameSparksRequest(new ListStagesRequestPrivate(GameSparksRequest::ListStagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListStagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStagesRequest::response(QNetworkReply * const reply) const
{
    return new ListStagesResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::ListStagesRequestPrivate
 * \brief The ListStagesRequestPrivate class provides private implementation for ListStagesRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListStagesRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
ListStagesRequestPrivate::ListStagesRequestPrivate(
    const GameSparksRequest::Action action, ListStagesRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStagesRequest
 * class' copy constructor.
 */
ListStagesRequestPrivate::ListStagesRequestPrivate(
    const ListStagesRequestPrivate &other, ListStagesRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
