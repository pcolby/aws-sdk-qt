// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startbotrecommendationrequest.h"
#include "startbotrecommendationrequest_p.h"
#include "startbotrecommendationresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::StartBotRecommendationRequest
 * \brief The StartBotRecommendationRequest class provides an interface for LexModelsV2 StartBotRecommendation requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::startBotRecommendation
 */

/*!
 * Constructs a copy of \a other.
 */
StartBotRecommendationRequest::StartBotRecommendationRequest(const StartBotRecommendationRequest &other)
    : LexModelsV2Request(new StartBotRecommendationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartBotRecommendationRequest object.
 */
StartBotRecommendationRequest::StartBotRecommendationRequest()
    : LexModelsV2Request(new StartBotRecommendationRequestPrivate(LexModelsV2Request::StartBotRecommendationAction, this))
{

}

/*!
 * \reimp
 */
bool StartBotRecommendationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartBotRecommendationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartBotRecommendationRequest::response(QNetworkReply * const reply) const
{
    return new StartBotRecommendationResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::StartBotRecommendationRequestPrivate
 * \brief The StartBotRecommendationRequestPrivate class provides private implementation for StartBotRecommendationRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a StartBotRecommendationRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
StartBotRecommendationRequestPrivate::StartBotRecommendationRequestPrivate(
    const LexModelsV2Request::Action action, StartBotRecommendationRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartBotRecommendationRequest
 * class' copy constructor.
 */
StartBotRecommendationRequestPrivate::StartBotRecommendationRequestPrivate(
    const StartBotRecommendationRequestPrivate &other, StartBotRecommendationRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
