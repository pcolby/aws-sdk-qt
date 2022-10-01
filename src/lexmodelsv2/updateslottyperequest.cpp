// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
