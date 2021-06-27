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

#include "listslottypesresponse.h"
#include "listslottypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListSlotTypesResponse
 * \brief The ListSlotTypesResponse class provides an interace for LexModelsV2 ListSlotTypes responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listSlotTypes
 */

/*!
 * Constructs a ListSlotTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSlotTypesResponse::ListSlotTypesResponse(
        const ListSlotTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListSlotTypesResponsePrivate(this), parent)
{
    setRequest(new ListSlotTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSlotTypesRequest * ListSlotTypesResponse::request() const
{
    return static_cast<const ListSlotTypesRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListSlotTypes \a response.
 */
void ListSlotTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSlotTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListSlotTypesResponsePrivate
 * \brief The ListSlotTypesResponsePrivate class provides private implementation for ListSlotTypesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListSlotTypesResponsePrivate object with public implementation \a q.
 */
ListSlotTypesResponsePrivate::ListSlotTypesResponsePrivate(
    ListSlotTypesResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListSlotTypes response element from \a xml.
 */
void ListSlotTypesResponsePrivate::parseListSlotTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSlotTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
