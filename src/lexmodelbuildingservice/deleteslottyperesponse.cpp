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

#include "deleteslottyperesponse.h"
#include "deleteslottyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteSlotTypeResponse
 * \brief The DeleteSlotTypeResponse class provides an interace for LexModelBuilding DeleteSlotType responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteSlotType
 */

/*!
 * Constructs a DeleteSlotTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSlotTypeResponse::DeleteSlotTypeResponse(
        const DeleteSlotTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new DeleteSlotTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteSlotTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSlotTypeRequest * DeleteSlotTypeResponse::request() const
{
    Q_D(const DeleteSlotTypeResponse);
    return static_cast<const DeleteSlotTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding DeleteSlotType \a response.
 */
void DeleteSlotTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSlotTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::DeleteSlotTypeResponsePrivate
 * \brief The DeleteSlotTypeResponsePrivate class provides private implementation for DeleteSlotTypeResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteSlotTypeResponsePrivate object with public implementation \a q.
 */
DeleteSlotTypeResponsePrivate::DeleteSlotTypeResponsePrivate(
    DeleteSlotTypeResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding DeleteSlotType response element from \a xml.
 */
void DeleteSlotTypeResponsePrivate::parseDeleteSlotTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSlotTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
