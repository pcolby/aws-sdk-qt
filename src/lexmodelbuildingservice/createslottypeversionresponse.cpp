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

#include "createslottypeversionresponse.h"
#include "createslottypeversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::CreateSlotTypeVersionResponse
 * \brief The CreateSlotTypeVersionResponse class provides an interace for LexModelBuildingService CreateSlotTypeVersion responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::createSlotTypeVersion
 */

/*!
 * Constructs a CreateSlotTypeVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSlotTypeVersionResponse::CreateSlotTypeVersionResponse(
        const CreateSlotTypeVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new CreateSlotTypeVersionResponsePrivate(this), parent)
{
    setRequest(new CreateSlotTypeVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSlotTypeVersionRequest * CreateSlotTypeVersionResponse::request() const
{
    return static_cast<const CreateSlotTypeVersionRequest *>(LexModelBuildingServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService CreateSlotTypeVersion \a response.
 */
void CreateSlotTypeVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSlotTypeVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::CreateSlotTypeVersionResponsePrivate
 * \brief The CreateSlotTypeVersionResponsePrivate class provides private implementation for CreateSlotTypeVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a CreateSlotTypeVersionResponsePrivate object with public implementation \a q.
 */
CreateSlotTypeVersionResponsePrivate::CreateSlotTypeVersionResponsePrivate(
    CreateSlotTypeVersionResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService CreateSlotTypeVersion response element from \a xml.
 */
void CreateSlotTypeVersionResponsePrivate::parseCreateSlotTypeVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSlotTypeVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
