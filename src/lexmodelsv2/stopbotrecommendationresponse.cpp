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

#include "stopbotrecommendationresponse.h"
#include "stopbotrecommendationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::StopBotRecommendationResponse
 * \brief The StopBotRecommendationResponse class provides an interace for LexModelsV2 StopBotRecommendation responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::stopBotRecommendation
 */

/*!
 * Constructs a StopBotRecommendationResponse object for \a reply to \a request, with parent \a parent.
 */
StopBotRecommendationResponse::StopBotRecommendationResponse(
        const StopBotRecommendationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new StopBotRecommendationResponsePrivate(this), parent)
{
    setRequest(new StopBotRecommendationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopBotRecommendationRequest * StopBotRecommendationResponse::request() const
{
    Q_D(const StopBotRecommendationResponse);
    return static_cast<const StopBotRecommendationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 StopBotRecommendation \a response.
 */
void StopBotRecommendationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopBotRecommendationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::StopBotRecommendationResponsePrivate
 * \brief The StopBotRecommendationResponsePrivate class provides private implementation for StopBotRecommendationResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a StopBotRecommendationResponsePrivate object with public implementation \a q.
 */
StopBotRecommendationResponsePrivate::StopBotRecommendationResponsePrivate(
    StopBotRecommendationResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 StopBotRecommendation response element from \a xml.
 */
void StopBotRecommendationResponsePrivate::parseStopBotRecommendationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopBotRecommendationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
