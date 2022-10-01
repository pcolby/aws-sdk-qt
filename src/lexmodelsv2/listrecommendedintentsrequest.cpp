// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecommendedintentsrequest.h"
#include "listrecommendedintentsrequest_p.h"
#include "listrecommendedintentsresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListRecommendedIntentsRequest
 * \brief The ListRecommendedIntentsRequest class provides an interface for LexModelsV2 ListRecommendedIntents requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listRecommendedIntents
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecommendedIntentsRequest::ListRecommendedIntentsRequest(const ListRecommendedIntentsRequest &other)
    : LexModelsV2Request(new ListRecommendedIntentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecommendedIntentsRequest object.
 */
ListRecommendedIntentsRequest::ListRecommendedIntentsRequest()
    : LexModelsV2Request(new ListRecommendedIntentsRequestPrivate(LexModelsV2Request::ListRecommendedIntentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecommendedIntentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecommendedIntentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecommendedIntentsRequest::response(QNetworkReply * const reply) const
{
    return new ListRecommendedIntentsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListRecommendedIntentsRequestPrivate
 * \brief The ListRecommendedIntentsRequestPrivate class provides private implementation for ListRecommendedIntentsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListRecommendedIntentsRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListRecommendedIntentsRequestPrivate::ListRecommendedIntentsRequestPrivate(
    const LexModelsV2Request::Action action, ListRecommendedIntentsRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecommendedIntentsRequest
 * class' copy constructor.
 */
ListRecommendedIntentsRequestPrivate::ListRecommendedIntentsRequestPrivate(
    const ListRecommendedIntentsRequestPrivate &other, ListRecommendedIntentsRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
