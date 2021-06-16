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

#include "listslotsrequest.h"
#include "listslotsrequest_p.h"
#include "listslotsresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListSlotsRequest
 * \brief The ListSlotsRequest class provides an interface for LexModelsV2 ListSlots requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listSlots
 */

/*!
 * Constructs a copy of \a other.
 */
ListSlotsRequest::ListSlotsRequest(const ListSlotsRequest &other)
    : LexModelsV2Request(new ListSlotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSlotsRequest object.
 */
ListSlotsRequest::ListSlotsRequest()
    : LexModelsV2Request(new ListSlotsRequestPrivate(LexModelsV2Request::ListSlotsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSlotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSlotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSlotsRequest::response(QNetworkReply * const reply) const
{
    return new ListSlotsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListSlotsRequestPrivate
 * \brief The ListSlotsRequestPrivate class provides private implementation for ListSlotsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListSlotsRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListSlotsRequestPrivate::ListSlotsRequestPrivate(
    const LexModelsV2Request::Action action, ListSlotsRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSlotsRequest
 * class' copy constructor.
 */
ListSlotsRequestPrivate::ListSlotsRequestPrivate(
    const ListSlotsRequestPrivate &other, ListSlotsRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
