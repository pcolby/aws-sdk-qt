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
