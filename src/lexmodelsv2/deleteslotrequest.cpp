// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
