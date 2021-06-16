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

#include "listintentsrequest.h"
#include "listintentsrequest_p.h"
#include "listintentsresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListIntentsRequest
 * \brief The ListIntentsRequest class provides an interface for LexModelsV2 ListIntents requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listIntents
 */

/*!
 * Constructs a copy of \a other.
 */
ListIntentsRequest::ListIntentsRequest(const ListIntentsRequest &other)
    : LexModelsV2Request(new ListIntentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIntentsRequest object.
 */
ListIntentsRequest::ListIntentsRequest()
    : LexModelsV2Request(new ListIntentsRequestPrivate(LexModelsV2Request::ListIntentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListIntentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIntentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIntentsRequest::response(QNetworkReply * const reply) const
{
    return new ListIntentsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListIntentsRequestPrivate
 * \brief The ListIntentsRequestPrivate class provides private implementation for ListIntentsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListIntentsRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListIntentsRequestPrivate::ListIntentsRequestPrivate(
    const LexModelsV2Request::Action action, ListIntentsRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIntentsRequest
 * class' copy constructor.
 */
ListIntentsRequestPrivate::ListIntentsRequestPrivate(
    const ListIntentsRequestPrivate &other, ListIntentsRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
