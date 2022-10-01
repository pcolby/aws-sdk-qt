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

#include "listgeneratedcodejobsrequest.h"
#include "listgeneratedcodejobsrequest_p.h"
#include "listgeneratedcodejobsresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListGeneratedCodeJobsRequest
 * \brief The ListGeneratedCodeJobsRequest class provides an interface for GameSparks ListGeneratedCodeJobs requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listGeneratedCodeJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListGeneratedCodeJobsRequest::ListGeneratedCodeJobsRequest(const ListGeneratedCodeJobsRequest &other)
    : GameSparksRequest(new ListGeneratedCodeJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGeneratedCodeJobsRequest object.
 */
ListGeneratedCodeJobsRequest::ListGeneratedCodeJobsRequest()
    : GameSparksRequest(new ListGeneratedCodeJobsRequestPrivate(GameSparksRequest::ListGeneratedCodeJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGeneratedCodeJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGeneratedCodeJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGeneratedCodeJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListGeneratedCodeJobsResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::ListGeneratedCodeJobsRequestPrivate
 * \brief The ListGeneratedCodeJobsRequestPrivate class provides private implementation for ListGeneratedCodeJobsRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListGeneratedCodeJobsRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
ListGeneratedCodeJobsRequestPrivate::ListGeneratedCodeJobsRequestPrivate(
    const GameSparksRequest::Action action, ListGeneratedCodeJobsRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGeneratedCodeJobsRequest
 * class' copy constructor.
 */
ListGeneratedCodeJobsRequestPrivate::ListGeneratedCodeJobsRequestPrivate(
    const ListGeneratedCodeJobsRequestPrivate &other, ListGeneratedCodeJobsRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
