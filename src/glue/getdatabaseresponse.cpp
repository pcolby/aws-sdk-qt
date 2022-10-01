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

#include "getdatabaseresponse.h"
#include "getdatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDatabaseResponse
 * \brief The GetDatabaseResponse class provides an interace for Glue GetDatabase responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getDatabase
 */

/*!
 * Constructs a GetDatabaseResponse object for \a reply to \a request, with parent \a parent.
 */
GetDatabaseResponse::GetDatabaseResponse(
        const GetDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDatabaseResponsePrivate(this), parent)
{
    setRequest(new GetDatabaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDatabaseRequest * GetDatabaseResponse::request() const
{
    Q_D(const GetDatabaseResponse);
    return static_cast<const GetDatabaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetDatabase \a response.
 */
void GetDatabaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDatabaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetDatabaseResponsePrivate
 * \brief The GetDatabaseResponsePrivate class provides private implementation for GetDatabaseResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDatabaseResponsePrivate object with public implementation \a q.
 */
GetDatabaseResponsePrivate::GetDatabaseResponsePrivate(
    GetDatabaseResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetDatabase response element from \a xml.
 */
void GetDatabaseResponsePrivate::parseGetDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDatabaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
