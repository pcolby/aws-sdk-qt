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
