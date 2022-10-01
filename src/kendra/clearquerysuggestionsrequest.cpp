// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "clearquerysuggestionsrequest.h"
#include "clearquerysuggestionsrequest_p.h"
#include "clearquerysuggestionsresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ClearQuerySuggestionsRequest
 * \brief The ClearQuerySuggestionsRequest class provides an interface for Kendra ClearQuerySuggestions requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::clearQuerySuggestions
 */

/*!
 * Constructs a copy of \a other.
 */
ClearQuerySuggestionsRequest::ClearQuerySuggestionsRequest(const ClearQuerySuggestionsRequest &other)
    : KendraRequest(new ClearQuerySuggestionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ClearQuerySuggestionsRequest object.
 */
ClearQuerySuggestionsRequest::ClearQuerySuggestionsRequest()
    : KendraRequest(new ClearQuerySuggestionsRequestPrivate(KendraRequest::ClearQuerySuggestionsAction, this))
{

}

/*!
 * \reimp
 */
bool ClearQuerySuggestionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ClearQuerySuggestionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ClearQuerySuggestionsRequest::response(QNetworkReply * const reply) const
{
    return new ClearQuerySuggestionsResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::ClearQuerySuggestionsRequestPrivate
 * \brief The ClearQuerySuggestionsRequestPrivate class provides private implementation for ClearQuerySuggestionsRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ClearQuerySuggestionsRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ClearQuerySuggestionsRequestPrivate::ClearQuerySuggestionsRequestPrivate(
    const KendraRequest::Action action, ClearQuerySuggestionsRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ClearQuerySuggestionsRequest
 * class' copy constructor.
 */
ClearQuerySuggestionsRequestPrivate::ClearQuerySuggestionsRequestPrivate(
    const ClearQuerySuggestionsRequestPrivate &other, ClearQuerySuggestionsRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
