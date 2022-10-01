// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
