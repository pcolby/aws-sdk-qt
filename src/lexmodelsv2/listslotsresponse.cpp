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

#include "listslotsresponse.h"
#include "listslotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListSlotsResponse
 * \brief The ListSlotsResponse class provides an interace for LexModelsV2 ListSlots responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listSlots
 */

/*!
 * Constructs a ListSlotsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSlotsResponse::ListSlotsResponse(
        const ListSlotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListSlotsResponsePrivate(this), parent)
{
    setRequest(new ListSlotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSlotsRequest * ListSlotsResponse::request() const
{
    Q_D(const ListSlotsResponse);
    return static_cast<const ListSlotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListSlots \a response.
 */
void ListSlotsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSlotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListSlotsResponsePrivate
 * \brief The ListSlotsResponsePrivate class provides private implementation for ListSlotsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListSlotsResponsePrivate object with public implementation \a q.
 */
ListSlotsResponsePrivate::ListSlotsResponsePrivate(
    ListSlotsResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListSlots response element from \a xml.
 */
void ListSlotsResponsePrivate::parseListSlotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSlotsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
