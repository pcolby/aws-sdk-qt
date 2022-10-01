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
