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

#include "listslottypesrequest.h"
#include "listslottypesrequest_p.h"
#include "listslottypesresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListSlotTypesRequest
 * \brief The ListSlotTypesRequest class provides an interface for LexModelsV2 ListSlotTypes requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listSlotTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListSlotTypesRequest::ListSlotTypesRequest(const ListSlotTypesRequest &other)
    : LexModelsV2Request(new ListSlotTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSlotTypesRequest object.
 */
ListSlotTypesRequest::ListSlotTypesRequest()
    : LexModelsV2Request(new ListSlotTypesRequestPrivate(LexModelsV2Request::ListSlotTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSlotTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSlotTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSlotTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListSlotTypesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListSlotTypesRequestPrivate
 * \brief The ListSlotTypesRequestPrivate class provides private implementation for ListSlotTypesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListSlotTypesRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListSlotTypesRequestPrivate::ListSlotTypesRequestPrivate(
    const LexModelsV2Request::Action action, ListSlotTypesRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSlotTypesRequest
 * class' copy constructor.
 */
ListSlotTypesRequestPrivate::ListSlotTypesRequestPrivate(
    const ListSlotTypesRequestPrivate &other, ListSlotTypesRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
