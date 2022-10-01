// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteslottyperequest.h"
#include "deleteslottyperequest_p.h"
#include "deleteslottyperesponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteSlotTypeRequest
 * \brief The DeleteSlotTypeRequest class provides an interface for LexModelsV2 DeleteSlotType requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteSlotType
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSlotTypeRequest::DeleteSlotTypeRequest(const DeleteSlotTypeRequest &other)
    : LexModelsV2Request(new DeleteSlotTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSlotTypeRequest object.
 */
DeleteSlotTypeRequest::DeleteSlotTypeRequest()
    : LexModelsV2Request(new DeleteSlotTypeRequestPrivate(LexModelsV2Request::DeleteSlotTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSlotTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSlotTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSlotTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSlotTypeResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteSlotTypeRequestPrivate
 * \brief The DeleteSlotTypeRequestPrivate class provides private implementation for DeleteSlotTypeRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteSlotTypeRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteSlotTypeRequestPrivate::DeleteSlotTypeRequestPrivate(
    const LexModelsV2Request::Action action, DeleteSlotTypeRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSlotTypeRequest
 * class' copy constructor.
 */
DeleteSlotTypeRequestPrivate::DeleteSlotTypeRequestPrivate(
    const DeleteSlotTypeRequestPrivate &other, DeleteSlotTypeRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
