// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
