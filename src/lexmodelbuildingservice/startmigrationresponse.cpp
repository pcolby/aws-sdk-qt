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

#include "startmigrationresponse.h"
#include "startmigrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::StartMigrationResponse
 * \brief The StartMigrationResponse class provides an interace for LexModelBuildingService StartMigration responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::startMigration
 */

/*!
 * Constructs a StartMigrationResponse object for \a reply to \a request, with parent \a parent.
 */
StartMigrationResponse::StartMigrationResponse(
        const StartMigrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new StartMigrationResponsePrivate(this), parent)
{
    setRequest(new StartMigrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartMigrationRequest * StartMigrationResponse::request() const
{
    Q_D(const StartMigrationResponse);
    return static_cast<const StartMigrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService StartMigration \a response.
 */
void StartMigrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartMigrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::StartMigrationResponsePrivate
 * \brief The StartMigrationResponsePrivate class provides private implementation for StartMigrationResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a StartMigrationResponsePrivate object with public implementation \a q.
 */
StartMigrationResponsePrivate::StartMigrationResponsePrivate(
    StartMigrationResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService StartMigration response element from \a xml.
 */
void StartMigrationResponsePrivate::parseStartMigrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMigrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
