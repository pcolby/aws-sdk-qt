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

#include "listquerysuggestionsblocklistsrequest.h"
#include "listquerysuggestionsblocklistsrequest_p.h"
#include "listquerysuggestionsblocklistsresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::ListQuerySuggestionsBlockListsRequest
 * \brief The ListQuerySuggestionsBlockListsRequest class provides an interface for kendra ListQuerySuggestionsBlockLists requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::listQuerySuggestionsBlockLists
 */

/*!
 * Constructs a copy of \a other.
 */
ListQuerySuggestionsBlockListsRequest::ListQuerySuggestionsBlockListsRequest(const ListQuerySuggestionsBlockListsRequest &other)
    : kendraRequest(new ListQuerySuggestionsBlockListsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListQuerySuggestionsBlockListsRequest object.
 */
ListQuerySuggestionsBlockListsRequest::ListQuerySuggestionsBlockListsRequest()
    : kendraRequest(new ListQuerySuggestionsBlockListsRequestPrivate(kendraRequest::ListQuerySuggestionsBlockListsAction, this))
{

}

/*!
 * \reimp
 */
bool ListQuerySuggestionsBlockListsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListQuerySuggestionsBlockListsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListQuerySuggestionsBlockListsRequest::response(QNetworkReply * const reply) const
{
    return new ListQuerySuggestionsBlockListsResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::ListQuerySuggestionsBlockListsRequestPrivate
 * \brief The ListQuerySuggestionsBlockListsRequestPrivate class provides private implementation for ListQuerySuggestionsBlockListsRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a ListQuerySuggestionsBlockListsRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
ListQuerySuggestionsBlockListsRequestPrivate::ListQuerySuggestionsBlockListsRequestPrivate(
    const kendraRequest::Action action, ListQuerySuggestionsBlockListsRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListQuerySuggestionsBlockListsRequest
 * class' copy constructor.
 */
ListQuerySuggestionsBlockListsRequestPrivate::ListQuerySuggestionsBlockListsRequestPrivate(
    const ListQuerySuggestionsBlockListsRequestPrivate &other, ListQuerySuggestionsBlockListsRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
