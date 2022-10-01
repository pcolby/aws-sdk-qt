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

#include "getmigrationsresponse.h"
#include "getmigrationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetMigrationsResponse
 * \brief The GetMigrationsResponse class provides an interace for LexModelBuildingService GetMigrations responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getMigrations
 */

/*!
 * Constructs a GetMigrationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetMigrationsResponse::GetMigrationsResponse(
        const GetMigrationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetMigrationsResponsePrivate(this), parent)
{
    setRequest(new GetMigrationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMigrationsRequest * GetMigrationsResponse::request() const
{
    Q_D(const GetMigrationsResponse);
    return static_cast<const GetMigrationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService GetMigrations \a response.
 */
void GetMigrationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMigrationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetMigrationsResponsePrivate
 * \brief The GetMigrationsResponsePrivate class provides private implementation for GetMigrationsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetMigrationsResponsePrivate object with public implementation \a q.
 */
GetMigrationsResponsePrivate::GetMigrationsResponsePrivate(
    GetMigrationsResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetMigrations response element from \a xml.
 */
void GetMigrationsResponsePrivate::parseGetMigrationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMigrationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
