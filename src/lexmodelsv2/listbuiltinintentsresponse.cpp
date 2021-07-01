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

#include "listbuiltinintentsresponse.h"
#include "listbuiltinintentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBuiltInIntentsResponse
 * \brief The ListBuiltInIntentsResponse class provides an interace for LexModelsV2 ListBuiltInIntents responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBuiltInIntents
 */

/*!
 * Constructs a ListBuiltInIntentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBuiltInIntentsResponse::ListBuiltInIntentsResponse(
        const ListBuiltInIntentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListBuiltInIntentsResponsePrivate(this), parent)
{
    setRequest(new ListBuiltInIntentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBuiltInIntentsRequest * ListBuiltInIntentsResponse::request() const
{
    Q_D(const ListBuiltInIntentsResponse);
    return static_cast<const ListBuiltInIntentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListBuiltInIntents \a response.
 */
void ListBuiltInIntentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBuiltInIntentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListBuiltInIntentsResponsePrivate
 * \brief The ListBuiltInIntentsResponsePrivate class provides private implementation for ListBuiltInIntentsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBuiltInIntentsResponsePrivate object with public implementation \a q.
 */
ListBuiltInIntentsResponsePrivate::ListBuiltInIntentsResponsePrivate(
    ListBuiltInIntentsResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListBuiltInIntents response element from \a xml.
 */
void ListBuiltInIntentsResponsePrivate::parseListBuiltInIntentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBuiltInIntentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
