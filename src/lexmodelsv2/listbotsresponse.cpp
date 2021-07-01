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

#include "listbotsresponse.h"
#include "listbotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotsResponse
 * \brief The ListBotsResponse class provides an interace for LexModelsV2 ListBots responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBots
 */

/*!
 * Constructs a ListBotsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBotsResponse::ListBotsResponse(
        const ListBotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListBotsResponsePrivate(this), parent)
{
    setRequest(new ListBotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBotsRequest * ListBotsResponse::request() const
{
    Q_D(const ListBotsResponse);
    return static_cast<const ListBotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListBots \a response.
 */
void ListBotsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListBotsResponsePrivate
 * \brief The ListBotsResponsePrivate class provides private implementation for ListBotsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotsResponsePrivate object with public implementation \a q.
 */
ListBotsResponsePrivate::ListBotsResponsePrivate(
    ListBotsResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListBots response element from \a xml.
 */
void ListBotsResponsePrivate::parseListBotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBotsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
