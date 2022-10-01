// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
