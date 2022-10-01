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

#include "describebotrecommendationresponse.h"
#include "describebotrecommendationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotRecommendationResponse
 * \brief The DescribeBotRecommendationResponse class provides an interace for LexModelsV2 DescribeBotRecommendation responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBotRecommendation
 */

/*!
 * Constructs a DescribeBotRecommendationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBotRecommendationResponse::DescribeBotRecommendationResponse(
        const DescribeBotRecommendationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeBotRecommendationResponsePrivate(this), parent)
{
    setRequest(new DescribeBotRecommendationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBotRecommendationRequest * DescribeBotRecommendationResponse::request() const
{
    Q_D(const DescribeBotRecommendationResponse);
    return static_cast<const DescribeBotRecommendationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeBotRecommendation \a response.
 */
void DescribeBotRecommendationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBotRecommendationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotRecommendationResponsePrivate
 * \brief The DescribeBotRecommendationResponsePrivate class provides private implementation for DescribeBotRecommendationResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotRecommendationResponsePrivate object with public implementation \a q.
 */
DescribeBotRecommendationResponsePrivate::DescribeBotRecommendationResponsePrivate(
    DescribeBotRecommendationResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeBotRecommendation response element from \a xml.
 */
void DescribeBotRecommendationResponsePrivate::parseDescribeBotRecommendationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBotRecommendationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
