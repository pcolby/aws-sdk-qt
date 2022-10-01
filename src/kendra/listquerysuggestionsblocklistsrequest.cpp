// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
