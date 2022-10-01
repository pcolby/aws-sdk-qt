// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
