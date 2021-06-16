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

#include "listbuiltinintentsrequest.h"
#include "listbuiltinintentsrequest_p.h"
#include "listbuiltinintentsresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBuiltInIntentsRequest
 * \brief The ListBuiltInIntentsRequest class provides an interface for LexModelsV2 ListBuiltInIntents requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBuiltInIntents
 */

/*!
 * Constructs a copy of \a other.
 */
ListBuiltInIntentsRequest::ListBuiltInIntentsRequest(const ListBuiltInIntentsRequest &other)
    : LexModelsV2Request(new ListBuiltInIntentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBuiltInIntentsRequest object.
 */
ListBuiltInIntentsRequest::ListBuiltInIntentsRequest()
    : LexModelsV2Request(new ListBuiltInIntentsRequestPrivate(LexModelsV2Request::ListBuiltInIntentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBuiltInIntentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBuiltInIntentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBuiltInIntentsRequest::response(QNetworkReply * const reply) const
{
    return new ListBuiltInIntentsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListBuiltInIntentsRequestPrivate
 * \brief The ListBuiltInIntentsRequestPrivate class provides private implementation for ListBuiltInIntentsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBuiltInIntentsRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListBuiltInIntentsRequestPrivate::ListBuiltInIntentsRequestPrivate(
    const LexModelsV2Request::Action action, ListBuiltInIntentsRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBuiltInIntentsRequest
 * class' copy constructor.
 */
ListBuiltInIntentsRequestPrivate::ListBuiltInIntentsRequestPrivate(
    const ListBuiltInIntentsRequestPrivate &other, ListBuiltInIntentsRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
