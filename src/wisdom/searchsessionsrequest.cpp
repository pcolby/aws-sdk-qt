// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchsessionsrequest.h"
#include "searchsessionsrequest_p.h"
#include "searchsessionsresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::SearchSessionsRequest
 * \brief The SearchSessionsRequest class provides an interface for Wisdom SearchSessions requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::searchSessions
 */

/*!
 * Constructs a copy of \a other.
 */
SearchSessionsRequest::SearchSessionsRequest(const SearchSessionsRequest &other)
    : WisdomRequest(new SearchSessionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchSessionsRequest object.
 */
SearchSessionsRequest::SearchSessionsRequest()
    : WisdomRequest(new SearchSessionsRequestPrivate(WisdomRequest::SearchSessionsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchSessionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchSessionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchSessionsRequest::response(QNetworkReply * const reply) const
{
    return new SearchSessionsResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::SearchSessionsRequestPrivate
 * \brief The SearchSessionsRequestPrivate class provides private implementation for SearchSessionsRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a SearchSessionsRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
SearchSessionsRequestPrivate::SearchSessionsRequestPrivate(
    const WisdomRequest::Action action, SearchSessionsRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchSessionsRequest
 * class' copy constructor.
 */
SearchSessionsRequestPrivate::SearchSessionsRequestPrivate(
    const SearchSessionsRequestPrivate &other, SearchSessionsRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
