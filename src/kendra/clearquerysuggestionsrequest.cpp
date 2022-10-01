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
