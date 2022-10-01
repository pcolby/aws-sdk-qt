// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbuiltinintentsrequest.h"
#include "listbuiltinintentsrequest_p.h"
#include "listbuiltinintentsresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBuiltInIntentsRequest
 * \brief The ListBuiltInIntentsRequest class provides an interface for LexModelsV2 ListBuiltInIntents requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBuiltInIntents
 */

/*!
 * Constructs a copy of \a other.
 */
ListBuiltInIntentsRequest::ListBuiltInIntentsRequest(const ListBuiltInIntentsRequest &other)
    : LexModelsV2Request(new ListBuiltInIntentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBuiltInIntentsRequest object.
 */
ListBuiltInIntentsRequest::ListBuiltInIntentsRequest()
    : LexModelsV2Request(new ListBuiltInIntentsRequestPrivate(LexModelsV2Request::ListBuiltInIntentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBuiltInIntentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBuiltInIntentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBuiltInIntentsRequest::response(QNetworkReply * const reply) const
{
    return new ListBuiltInIntentsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListBuiltInIntentsRequestPrivate
 * \brief The ListBuiltInIntentsRequestPrivate class provides private implementation for ListBuiltInIntentsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBuiltInIntentsRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListBuiltInIntentsRequestPrivate::ListBuiltInIntentsRequestPrivate(
    const LexModelsV2Request::Action action, ListBuiltInIntentsRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBuiltInIntentsRequest
 * class' copy constructor.
 */
ListBuiltInIntentsRequestPrivate::ListBuiltInIntentsRequestPrivate(
    const ListBuiltInIntentsRequestPrivate &other, ListBuiltInIntentsRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
