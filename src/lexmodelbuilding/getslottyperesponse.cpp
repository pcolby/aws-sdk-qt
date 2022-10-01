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

#include "getslottyperesponse.h"
#include "getslottyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypeResponse
 * \brief The GetSlotTypeResponse class provides an interace for LexModelBuilding GetSlotType responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getSlotType
 */

/*!
 * Constructs a GetSlotTypeResponse object for \a reply to \a request, with parent \a parent.
 */
GetSlotTypeResponse::GetSlotTypeResponse(
        const GetSlotTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetSlotTypeResponsePrivate(this), parent)
{
    setRequest(new GetSlotTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSlotTypeRequest * GetSlotTypeResponse::request() const
{
    Q_D(const GetSlotTypeResponse);
    return static_cast<const GetSlotTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetSlotType \a response.
 */
void GetSlotTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSlotTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypeResponsePrivate
 * \brief The GetSlotTypeResponsePrivate class provides private implementation for GetSlotTypeResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetSlotTypeResponsePrivate object with public implementation \a q.
 */
GetSlotTypeResponsePrivate::GetSlotTypeResponsePrivate(
    GetSlotTypeResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetSlotType response element from \a xml.
 */
void GetSlotTypeResponsePrivate::parseGetSlotTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSlotTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
