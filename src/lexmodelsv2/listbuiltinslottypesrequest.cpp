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

#include "listbuiltinslottypesrequest.h"
#include "listbuiltinslottypesrequest_p.h"
#include "listbuiltinslottypesresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBuiltInSlotTypesRequest
 * \brief The ListBuiltInSlotTypesRequest class provides an interface for LexModelsV2 ListBuiltInSlotTypes requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBuiltInSlotTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListBuiltInSlotTypesRequest::ListBuiltInSlotTypesRequest(const ListBuiltInSlotTypesRequest &other)
    : LexModelsV2Request(new ListBuiltInSlotTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBuiltInSlotTypesRequest object.
 */
ListBuiltInSlotTypesRequest::ListBuiltInSlotTypesRequest()
    : LexModelsV2Request(new ListBuiltInSlotTypesRequestPrivate(LexModelsV2Request::ListBuiltInSlotTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListBuiltInSlotTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBuiltInSlotTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBuiltInSlotTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListBuiltInSlotTypesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListBuiltInSlotTypesRequestPrivate
 * \brief The ListBuiltInSlotTypesRequestPrivate class provides private implementation for ListBuiltInSlotTypesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBuiltInSlotTypesRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListBuiltInSlotTypesRequestPrivate::ListBuiltInSlotTypesRequestPrivate(
    const LexModelsV2Request::Action action, ListBuiltInSlotTypesRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBuiltInSlotTypesRequest
 * class' copy constructor.
 */
ListBuiltInSlotTypesRequestPrivate::ListBuiltInSlotTypesRequestPrivate(
    const ListBuiltInSlotTypesRequestPrivate &other, ListBuiltInSlotTypesRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
