// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getquerysuggestionsrequest.h"
#include "getquerysuggestionsrequest_p.h"
#include "getquerysuggestionsresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::GetQuerySuggestionsRequest
 * \brief The GetQuerySuggestionsRequest class provides an interface for Kendra GetQuerySuggestions requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::getQuerySuggestions
 */

/*!
 * Constructs a copy of \a other.
 */
GetQuerySuggestionsRequest::GetQuerySuggestionsRequest(const GetQuerySuggestionsRequest &other)
    : KendraRequest(new GetQuerySuggestionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetQuerySuggestionsRequest object.
 */
GetQuerySuggestionsRequest::GetQuerySuggestionsRequest()
    : KendraRequest(new GetQuerySuggestionsRequestPrivate(KendraRequest::GetQuerySuggestionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetQuerySuggestionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetQuerySuggestionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetQuerySuggestionsRequest::response(QNetworkReply * const reply) const
{
    return new GetQuerySuggestionsResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::GetQuerySuggestionsRequestPrivate
 * \brief The GetQuerySuggestionsRequestPrivate class provides private implementation for GetQuerySuggestionsRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a GetQuerySuggestionsRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
GetQuerySuggestionsRequestPrivate::GetQuerySuggestionsRequestPrivate(
    const KendraRequest::Action action, GetQuerySuggestionsRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetQuerySuggestionsRequest
 * class' copy constructor.
 */
GetQuerySuggestionsRequestPrivate::GetQuerySuggestionsRequestPrivate(
    const GetQuerySuggestionsRequestPrivate &other, GetQuerySuggestionsRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
