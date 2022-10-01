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
