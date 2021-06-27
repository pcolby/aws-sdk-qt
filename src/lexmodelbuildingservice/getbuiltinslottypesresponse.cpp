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

#include "getbuiltinslottypesresponse.h"
#include "getbuiltinslottypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBuiltinSlotTypesResponse
 * \brief The GetBuiltinSlotTypesResponse class provides an interace for LexModelBuildingService GetBuiltinSlotTypes responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBuiltinSlotTypes
 */

/*!
 * Constructs a GetBuiltinSlotTypesResponse object for \a reply to \a request, with parent \a parent.
 */
GetBuiltinSlotTypesResponse::GetBuiltinSlotTypesResponse(
        const GetBuiltinSlotTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBuiltinSlotTypesResponsePrivate(this), parent)
{
    setRequest(new GetBuiltinSlotTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBuiltinSlotTypesRequest * GetBuiltinSlotTypesResponse::request() const
{
    return static_cast<const GetBuiltinSlotTypesRequest *>(LexModelBuildingServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService GetBuiltinSlotTypes \a response.
 */
void GetBuiltinSlotTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBuiltinSlotTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetBuiltinSlotTypesResponsePrivate
 * \brief The GetBuiltinSlotTypesResponsePrivate class provides private implementation for GetBuiltinSlotTypesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetBuiltinSlotTypesResponsePrivate object with public implementation \a q.
 */
GetBuiltinSlotTypesResponsePrivate::GetBuiltinSlotTypesResponsePrivate(
    GetBuiltinSlotTypesResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetBuiltinSlotTypes response element from \a xml.
 */
void GetBuiltinSlotTypesResponsePrivate::parseGetBuiltinSlotTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBuiltinSlotTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
