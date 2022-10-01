// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopbotrecommendationrequest.h"
#include "stopbotrecommendationrequest_p.h"
#include "stopbotrecommendationresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::StopBotRecommendationRequest
 * \brief The StopBotRecommendationRequest class provides an interface for LexModelsV2 StopBotRecommendation requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::stopBotRecommendation
 */

/*!
 * Constructs a copy of \a other.
 */
StopBotRecommendationRequest::StopBotRecommendationRequest(const StopBotRecommendationRequest &other)
    : LexModelsV2Request(new StopBotRecommendationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopBotRecommendationRequest object.
 */
StopBotRecommendationRequest::StopBotRecommendationRequest()
    : LexModelsV2Request(new StopBotRecommendationRequestPrivate(LexModelsV2Request::StopBotRecommendationAction, this))
{

}

/*!
 * \reimp
 */
bool StopBotRecommendationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopBotRecommendationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopBotRecommendationRequest::response(QNetworkReply * const reply) const
{
    return new StopBotRecommendationResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::StopBotRecommendationRequestPrivate
 * \brief The StopBotRecommendationRequestPrivate class provides private implementation for StopBotRecommendationRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a StopBotRecommendationRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
StopBotRecommendationRequestPrivate::StopBotRecommendationRequestPrivate(
    const LexModelsV2Request::Action action, StopBotRecommendationRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopBotRecommendationRequest
 * class' copy constructor.
 */
StopBotRecommendationRequestPrivate::StopBotRecommendationRequestPrivate(
    const StopBotRecommendationRequestPrivate &other, StopBotRecommendationRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
