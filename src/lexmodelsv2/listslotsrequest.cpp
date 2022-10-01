// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
