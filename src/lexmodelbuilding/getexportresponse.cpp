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

#include "getexportresponse.h"
#include "getexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetExportResponse
 * \brief The GetExportResponse class provides an interace for LexModelBuilding GetExport responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getExport
 */

/*!
 * Constructs a GetExportResponse object for \a reply to \a request, with parent \a parent.
 */
GetExportResponse::GetExportResponse(
        const GetExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetExportResponsePrivate(this), parent)
{
    setRequest(new GetExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExportRequest * GetExportResponse::request() const
{
    Q_D(const GetExportResponse);
    return static_cast<const GetExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetExport \a response.
 */
void GetExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetExportResponsePrivate
 * \brief The GetExportResponsePrivate class provides private implementation for GetExportResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetExportResponsePrivate object with public implementation \a q.
 */
GetExportResponsePrivate::GetExportResponsePrivate(
    GetExportResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetExport response element from \a xml.
 */
void GetExportResponsePrivate::parseGetExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
