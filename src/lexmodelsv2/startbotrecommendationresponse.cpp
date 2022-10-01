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

#include "startbotrecommendationresponse.h"
#include "startbotrecommendationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::StartBotRecommendationResponse
 * \brief The StartBotRecommendationResponse class provides an interace for LexModelsV2 StartBotRecommendation responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::startBotRecommendation
 */

/*!
 * Constructs a StartBotRecommendationResponse object for \a reply to \a request, with parent \a parent.
 */
StartBotRecommendationResponse::StartBotRecommendationResponse(
        const StartBotRecommendationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new StartBotRecommendationResponsePrivate(this), parent)
{
    setRequest(new StartBotRecommendationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartBotRecommendationRequest * StartBotRecommendationResponse::request() const
{
    Q_D(const StartBotRecommendationResponse);
    return static_cast<const StartBotRecommendationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 StartBotRecommendation \a response.
 */
void StartBotRecommendationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartBotRecommendationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::StartBotRecommendationResponsePrivate
 * \brief The StartBotRecommendationResponsePrivate class provides private implementation for StartBotRecommendationResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a StartBotRecommendationResponsePrivate object with public implementation \a q.
 */
StartBotRecommendationResponsePrivate::StartBotRecommendationResponsePrivate(
    StartBotRecommendationResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 StartBotRecommendation response element from \a xml.
 */
void StartBotRecommendationResponsePrivate::parseStartBotRecommendationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartBotRecommendationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
