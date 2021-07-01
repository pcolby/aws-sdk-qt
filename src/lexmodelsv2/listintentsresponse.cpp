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

#include "listintentsresponse.h"
#include "listintentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListIntentsResponse
 * \brief The ListIntentsResponse class provides an interace for LexModelsV2 ListIntents responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listIntents
 */

/*!
 * Constructs a ListIntentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListIntentsResponse::ListIntentsResponse(
        const ListIntentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListIntentsResponsePrivate(this), parent)
{
    setRequest(new ListIntentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIntentsRequest * ListIntentsResponse::request() const
{
    Q_D(const ListIntentsResponse);
    return static_cast<const ListIntentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListIntents \a response.
 */
void ListIntentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIntentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListIntentsResponsePrivate
 * \brief The ListIntentsResponsePrivate class provides private implementation for ListIntentsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListIntentsResponsePrivate object with public implementation \a q.
 */
ListIntentsResponsePrivate::ListIntentsResponsePrivate(
    ListIntentsResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListIntents response element from \a xml.
 */
void ListIntentsResponsePrivate::parseListIntentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIntentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
