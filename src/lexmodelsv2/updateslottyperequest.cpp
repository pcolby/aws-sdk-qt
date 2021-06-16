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

#include "updateslottyperequest.h"
#include "updateslottyperequest_p.h"
#include "updateslottyperesponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateSlotTypeRequest
 * \brief The UpdateSlotTypeRequest class provides an interface for LexModelsV2 UpdateSlotType requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateSlotType
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSlotTypeRequest::UpdateSlotTypeRequest(const UpdateSlotTypeRequest &other)
    : LexModelsV2Request(new UpdateSlotTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSlotTypeRequest object.
 */
UpdateSlotTypeRequest::UpdateSlotTypeRequest()
    : LexModelsV2Request(new UpdateSlotTypeRequestPrivate(LexModelsV2Request::UpdateSlotTypeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSlotTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSlotTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSlotTypeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSlotTypeResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::UpdateSlotTypeRequestPrivate
 * \brief The UpdateSlotTypeRequestPrivate class provides private implementation for UpdateSlotTypeRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateSlotTypeRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
UpdateSlotTypeRequestPrivate::UpdateSlotTypeRequestPrivate(
    const LexModelsV2Request::Action action, UpdateSlotTypeRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSlotTypeRequest
 * class' copy constructor.
 */
UpdateSlotTypeRequestPrivate::UpdateSlotTypeRequestPrivate(
    const UpdateSlotTypeRequestPrivate &other, UpdateSlotTypeRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
