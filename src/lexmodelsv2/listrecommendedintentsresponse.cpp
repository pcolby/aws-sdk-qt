// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecommendedintentsresponse.h"
#include "listrecommendedintentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListRecommendedIntentsResponse
 * \brief The ListRecommendedIntentsResponse class provides an interace for LexModelsV2 ListRecommendedIntents responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listRecommendedIntents
 */

/*!
 * Constructs a ListRecommendedIntentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRecommendedIntentsResponse::ListRecommendedIntentsResponse(
        const ListRecommendedIntentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListRecommendedIntentsResponsePrivate(this), parent)
{
    setRequest(new ListRecommendedIntentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRecommendedIntentsRequest * ListRecommendedIntentsResponse::request() const
{
    Q_D(const ListRecommendedIntentsResponse);
    return static_cast<const ListRecommendedIntentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListRecommendedIntents \a response.
 */
void ListRecommendedIntentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRecommendedIntentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListRecommendedIntentsResponsePrivate
 * \brief The ListRecommendedIntentsResponsePrivate class provides private implementation for ListRecommendedIntentsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListRecommendedIntentsResponsePrivate object with public implementation \a q.
 */
ListRecommendedIntentsResponsePrivate::ListRecommendedIntentsResponsePrivate(
    ListRecommendedIntentsResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListRecommendedIntents response element from \a xml.
 */
void ListRecommendedIntentsResponsePrivate::parseListRecommendedIntentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecommendedIntentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
