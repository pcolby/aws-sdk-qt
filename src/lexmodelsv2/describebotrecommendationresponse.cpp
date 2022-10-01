// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
