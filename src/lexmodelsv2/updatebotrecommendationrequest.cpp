// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebotrecommendationrequest.h"
#include "updatebotrecommendationrequest_p.h"
#include "updatebotrecommendationresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateBotRecommendationRequest
 * \brief The UpdateBotRecommendationRequest class provides an interface for LexModelsV2 UpdateBotRecommendation requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateBotRecommendation
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBotRecommendationRequest::UpdateBotRecommendationRequest(const UpdateBotRecommendationRequest &other)
    : LexModelsV2Request(new UpdateBotRecommendationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBotRecommendationRequest object.
 */
UpdateBotRecommendationRequest::UpdateBotRecommendationRequest()
    : LexModelsV2Request(new UpdateBotRecommendationRequestPrivate(LexModelsV2Request::UpdateBotRecommendationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBotRecommendationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBotRecommendationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBotRecommendationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBotRecommendationResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::UpdateBotRecommendationRequestPrivate
 * \brief The UpdateBotRecommendationRequestPrivate class provides private implementation for UpdateBotRecommendationRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateBotRecommendationRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
UpdateBotRecommendationRequestPrivate::UpdateBotRecommendationRequestPrivate(
    const LexModelsV2Request::Action action, UpdateBotRecommendationRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBotRecommendationRequest
 * class' copy constructor.
 */
UpdateBotRecommendationRequestPrivate::UpdateBotRecommendationRequestPrivate(
    const UpdateBotRecommendationRequestPrivate &other, UpdateBotRecommendationRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
