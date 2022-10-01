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

#include "updatequerysuggestionsblocklistrequest.h"
#include "updatequerysuggestionsblocklistrequest_p.h"
#include "updatequerysuggestionsblocklistresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsBlockListRequest
 * \brief The UpdateQuerySuggestionsBlockListRequest class provides an interface for Kendra UpdateQuerySuggestionsBlockList requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateQuerySuggestionsBlockList
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateQuerySuggestionsBlockListRequest::UpdateQuerySuggestionsBlockListRequest(const UpdateQuerySuggestionsBlockListRequest &other)
    : KendraRequest(new UpdateQuerySuggestionsBlockListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateQuerySuggestionsBlockListRequest object.
 */
UpdateQuerySuggestionsBlockListRequest::UpdateQuerySuggestionsBlockListRequest()
    : KendraRequest(new UpdateQuerySuggestionsBlockListRequestPrivate(KendraRequest::UpdateQuerySuggestionsBlockListAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateQuerySuggestionsBlockListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateQuerySuggestionsBlockListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateQuerySuggestionsBlockListRequest::response(QNetworkReply * const reply) const
{
    return new UpdateQuerySuggestionsBlockListResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsBlockListRequestPrivate
 * \brief The UpdateQuerySuggestionsBlockListRequestPrivate class provides private implementation for UpdateQuerySuggestionsBlockListRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateQuerySuggestionsBlockListRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
UpdateQuerySuggestionsBlockListRequestPrivate::UpdateQuerySuggestionsBlockListRequestPrivate(
    const KendraRequest::Action action, UpdateQuerySuggestionsBlockListRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateQuerySuggestionsBlockListRequest
 * class' copy constructor.
 */
UpdateQuerySuggestionsBlockListRequestPrivate::UpdateQuerySuggestionsBlockListRequestPrivate(
    const UpdateQuerySuggestionsBlockListRequestPrivate &other, UpdateQuerySuggestionsBlockListRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
