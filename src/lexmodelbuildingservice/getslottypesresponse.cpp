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

#include "getslottypesresponse.h"
#include "getslottypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetSlotTypesResponse
 * \brief The GetSlotTypesResponse class provides an interace for LexModelBuildingService GetSlotTypes responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getSlotTypes
 */

/*!
 * Constructs a GetSlotTypesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSlotTypesResponse::GetSlotTypesResponse(
        const GetSlotTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetSlotTypesResponsePrivate(this), parent)
{
    setRequest(new GetSlotTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSlotTypesRequest * GetSlotTypesResponse::request() const
{
    Q_D(const GetSlotTypesResponse);
    return static_cast<const GetSlotTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService GetSlotTypes \a response.
 */
void GetSlotTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSlotTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetSlotTypesResponsePrivate
 * \brief The GetSlotTypesResponsePrivate class provides private implementation for GetSlotTypesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetSlotTypesResponsePrivate object with public implementation \a q.
 */
GetSlotTypesResponsePrivate::GetSlotTypesResponsePrivate(
    GetSlotTypesResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetSlotTypes response element from \a xml.
 */
void GetSlotTypesResponsePrivate::parseGetSlotTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSlotTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
