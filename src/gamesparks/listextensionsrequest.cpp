// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
