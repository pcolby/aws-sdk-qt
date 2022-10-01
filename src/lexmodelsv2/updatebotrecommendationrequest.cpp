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
