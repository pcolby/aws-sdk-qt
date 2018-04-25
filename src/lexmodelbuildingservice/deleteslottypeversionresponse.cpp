/*
    Copyright 2013-2018 Paul Colby

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

#include "deleteslottypeversionresponse.h"
#include "deleteslottypeversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::DeleteSlotTypeVersionResponse
 * \brief The DeleteSlotTypeVersionResponse class provides an interace for LexModelBuildingService DeleteSlotTypeVersion responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::deleteSlotTypeVersion
 */

/*!
 * Constructs a DeleteSlotTypeVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSlotTypeVersionResponse::DeleteSlotTypeVersionResponse(
        const DeleteSlotTypeVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteSlotTypeVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteSlotTypeVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSlotTypeVersionRequest * DeleteSlotTypeVersionResponse::request() const
{
    Q_D(const DeleteSlotTypeVersionResponse);
    return static_cast<const DeleteSlotTypeVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService DeleteSlotTypeVersion \a response.
 */
void DeleteSlotTypeVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSlotTypeVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::DeleteSlotTypeVersionResponsePrivate
 * \brief The DeleteSlotTypeVersionResponsePrivate class provides private implementation for DeleteSlotTypeVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a DeleteSlotTypeVersionResponsePrivate object with public implementation \a q.
 */
DeleteSlotTypeVersionResponsePrivate::DeleteSlotTypeVersionResponsePrivate(
    DeleteSlotTypeVersionResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService DeleteSlotTypeVersion response element from \a xml.
 */
void DeleteSlotTypeVersionResponsePrivate::parseDeleteSlotTypeVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSlotTypeVersionResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
