// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listintentsrequest.h"
#include "listintentsrequest_p.h"
#include "listintentsresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListIntentsRequest
 * \brief The ListIntentsRequest class provides an interface for LexModelsV2 ListIntents requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listIntents
 */

/*!
 * Constructs a copy of \a other.
 */
ListIntentsRequest::ListIntentsRequest(const ListIntentsRequest &other)
    : LexModelsV2Request(new ListIntentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIntentsRequest object.
 */
ListIntentsRequest::ListIntentsRequest()
    : LexModelsV2Request(new ListIntentsRequestPrivate(LexModelsV2Request::ListIntentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListIntentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIntentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIntentsRequest::response(QNetworkReply * const reply) const
{
    return new ListIntentsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListIntentsRequestPrivate
 * \brief The ListIntentsRequestPrivate class provides private implementation for ListIntentsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListIntentsRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListIntentsRequestPrivate::ListIntentsRequestPrivate(
    const LexModelsV2Request::Action action, ListIntentsRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIntentsRequest
 * class' copy constructor.
 */
ListIntentsRequestPrivate::ListIntentsRequestPrivate(
    const ListIntentsRequestPrivate &other, ListIntentsRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
