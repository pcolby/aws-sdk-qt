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

#include "updatebotrecommendationresponse.h"
#include "updatebotrecommendationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateBotRecommendationResponse
 * \brief The UpdateBotRecommendationResponse class provides an interace for LexModelsV2 UpdateBotRecommendation responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateBotRecommendation
 */

/*!
 * Constructs a UpdateBotRecommendationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBotRecommendationResponse::UpdateBotRecommendationResponse(
        const UpdateBotRecommendationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new UpdateBotRecommendationResponsePrivate(this), parent)
{
    setRequest(new UpdateBotRecommendationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBotRecommendationRequest * UpdateBotRecommendationResponse::request() const
{
    Q_D(const UpdateBotRecommendationResponse);
    return static_cast<const UpdateBotRecommendationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 UpdateBotRecommendation \a response.
 */
void UpdateBotRecommendationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBotRecommendationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::UpdateBotRecommendationResponsePrivate
 * \brief The UpdateBotRecommendationResponsePrivate class provides private implementation for UpdateBotRecommendationResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateBotRecommendationResponsePrivate object with public implementation \a q.
 */
UpdateBotRecommendationResponsePrivate::UpdateBotRecommendationResponsePrivate(
    UpdateBotRecommendationResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 UpdateBotRecommendation response element from \a xml.
 */
void UpdateBotRecommendationResponsePrivate::parseUpdateBotRecommendationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBotRecommendationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
