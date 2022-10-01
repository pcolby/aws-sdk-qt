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
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListQuerySuggestionsBlockListsRequest
 * \brief The ListQuerySuggestionsBlockListsRequest class provides an interface for Kendra ListQuerySuggestionsBlockLists requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listQuerySuggestionsBlockLists
 */

/*!
 * Constructs a copy of \a other.
 */
ListQuerySuggestionsBlockListsRequest::ListQuerySuggestionsBlockListsRequest(const ListQuerySuggestionsBlockListsRequest &other)
    : KendraRequest(new ListQuerySuggestionsBlockListsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListQuerySuggestionsBlockListsRequest object.
 */
ListQuerySuggestionsBlockListsRequest::ListQuerySuggestionsBlockListsRequest()
    : KendraRequest(new ListQuerySuggestionsBlockListsRequestPrivate(KendraRequest::ListQuerySuggestionsBlockListsAction, this))
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
 * \class QtAws::Kendra::ListQuerySuggestionsBlockListsRequestPrivate
 * \brief The ListQuerySuggestionsBlockListsRequestPrivate class provides private implementation for ListQuerySuggestionsBlockListsRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListQuerySuggestionsBlockListsRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListQuerySuggestionsBlockListsRequestPrivate::ListQuerySuggestionsBlockListsRequestPrivate(
    const KendraRequest::Action action, ListQuerySuggestionsBlockListsRequest * const q)
    : KendraRequestPrivate(action, q)
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
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
