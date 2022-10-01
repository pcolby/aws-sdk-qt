// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebotrecommendationrequest.h"
#include "describebotrecommendationrequest_p.h"
#include "describebotrecommendationresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotRecommendationRequest
 * \brief The DescribeBotRecommendationRequest class provides an interface for LexModelsV2 DescribeBotRecommendation requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBotRecommendation
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBotRecommendationRequest::DescribeBotRecommendationRequest(const DescribeBotRecommendationRequest &other)
    : LexModelsV2Request(new DescribeBotRecommendationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBotRecommendationRequest object.
 */
DescribeBotRecommendationRequest::DescribeBotRecommendationRequest()
    : LexModelsV2Request(new DescribeBotRecommendationRequestPrivate(LexModelsV2Request::DescribeBotRecommendationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBotRecommendationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBotRecommendationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBotRecommendationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBotRecommendationResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotRecommendationRequestPrivate
 * \brief The DescribeBotRecommendationRequestPrivate class provides private implementation for DescribeBotRecommendationRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotRecommendationRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeBotRecommendationRequestPrivate::DescribeBotRecommendationRequestPrivate(
    const LexModelsV2Request::Action action, DescribeBotRecommendationRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBotRecommendationRequest
 * class' copy constructor.
 */
DescribeBotRecommendationRequestPrivate::DescribeBotRecommendationRequestPrivate(
    const DescribeBotRecommendationRequestPrivate &other, DescribeBotRecommendationRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
