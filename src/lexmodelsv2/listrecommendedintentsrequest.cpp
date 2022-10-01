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
