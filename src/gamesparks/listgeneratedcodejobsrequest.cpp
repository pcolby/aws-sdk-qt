// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
