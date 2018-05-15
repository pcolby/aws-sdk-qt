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

#include "startimportresponse.h"
#include "startimportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::StartImportResponse
 * \brief The StartImportResponse class provides an interace for LexModelBuildingService StartImport responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::startImport
 */

/*!
 * Constructs a StartImportResponse object for \a reply to \a request, with parent \a parent.
 */
StartImportResponse::StartImportResponse(
        const StartImportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new StartImportResponsePrivate(this), parent)
{
    setRequest(new StartImportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartImportRequest * StartImportResponse::request() const
{
    Q_D(const StartImportResponse);
    return static_cast<const StartImportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService StartImport \a response.
 */
void StartImportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartImportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::StartImportResponsePrivate
 * \brief The StartImportResponsePrivate class provides private implementation for StartImportResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a StartImportResponsePrivate object with public implementation \a q.
 */
StartImportResponsePrivate::StartImportResponsePrivate(
    StartImportResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService StartImport response element from \a xml.
 */
void StartImportResponsePrivate::parseStartImportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartImportResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
