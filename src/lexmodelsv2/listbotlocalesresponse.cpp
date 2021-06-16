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

#include "listbotlocalesresponse.h"
#include "listbotlocalesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBotLocalesResponse
 * \brief The ListBotLocalesResponse class provides an interace for LexModelsV2 ListBotLocales responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBotLocales
 */

/*!
 * Constructs a ListBotLocalesResponse object for \a reply to \a request, with parent \a parent.
 */
ListBotLocalesResponse::ListBotLocalesResponse(
        const ListBotLocalesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListBotLocalesResponsePrivate(this), parent)
{
    setRequest(new ListBotLocalesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBotLocalesRequest * ListBotLocalesResponse::request() const
{
    Q_D(const ListBotLocalesResponse);
    return static_cast<const ListBotLocalesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListBotLocales \a response.
 */
void ListBotLocalesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBotLocalesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListBotLocalesResponsePrivate
 * \brief The ListBotLocalesResponsePrivate class provides private implementation for ListBotLocalesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBotLocalesResponsePrivate object with public implementation \a q.
 */
ListBotLocalesResponsePrivate::ListBotLocalesResponsePrivate(
    ListBotLocalesResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListBotLocales response element from \a xml.
 */
void ListBotLocalesResponsePrivate::parseListBotLocalesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBotLocalesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
