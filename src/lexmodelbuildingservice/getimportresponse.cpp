/*
    Copyright 2013-2020 Paul Colby

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
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetImportResponse
 * \brief The GetImportResponse class provides an interace for LexModelBuildingService GetImport responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getImport
 */

/*!
 * Constructs a GetImportResponse object for \a reply to \a request, with parent \a parent.
 */
GetImportResponse::GetImportResponse(
        const GetImportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetImportResponsePrivate(this), parent)
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
 * Parses a successful LexModelBuildingService GetImport \a response.
 */
void GetImportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetImportResponsePrivate
 * \brief The GetImportResponsePrivate class provides private implementation for GetImportResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetImportResponsePrivate object with public implementation \a q.
 */
GetImportResponsePrivate::GetImportResponsePrivate(
    GetImportResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetImport response element from \a xml.
 */
void GetImportResponsePrivate::parseGetImportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
