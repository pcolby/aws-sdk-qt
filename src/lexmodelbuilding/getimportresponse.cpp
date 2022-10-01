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

#include "getimportresponse.h"
#include "getimportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetImportResponse
 * \brief The GetImportResponse class provides an interace for LexModelBuilding GetImport responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getImport
 */

/*!
 * Constructs a GetImportResponse object for \a reply to \a request, with parent \a parent.
 */
GetImportResponse::GetImportResponse(
        const GetImportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetImportResponsePrivate(this), parent)
{
    setRequest(new GetImportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImportRequest * GetImportResponse::request() const
{
    Q_D(const GetImportResponse);
    return static_cast<const GetImportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetImport \a response.
 */
void GetImportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetImportResponsePrivate
 * \brief The GetImportResponsePrivate class provides private implementation for GetImportResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetImportResponsePrivate object with public implementation \a q.
 */
GetImportResponsePrivate::GetImportResponsePrivate(
    GetImportResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetImport response element from \a xml.
 */
void GetImportResponsePrivate::parseGetImportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
