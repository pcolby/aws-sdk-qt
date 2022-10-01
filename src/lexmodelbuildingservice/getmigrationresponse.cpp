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

#include "getmigrationresponse.h"
#include "getmigrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetMigrationResponse
 * \brief The GetMigrationResponse class provides an interace for LexModelBuilding GetMigration responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getMigration
 */

/*!
 * Constructs a GetMigrationResponse object for \a reply to \a request, with parent \a parent.
 */
GetMigrationResponse::GetMigrationResponse(
        const GetMigrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetMigrationResponsePrivate(this), parent)
{
    setRequest(new GetMigrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMigrationRequest * GetMigrationResponse::request() const
{
    Q_D(const GetMigrationResponse);
    return static_cast<const GetMigrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetMigration \a response.
 */
void GetMigrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMigrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetMigrationResponsePrivate
 * \brief The GetMigrationResponsePrivate class provides private implementation for GetMigrationResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetMigrationResponsePrivate object with public implementation \a q.
 */
GetMigrationResponsePrivate::GetMigrationResponsePrivate(
    GetMigrationResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetMigration response element from \a xml.
 */
void GetMigrationResponsePrivate::parseGetMigrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMigrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
