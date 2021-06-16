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

#include "updateslotrequest.h"
#include "updateslotrequest_p.h"
#include "updateslotresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateSlotRequest
 * \brief The UpdateSlotRequest class provides an interface for LexModelsV2 UpdateSlot requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateSlot
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSlotRequest::UpdateSlotRequest(const UpdateSlotRequest &other)
    : LexModelsV2Request(new UpdateSlotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSlotRequest object.
 */
UpdateSlotRequest::UpdateSlotRequest()
    : LexModelsV2Request(new UpdateSlotRequestPrivate(LexModelsV2Request::UpdateSlotAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSlotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSlotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSlotRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSlotResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::UpdateSlotRequestPrivate
 * \brief The UpdateSlotRequestPrivate class provides private implementation for UpdateSlotRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateSlotRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
UpdateSlotRequestPrivate::UpdateSlotRequestPrivate(
    const LexModelsV2Request::Action action, UpdateSlotRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSlotRequest
 * class' copy constructor.
 */
UpdateSlotRequestPrivate::UpdateSlotRequestPrivate(
    const UpdateSlotRequestPrivate &other, UpdateSlotRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
