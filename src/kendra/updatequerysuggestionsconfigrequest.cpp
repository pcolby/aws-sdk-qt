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
namespace kendra {

/*!
 * \class QtAws::kendra::UpdateQuerySuggestionsConfigRequest
 * \brief The UpdateQuerySuggestionsConfigRequest class provides an interface for kendra UpdateQuerySuggestionsConfig requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::updateQuerySuggestionsConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateQuerySuggestionsConfigRequest::UpdateQuerySuggestionsConfigRequest(const UpdateQuerySuggestionsConfigRequest &other)
    : kendraRequest(new UpdateQuerySuggestionsConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateQuerySuggestionsConfigRequest object.
 */
UpdateQuerySuggestionsConfigRequest::UpdateQuerySuggestionsConfigRequest()
    : kendraRequest(new UpdateQuerySuggestionsConfigRequestPrivate(kendraRequest::UpdateQuerySuggestionsConfigAction, this))
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
 * \class QtAws::kendra::UpdateQuerySuggestionsConfigRequestPrivate
 * \brief The UpdateQuerySuggestionsConfigRequestPrivate class provides private implementation for UpdateQuerySuggestionsConfigRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a UpdateQuerySuggestionsConfigRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
UpdateQuerySuggestionsConfigRequestPrivate::UpdateQuerySuggestionsConfigRequestPrivate(
    const kendraRequest::Action action, UpdateQuerySuggestionsConfigRequest * const q)
    : kendraRequestPrivate(action, q)
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
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
