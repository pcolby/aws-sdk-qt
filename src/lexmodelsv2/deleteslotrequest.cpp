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

#include "deleteslotrequest.h"
#include "deleteslotrequest_p.h"
#include "deleteslotresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteSlotRequest
 * \brief The DeleteSlotRequest class provides an interface for LexModelsV2 DeleteSlot requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteSlot
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSlotRequest::DeleteSlotRequest(const DeleteSlotRequest &other)
    : LexModelsV2Request(new DeleteSlotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSlotRequest object.
 */
DeleteSlotRequest::DeleteSlotRequest()
    : LexModelsV2Request(new DeleteSlotRequestPrivate(LexModelsV2Request::DeleteSlotAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSlotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSlotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSlotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSlotResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteSlotRequestPrivate
 * \brief The DeleteSlotRequestPrivate class provides private implementation for DeleteSlotRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteSlotRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteSlotRequestPrivate::DeleteSlotRequestPrivate(
    const LexModelsV2Request::Action action, DeleteSlotRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSlotRequest
 * class' copy constructor.
 */
DeleteSlotRequestPrivate::DeleteSlotRequestPrivate(
    const DeleteSlotRequestPrivate &other, DeleteSlotRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
