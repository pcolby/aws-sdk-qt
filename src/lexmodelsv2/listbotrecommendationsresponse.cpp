// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbotrecommendationsresponse.h"
#include "listbotrecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotRecommendationsResponse
 * \brief The ListBotRecommendationsResponse class provides an interace for LexModelsV2 ListBotRecommendations responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBotRecommendations
 */

/*!
 * Constructs a ListBotRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBotRecommendationsResponse::ListBotRecommendationsResponse(
        const ListBotRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListBotRecommendationsResponsePrivate(this), parent)
{
    setRequest(new ListBotRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBotRecommendationsRequest * ListBotRecommendationsResponse::request() const
{
    Q_D(const ListBotRecommendationsResponse);
    return static_cast<const ListBotRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListBotRecommendations \a response.
 */
void ListBotRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBotRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListBotRecommendationsResponsePrivate
 * \brief The ListBotRecommendationsResponsePrivate class provides private implementation for ListBotRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotRecommendationsResponsePrivate object with public implementation \a q.
 */
ListBotRecommendationsResponsePrivate::ListBotRecommendationsResponsePrivate(
    ListBotRecommendationsResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListBotRecommendations response element from \a xml.
 */
void ListBotRecommendationsResponsePrivate::parseListBotRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBotRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
