/*
    Copyright 2013-2019 Paul Colby

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

#include "getdatabasesresponse.h"
#include "getdatabasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDatabasesResponse
 * \brief The GetDatabasesResponse class provides an interace for Glue GetDatabases responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getDatabases
 */

/*!
 * Constructs a GetDatabasesResponse object for \a reply to \a request, with parent \a parent.
 */
GetDatabasesResponse::GetDatabasesResponse(
        const GetDatabasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDatabasesResponsePrivate(this), parent)
{
    setRequest(new GetDatabasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDatabasesRequest * GetDatabasesResponse::request() const
{
    Q_D(const GetDatabasesResponse);
    return static_cast<const GetDatabasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetDatabases \a response.
 */
void GetDatabasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDatabasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetDatabasesResponsePrivate
 * \brief The GetDatabasesResponsePrivate class provides private implementation for GetDatabasesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDatabasesResponsePrivate object with public implementation \a q.
 */
GetDatabasesResponsePrivate::GetDatabasesResponsePrivate(
    GetDatabasesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetDatabases response element from \a xml.
 */
void GetDatabasesResponsePrivate::parseGetDatabasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDatabasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
