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

#include "updatequerysuggestionsconfigrequest.h"
#include "updatequerysuggestionsconfigrequest_p.h"
#include "updatequerysuggestionsconfigresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsConfigRequest
 * \brief The UpdateQuerySuggestionsConfigRequest class provides an interface for Kendra UpdateQuerySuggestionsConfig requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateQuerySuggestionsConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateQuerySuggestionsConfigRequest::UpdateQuerySuggestionsConfigRequest(const UpdateQuerySuggestionsConfigRequest &other)
    : KendraRequest(new UpdateQuerySuggestionsConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateQuerySuggestionsConfigRequest object.
 */
UpdateQuerySuggestionsConfigRequest::UpdateQuerySuggestionsConfigRequest()
    : KendraRequest(new UpdateQuerySuggestionsConfigRequestPrivate(KendraRequest::UpdateQuerySuggestionsConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateQuerySuggestionsConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateQuerySuggestionsConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateQuerySuggestionsConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateQuerySuggestionsConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsConfigRequestPrivate
 * \brief The UpdateQuerySuggestionsConfigRequestPrivate class provides private implementation for UpdateQuerySuggestionsConfigRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateQuerySuggestionsConfigRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
UpdateQuerySuggestionsConfigRequestPrivate::UpdateQuerySuggestionsConfigRequestPrivate(
    const KendraRequest::Action action, UpdateQuerySuggestionsConfigRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateQuerySuggestionsConfigRequest
 * class' copy constructor.
 */
UpdateQuerySuggestionsConfigRequestPrivate::UpdateQuerySuggestionsConfigRequestPrivate(
    const UpdateQuerySuggestionsConfigRequestPrivate &other, UpdateQuerySuggestionsConfigRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
