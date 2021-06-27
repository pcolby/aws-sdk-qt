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

#include "listbotversionsresponse.h"
#include "listbotversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotVersionsResponse
 * \brief The ListBotVersionsResponse class provides an interace for LexModelsV2 ListBotVersions responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBotVersions
 */

/*!
 * Constructs a ListBotVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBotVersionsResponse::ListBotVersionsResponse(
        const ListBotVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListBotVersionsResponsePrivate(this), parent)
{
    setRequest(new ListBotVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBotVersionsRequest * ListBotVersionsResponse::request() const
{
    return static_cast<const ListBotVersionsRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListBotVersions \a response.
 */
void ListBotVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBotVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListBotVersionsResponsePrivate
 * \brief The ListBotVersionsResponsePrivate class provides private implementation for ListBotVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotVersionsResponsePrivate object with public implementation \a q.
 */
ListBotVersionsResponsePrivate::ListBotVersionsResponsePrivate(
    ListBotVersionsResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListBotVersions response element from \a xml.
 */
void ListBotVersionsResponsePrivate::parseListBotVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBotVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
