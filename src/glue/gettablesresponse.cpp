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

#include "gettablesresponse.h"
#include "gettablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTablesResponse
 * \brief The GetTablesResponse class provides an interace for Glue GetTables responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTables
 */

/*!
 * Constructs a GetTablesResponse object for \a reply to \a request, with parent \a parent.
 */
GetTablesResponse::GetTablesResponse(
        const GetTablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTablesResponsePrivate(this), parent)
{
    setRequest(new GetTablesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTablesRequest * GetTablesResponse::request() const
{
    Q_D(const GetTablesResponse);
    return static_cast<const GetTablesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetTables \a response.
 */
void GetTablesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTablesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetTablesResponsePrivate
 * \brief The GetTablesResponsePrivate class provides private implementation for GetTablesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTablesResponsePrivate object with public implementation \a q.
 */
GetTablesResponsePrivate::GetTablesResponsePrivate(
    GetTablesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetTables response element from \a xml.
 */
void GetTablesResponsePrivate::parseGetTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTablesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
