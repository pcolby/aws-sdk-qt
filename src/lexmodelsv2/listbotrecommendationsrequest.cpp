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

#include "listbotrecommendationsrequest.h"
#include "listbotrecommendationsrequest_p.h"
#include "listbotrecommendationsresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotRecommendationsRequest
 * \brief The ListBotRecommendationsRequest class provides an interface for LexModelsV2 ListBotRecommendations requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBotRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
ListBotRecommendationsRequest::ListBotRecommendationsRequest(const ListBotRecommendationsRequest &other)
    : LexModelsV2Request(new ListBotRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBotRecommendationsRequest object.
 */
ListBotRecommendationsRequest::ListBotRecommendationsRequest()
    : LexModelsV2Request(new ListBotRecommendationsRequestPrivate(LexModelsV2Request::ListBotRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBotRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBotRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBotRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new ListBotRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::ListBotRecommendationsRequestPrivate
 * \brief The ListBotRecommendationsRequestPrivate class provides private implementation for ListBotRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotRecommendationsRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
ListBotRecommendationsRequestPrivate::ListBotRecommendationsRequestPrivate(
    const LexModelsV2Request::Action action, ListBotRecommendationsRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBotRecommendationsRequest
 * class' copy constructor.
 */
ListBotRecommendationsRequestPrivate::ListBotRecommendationsRequestPrivate(
    const ListBotRecommendationsRequestPrivate &other, ListBotRecommendationsRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
