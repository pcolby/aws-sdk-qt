// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchcontentrequest.h"
#include "searchcontentrequest_p.h"
#include "searchcontentresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::SearchContentRequest
 * \brief The SearchContentRequest class provides an interface for Wisdom SearchContent requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::searchContent
 */

/*!
 * Constructs a copy of \a other.
 */
SearchContentRequest::SearchContentRequest(const SearchContentRequest &other)
    : WisdomRequest(new SearchContentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchContentRequest object.
 */
SearchContentRequest::SearchContentRequest()
    : WisdomRequest(new SearchContentRequestPrivate(WisdomRequest::SearchContentAction, this))
{

}

/*!
 * \reimp
 */
bool SearchContentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchContentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchContentRequest::response(QNetworkReply * const reply) const
{
    return new SearchContentResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::SearchContentRequestPrivate
 * \brief The SearchContentRequestPrivate class provides private implementation for SearchContentRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a SearchContentRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
SearchContentRequestPrivate::SearchContentRequestPrivate(
    const WisdomRequest::Action action, SearchContentRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchContentRequest
 * class' copy constructor.
 */
SearchContentRequestPrivate::SearchContentRequestPrivate(
    const SearchContentRequestPrivate &other, SearchContentRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
