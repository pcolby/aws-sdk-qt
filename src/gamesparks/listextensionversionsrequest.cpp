// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listextensionversionsrequest.h"
#include "listextensionversionsrequest_p.h"
#include "listextensionversionsresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListExtensionVersionsRequest
 * \brief The ListExtensionVersionsRequest class provides an interface for GameSparks ListExtensionVersions requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listExtensionVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListExtensionVersionsRequest::ListExtensionVersionsRequest(const ListExtensionVersionsRequest &other)
    : GameSparksRequest(new ListExtensionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExtensionVersionsRequest object.
 */
ListExtensionVersionsRequest::ListExtensionVersionsRequest()
    : GameSparksRequest(new ListExtensionVersionsRequestPrivate(GameSparksRequest::ListExtensionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExtensionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExtensionVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExtensionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListExtensionVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::ListExtensionVersionsRequestPrivate
 * \brief The ListExtensionVersionsRequestPrivate class provides private implementation for ListExtensionVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListExtensionVersionsRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
ListExtensionVersionsRequestPrivate::ListExtensionVersionsRequestPrivate(
    const GameSparksRequest::Action action, ListExtensionVersionsRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExtensionVersionsRequest
 * class' copy constructor.
 */
ListExtensionVersionsRequestPrivate::ListExtensionVersionsRequestPrivate(
    const ListExtensionVersionsRequestPrivate &other, ListExtensionVersionsRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
