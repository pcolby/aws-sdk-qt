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

#include "putslottyperesponse.h"
#include "putslottyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::PutSlotTypeResponse
 * \brief The PutSlotTypeResponse class provides an interace for LexModelBuildingService PutSlotType responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::putSlotType
 */

/*!
 * Constructs a PutSlotTypeResponse object for \a reply to \a request, with parent \a parent.
 */
PutSlotTypeResponse::PutSlotTypeResponse(
        const PutSlotTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new PutSlotTypeResponsePrivate(this), parent)
{
    setRequest(new PutSlotTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutSlotTypeRequest * PutSlotTypeResponse::request() const
{
    return static_cast<const PutSlotTypeRequest *>(LexModelBuildingServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService PutSlotType \a response.
 */
void PutSlotTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutSlotTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::PutSlotTypeResponsePrivate
 * \brief The PutSlotTypeResponsePrivate class provides private implementation for PutSlotTypeResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a PutSlotTypeResponsePrivate object with public implementation \a q.
 */
PutSlotTypeResponsePrivate::PutSlotTypeResponsePrivate(
    PutSlotTypeResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService PutSlotType response element from \a xml.
 */
void PutSlotTypeResponsePrivate::parsePutSlotTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSlotTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
