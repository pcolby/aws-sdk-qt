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

#include "listbuiltinslottypesresponse.h"
#include "listbuiltinslottypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBuiltInSlotTypesResponse
 * \brief The ListBuiltInSlotTypesResponse class provides an interace for LexModelsV2 ListBuiltInSlotTypes responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBuiltInSlotTypes
 */

/*!
 * Constructs a ListBuiltInSlotTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListBuiltInSlotTypesResponse::ListBuiltInSlotTypesResponse(
        const ListBuiltInSlotTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListBuiltInSlotTypesResponsePrivate(this), parent)
{
    setRequest(new ListBuiltInSlotTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBuiltInSlotTypesRequest * ListBuiltInSlotTypesResponse::request() const
{
    return static_cast<const ListBuiltInSlotTypesRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListBuiltInSlotTypes \a response.
 */
void ListBuiltInSlotTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBuiltInSlotTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListBuiltInSlotTypesResponsePrivate
 * \brief The ListBuiltInSlotTypesResponsePrivate class provides private implementation for ListBuiltInSlotTypesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBuiltInSlotTypesResponsePrivate object with public implementation \a q.
 */
ListBuiltInSlotTypesResponsePrivate::ListBuiltInSlotTypesResponsePrivate(
    ListBuiltInSlotTypesResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListBuiltInSlotTypes response element from \a xml.
 */
void ListBuiltInSlotTypesResponsePrivate::parseListBuiltInSlotTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBuiltInSlotTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
